#include "Usuarios.h"
#include "Archivos.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include "Fecha.h"
#include <cstring>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "MenuVentas.h"
using namespace std;
using namespace NexaGest;


MenuVentas::MenuVentas()
{
	InitializeComponent();
    int venta;
    Fecha fechaHoy;
    labelFecha->Text = gcnew System::String(fechaHoy.toString().c_str());
    Usuarios userConectado = Archivos::getUsuarioConectado();
    String^ user = String::Concat(gcnew String(userConectado.getNombre()), " ", gcnew String(userConectado.getApellido()));
    Archivos archBuff;
    archBuff.cargarVectorClientes();
    archBuff.cargarVectorItems();
    archBuff.cargarVectorVentas();
    labelVendedor->Text = user;
    for (int i = 0; i<archBuff.vectorClientes.size(); i++) {
        String^ nombreCliente = gcnew System::String(archBuff.vectorClientes[i].getEmpresa());
        comboBoxCliente->Items->Add(nombreCliente);
    }
    for (int i = 0; i < archBuff.vectorItems.size(); i++) {
        String^ nombreItem = gcnew System::String(archBuff.vectorItems[i].getNombre());
        String^ idItem = archBuff.vectorItems[i].getID().ToString();
        String^ nombreConID = String::Concat(idItem,":",nombreItem);
        comboBoxItems->Items->Add(nombreConID);
    }
    if (archBuff.vectorVentas.size() == 0) {
        labelNumeroVenta->Text = "0";
    }
    else {
        venta = archBuff.vectorVentas.back().getNumero()+1;
        labelNumeroVenta->Text = Convert::ToString(venta);
    }
    actualizarValores();
}

void MenuVentas::actualizarValores() {
    labelNeto->Text = "$" + Convert::ToString(totalNeto);
    labelIVA->Text = "$" + Convert::ToString(iva);
    labelTotalVentas->Text = "$" + Convert::ToString(total);
}

void MenuVentas::actualizarVista() {
    Archivos archBuff;
    int venta;
    archBuff.cargarVectorVentas();
    if (archBuff.vectorVentas.size() == 0) {
        labelNumeroVenta->Text = "0";
    }
    else {
        venta = archBuff.vectorVentas.back().getNumero() + 1;
        labelNumeroVenta->Text = Convert::ToString(venta);
    }
    dataGridView1->Rows->Clear();
    totalNeto = 0;
    iva = 0;
    total = 0;
    comboBoxCliente->Text = "";
    comboBoxItems->Text = "";
    textBoxCantidad->Text = "";
    actualizarValores();
}


Void MenuVentas::buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
    Close();
}

Void MenuVentas::buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
    int cantidad;
    if (textBoxCantidad->Text == "") {
        cantidad = 0;
    }
    else {
        cantidad = Convert::ToInt32(textBoxCantidad->Text);
    }
    if (cantidad <= 0) {
        MessageBox::Show("Se debe ingresar una cantidad mayor a '0'.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    else {
        if (dataGridView1->Rows->Count <= 20) {
            String^ seleccionado = comboBoxItems->SelectedItem->ToString();
            string strStd = msclr::interop::marshal_as<std::string>(seleccionado);
            size_t pos = strStd.find(':');
            string parte1 = strStd.substr(0, pos);
            int idSeleccionado = stoi(parte1);
            Archivos archBuff;
            archBuff.cargarVectorItems();
            for (int i = 0; i < archBuff.vectorItems.size(); i++) {
                if (archBuff.vectorItems[i].getID() == idSeleccionado) {
                    const char* nombre = archBuff.vectorItems[i].getNombre();
                    const char* descripcion = archBuff.vectorItems[i].getDescripcion();
                    float precio = archBuff.vectorItems[i].getPrecio();
                    float totalItem = precio * cantidad;
                    int idItem = archBuff.vectorItems[i].getID();
                    String^ nombreSTR = gcnew String(nombre);
                    String^ descripcionSTR = gcnew String(descripcion);
                    dataGridView1->Rows->Add(nombreSTR, descripcionSTR, cantidad, precio, 0, totalItem, idItem);
                    totalNeto += totalItem;
                    iva = totalNeto * (0.21);
                    total = totalNeto + iva;
                    actualizarValores();
                }
            }
        }
        else {
            MessageBox::Show("Se alcanzó el máximo de 20 objetos.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }

}


Void MenuVentas::buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView1->SelectedRows->Count > 0) {
        int indiceFilaSeleccionada = dataGridView1->SelectedRows[0]->Index;
        totalNeto -= Convert::ToSingle(dataGridView1->Rows[indiceFilaSeleccionada]->Cells["TotalColumna"]->Value);
        dataGridView1->Rows->RemoveAt(indiceFilaSeleccionada);
        iva = totalNeto * 0.21;
        total = totalNeto + iva;
        actualizarValores();
    }
    else {
        MessageBox::Show("Tiene que seleccionar una fila antes de poder eliminarla.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

Void MenuVentas::buttonGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView1->Rows->Count > 0 && comboBoxCliente->Text != "") {
        Archivos archBuff;
        archBuff.cargarVectorItems();
        archBuff.cargarVectorClientes();
        archBuff.cargarVectorVentas();
        int numeroVenta = Convert::ToInt32(labelNumeroVenta->Text);
        Usuarios userConectado = Archivos::getUsuarioConectado();
        Fecha fechaHoy;
        Ventas venta(numeroVenta, userConectado, total, true, fechaHoy);
        for (int i = 0; i < dataGridView1->Rows->Count; i++)
        {
            Object^ idValor = dataGridView1->Rows[i]->Cells[6]->Value;
            Object^ cantidadValor = dataGridView1->Rows[i]->Cells[2]->Value;
            if (idValor != nullptr)
            {
                int id = Convert::ToInt32(idValor);
                int cantidad = Convert::ToInt32(cantidadValor);
                for (int j = 0; j < archBuff.vectorItems.size(); j++) {
                    if (archBuff.vectorItems[j].getID() == id) {
                        venta.setProductos(archBuff.vectorItems[j], cantidad, i);
                        int cant = archBuff.vectorItems[j].getCantidad();
                        cant -= cantidad;
                        archBuff.vectorItems[j].setCantidad(cant);
                    }
                }

            }
        }
        for (int i = 0; i < archBuff.vectorClientes.size(); i++) {
            String^ nombre = comboBoxCliente->Text;
            string nombreStd = msclr::interop::marshal_as<std::string>(nombre);
            const char* nombreChar = nombreStd.c_str();
            if (strcmp(nombreChar, archBuff.vectorClientes[i].getEmpresa()) == 0) {
                venta.setCliente(archBuff.vectorClientes[i]);
            }
        }
        archBuff.vectorVentas.push_back(venta);
        MessageBox::Show("La orden de venta fue ingresada correctamente", "Orden de Venta", MessageBoxButtons::OK, MessageBoxIcon::Information);
        archBuff.guardarVectorVentas();
        archBuff.guardarVectorItems();
        actualizarVista();

    }
    else {
        MessageBox::Show("Faltan datos para poder ingresar la orden", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
    

}
