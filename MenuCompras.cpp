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
#include "MenuCompras.h"
using namespace std;
using namespace NexaGest;


MenuCompras::MenuCompras()
{
    InitializeComponent();
    int compra;
    Fecha fechaHoy;
    labelFecha->Text = gcnew System::String(fechaHoy.toString().c_str());
    Usuarios userConectado = Archivos::getUsuarioConectado();
    String^ user = String::Concat(gcnew String(userConectado.getNombre()), " ", gcnew String(userConectado.getApellido()));
    Archivos archBuff;
    archBuff.cargarVectorProveedores();
    archBuff.cargarVectorItems();
    archBuff.cargarVectorCompras();
    labelVendedor->Text = user;
    for (int i = 0; i < archBuff.vectorProveedores.size(); i++) {
        String^ nombreProveedor = gcnew System::String(archBuff.vectorProveedores[i].getEmpresa());
        comboBoxProveedor->Items->Add(nombreProveedor);

    }
    for (int i = 0; i < archBuff.vectorItems.size(); i++) {
        if (archBuff.vectorItems[i].getComprable()) {
            String^ nombreItem = gcnew System::String(archBuff.vectorItems[i].getNombre());
            String^ idItem = archBuff.vectorItems[i].getID().ToString();
            String^ nombreConID = String::Concat(idItem, ":", nombreItem);
            comboBoxItems->Items->Add(nombreConID);
        }
    }
    if (archBuff.vectorCompras.size() == 0) {
        labelNumeroCompra->Text = "0";
    }
    else {
        compra = archBuff.vectorCompras.back().getNumero() + 1;
        labelNumeroCompra->Text = Convert::ToString(compra);
    }
    actualizarValores();
}

void MenuCompras::actualizarValores() {
    labelNeto->Text = "$" + Convert::ToString(totalNeto);
    labelIVA->Text = "$" + Convert::ToString(iva);
    labelTotalVentas->Text = "$" + Convert::ToString(total);
}

void MenuCompras::actualizarVista() {
    Archivos archBuff;
    int compra;
    archBuff.cargarVectorCompras();
    if (archBuff.vectorCompras.size() == 0) {
        labelNumeroCompra->Text = "0";
    }
    else {
        compra = archBuff.vectorCompras.back().getNumero() + 1;
        labelNumeroCompra->Text = Convert::ToString(compra);
    }
    dataGridView1->Rows->Clear();
    totalNeto = 0;
    iva = 0;
    total = 0;
    comboBoxProveedor->Text = "";
    comboBoxItems->Text = "";
    numericUpDownCant->Value = 0;
    actualizarValores();
}


Void MenuCompras::buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
    Close();
}

Void MenuCompras::buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
    int cantidad;
    cantidad = Decimal::ToInt32(numericUpDownCant->Value);
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
                    float precio = archBuff.vectorItems[i].getCosto();
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


Void MenuCompras::buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
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

Void MenuCompras::buttonGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
    if (dataGridView1->Rows->Count > 0 && comboBoxProveedor->Text != "") {
        Archivos archBuff;
        archBuff.cargarVectorItems();
        archBuff.cargarVectorProveedores();
        archBuff.cargarVectorCompras();
        int numeroProveedor = Convert::ToInt32(labelNumeroCompra->Text);
        Usuarios userConectado = Archivos::getUsuarioConectado();
        Fecha fechaHoy;
        Compras compra(numeroProveedor, userConectado, total, fechaHoy, true);
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
                        compra.setProductos(archBuff.vectorItems[j], cantidad, i);
                        int cant = archBuff.vectorItems[j].getCantidad();
                        cant += cantidad;
                        archBuff.vectorItems[j].setCantidad(cant);
                    }
                }

            }
        }
        for (int i = 0; i < archBuff.vectorProveedores.size(); i++) {
            String^ nombre = comboBoxProveedor->Text;
            string nombreStd = msclr::interop::marshal_as<std::string>(nombre);
            const char* nombreChar = nombreStd.c_str();
            if (strcmp(nombreChar, archBuff.vectorProveedores[i].getEmpresa()) == 0) {
                compra.setProveedor(archBuff.vectorProveedores[i]);
            }
        }
        archBuff.vectorCompras.push_back(compra);
        MessageBox::Show("La orden de venta fue ingresada correctamente", "Orden de Venta", MessageBoxButtons::OK, MessageBoxIcon::Information);
        archBuff.guardarVectorCompras();
        archBuff.guardarVectorItems();
        actualizarVista();

    }
    else {
        MessageBox::Show("Faltan datos para poder ingresar la orden", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }


}
