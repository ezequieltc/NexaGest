#include "VentanaVerCompras.h"
#include "Archivos.h"
#include "Compras.h"
#include "Clientes.h"
#include "Usuarios.h"
#include "Items.h"
#include "Fecha.h"
#include <iostream>
#include <cstring>
#include <limits>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>


using namespace std;
using namespace NexaGest;

VentanaVerCompras::VentanaVerCompras() {
	InitializeComponent();
	cargarElementos();
	Archivos archBuff;
	archBuff.cargarVectorCompras();
	archBuff.cargarVectorProveedores();
	archBuff.cargarVectorUsuarios();
	vector<Proveedores> vectorProveedores;
	vector<Usuarios> vectorComprador;
	bool existe = false;
	for (int i = 0; i < archBuff.vectorCompras.size(); i++) {
		if (vectorProveedores.size() > 0) {
			for (int j = 0; j < vectorProveedores.size(); j++) {
				if (strcmp(vectorProveedores[j].getEmpresa(), archBuff.vectorCompras[i].getProveedor().getEmpresa()) == 0) {
					existe = true;
				}
			}
			if (!existe) {
				vectorProveedores.push_back(archBuff.vectorCompras[i].getProveedor());
			}
		}
		else {
			vectorProveedores.push_back(archBuff.vectorCompras[i].getProveedor());
		}
		existe = false;
	}
	existe = false;
	for (int i = 0; i < vectorProveedores.size(); i++) {
		String^ nombreProveedor = gcnew String(vectorProveedores[i].getEmpresa());
		comboBoxProveedor->Items->Add(nombreProveedor);
	}


	for (int i = 0; i < archBuff.vectorCompras.size(); i++) {
		if (vectorComprador.size() > 0) {
			for (int j = 0; j < vectorComprador.size(); j++) {
				if (vectorComprador[j].getId() == archBuff.vectorCompras[i].getComprador().getId()) {
					existe = true;
				}
			}
			if (!existe) {
				vectorComprador.push_back(archBuff.vectorCompras[i].getComprador());
			}
		}
		else {
			vectorComprador.push_back(archBuff.vectorCompras[i].getComprador());
		}
		existe = false;
	}
	for (int i = 0; i < vectorComprador.size(); i++) {
		if (vectorComprador[i].getTipo() == 3 || vectorComprador[i].getTipo() == 1) {
			String^ compradorSTR = String::Concat(gcnew String(vectorComprador[i].getNombre()), " ", gcnew String(vectorComprador[i].getApellido()));
			comboBoxComprador->Items->Add(compradorSTR);
		}
	}


}

void VentanaVerCompras::cargarElementos() {
	dataGridView1->Rows->Clear();
	totalComprado = 0;
	totalCompras = 0;
	Archivos archBuff;
	archBuff.cargarVectorProveedores();
	archBuff.cargarVectorItems();
	archBuff.cargarVectorCompras();
	archBuff.cargarVectorUsuarios();
	for (int i = 0; i < archBuff.vectorCompras.size(); i++) {
		int numeroCompra = archBuff.vectorCompras[i].getNumero();
		const char* proveedor = archBuff.vectorCompras[i].getProveedor().getEmpresa();
		string fechaCompra = archBuff.vectorCompras[i].getFechaIngreso().toString();
		float totalCompra = archBuff.vectorCompras[i].getTotal();
		const char* estadoCompra;
		totalComprado += totalCompra;
		Usuarios user = archBuff.vectorCompras[i].getComprador();
		String^ userSTR = String::Concat(gcnew String(user.getNombre()), " ", gcnew String(user.getApellido()));
		if (archBuff.vectorCompras[i].getEstado()) {
			estadoCompra = "Activa";
		}
		else {
			estadoCompra = "Facturada";
		}
		String^ proveedorSTR = gcnew String(proveedor);
		String^ estadoCompraSTR = gcnew String(estadoCompra);
		String^ fechaCompraSTR = msclr::interop::marshal_as<String^>(fechaCompra);
		dataGridView1->Rows->Add(numeroCompra, proveedorSTR, fechaCompraSTR, totalCompra, userSTR, estadoCompraSTR);

	}
	totalCompras = archBuff.vectorCompras.size();
	String^ totalComprasSTR = Convert::ToString(totalCompras);
	labelCompras->Text = totalComprasSTR;
	String^ totalCompradoSTR = Convert::ToString(totalComprado);
	labelTotalComprado->Text = totalCompradoSTR;
}


Void VentanaVerCompras::buttonFiltrar_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	totalComprado = 0;
	totalCompras = 0;
	Archivos archBuff;
	archBuff.cargarVectorCompras();
	vector<Compras> vectorFiltro;
	for (int i = 0; i < archBuff.vectorCompras.size(); i++) {
		vectorFiltro.push_back(archBuff.vectorCompras[i]);
	}

	if (checkBoxProveedor->Checked) {
		String^ proveedorSeleccionado = comboBoxProveedor->SelectedItem->ToString();
		string proveedorSeleccionadoStr = msclr::interop::marshal_as<string>(proveedorSeleccionado);
		const char* proveedoreSelec = proveedorSeleccionadoStr.c_str();
		for (int i = 0; i < vectorFiltro.size(); i++) {
			if (strcmp(proveedoreSelec, vectorFiltro[i].getProveedor().getEmpresa()) != 0) {
				vectorFiltro.erase(vectorFiltro.begin() + i);
				i--;
			}
		}

	}
	if (checkBoxComprador->Checked) {
		String^ compradorSeleccionado = comboBoxComprador->Text;
		string compradorSeleccionadoStr = msclr::interop::marshal_as<string>(compradorSeleccionado);
		const char* compradorSelec = compradorSeleccionadoStr.c_str();
		for (int i = 0; i < vectorFiltro.size(); i++) {
			String^ userSTRING = String::Concat(gcnew String(vectorFiltro[i].getComprador().getNombre()), " ", gcnew String(vectorFiltro[i].getComprador().getApellido()));
			string userSTR = msclr::interop::marshal_as<string>(userSTRING);
			const char* charUser = userSTR.c_str();
			if (strcmp(charUser, compradorSelec) != 0) {
				vectorFiltro.erase(vectorFiltro.begin() + i);
				i--;
			}
		}

	}
	if (checkBoxFecha->Checked) {
		for (int i = 0; i < vectorFiltro.size();) {
			if (anioDe <= vectorFiltro[i].getFechaIngreso().getAnio() && vectorFiltro[i].getFechaIngreso().getAnio() <= anioHasta &&
				mesDe <= vectorFiltro[i].getFechaIngreso().getMes() && vectorFiltro[i].getFechaIngreso().getMes() <= mesHasta &&
				diaDe <= vectorFiltro[i].getFechaIngreso().getDia() && vectorFiltro[i].getFechaIngreso().getDia() <= diaHasta) {
				i++;
			}
			else {
				vectorFiltro.erase(vectorFiltro.begin() + i);
			}
		}
	}



	for (int i = 0; i < vectorFiltro.size(); i++) {
		int numeroCompra = vectorFiltro[i].getNumero();
		const char* proveedor = vectorFiltro[i].getProveedor().getEmpresa();
		string fechaCompra = vectorFiltro[i].getFechaIngreso().toString();
		float totalCompra = vectorFiltro[i].getTotal();
		const char* estadoCompra;
		totalComprado = totalCompra;
		Usuarios user = vectorFiltro[i].getComprador();
		String^ userSTR = String::Concat(gcnew String(user.getNombre()), " ", gcnew String(user.getApellido()));
		if (vectorFiltro[i].getEstado()) {
			estadoCompra = "Activa";
		}
		else {
			estadoCompra = "Facturada";
		}
		String^ proveedorSTR = gcnew String(proveedor);
		String^ estadoCompraSTR = gcnew String(estadoCompra);
		String^ fechaCompraSTR = msclr::interop::marshal_as<String^>(fechaCompra);
		dataGridView1->Rows->Add(numeroCompra, proveedorSTR, fechaCompraSTR, totalCompra, userSTR, estadoCompraSTR);

	}
	totalCompras = vectorFiltro.size();
	String^ totalComprasSTR = Convert::ToString(totalCompras);
	labelCompras->Text = totalComprasSTR;
	String^ totalCompradoSTR = Convert::ToString(totalComprado);
	labelTotalComprado->Text = totalCompradoSTR;
}
Void VentanaVerCompras::buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	cargarElementos();
	comboBoxProveedor->Text = "";
	comboBoxComprador->Text = "";
	textBoxDe->Text = "";
	textBoxHasta->Text = "";
	checkBoxProveedor->Checked = false;
	checkBoxFecha->Checked = false;
	checkBoxComprador->Checked = false;
}
Void VentanaVerCompras::buttonCalendarioDe_Click(System::Object^ sender, System::EventArgs^ e) {
	if (monthCalendarDe->Visible) {
		monthCalendarDe->Visible = false;
		DateTime fechaElegida = monthCalendarDe->SelectionStart;
		textBoxDe->Text = fechaElegida.ToShortDateString();
		diaDe = fechaElegida.Day;
		mesDe = fechaElegida.Month;
		anioDe = fechaElegida.Year;
	}
	else {
		monthCalendarDe->Visible = true;
		monthCalendarHasta->Visible = false;
		monthCalendarDe->BringToFront();
	}
}
Void VentanaVerCompras::buttonCalendarioHasta_Click(System::Object^ sender, System::EventArgs^ e) {
	if (monthCalendarHasta->Visible) {
		monthCalendarHasta->Visible = false;
		DateTime fechaElegida = monthCalendarHasta->SelectionStart;
		textBoxHasta->Text = fechaElegida.ToShortDateString();
		diaHasta = fechaElegida.Day;
		mesHasta = fechaElegida.Month;
		anioHasta = fechaElegida.Year;

	}
	else {
		monthCalendarDe->Visible = false;
		monthCalendarHasta->Visible = true;
		monthCalendarHasta->BringToFront();
	}
}
Void VentanaVerCompras::checkBoxFecha_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBoxFecha->Checked) {
		textBoxDe->Enabled = false;
		textBoxHasta->Enabled = false;
		buttonCalendarioDe->Enabled = false;
		buttonCalendarioHasta->Enabled = false;
	}
	else {
		textBoxDe->Enabled = true;
		textBoxHasta->Enabled = true;
		buttonCalendarioDe->Enabled = true;
		buttonCalendarioHasta->Enabled = true;
	}
}
Void VentanaVerCompras::checkBoxProveedor_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBoxProveedor->Checked) {
		comboBoxProveedor->Enabled = false;
	}
	else
	{
		comboBoxProveedor->Enabled = true;
	}
}
Void VentanaVerCompras::checkBoxComprador_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBoxComprador->Checked) {
		comboBoxComprador->Enabled = false;
	}
	else
	{
		comboBoxComprador->Enabled = true;
	}
}

Void VentanaVerCompras::buttonVerDatos_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3->Rows->Clear();
	int totalNeto;
	int iva;
	int totalVenta;
	Archivos archBuff;
	vector<Items> vectorItems;
	vector<int> vectorCantidad;
	archBuff.cargarVectorCompras();
	int idSeleccionado, indice;
	String^ numeroSTR;
	String^ ProveedorSTR;
	String^ CompradorSTR;
	if (dataGridView1->SelectedRows->Count > 0) {
		Object^ numeroCompra = dataGridView1->SelectedRows[0]->Cells[0]->Value;
		if (numeroCompra != nullptr) {
			idSeleccionado = Convert::ToInt32(numeroCompra);
			for (int i = 0; i < archBuff.vectorCompras.size(); i++) {
				if (archBuff.vectorCompras[i].getNumero() == idSeleccionado) {
					numeroSTR = Convert::ToString(archBuff.vectorCompras[i].getNumero());
					ProveedorSTR = Convert::ToString(gcnew String(archBuff.vectorCompras[i].getProveedor().getEmpresa()));
					CompradorSTR = String::Concat(gcnew String(archBuff.vectorCompras[i].getComprador().getNombre()), " ", gcnew String(archBuff.vectorCompras[i].getComprador().getApellido()));
					for (int j = 0; j < 20; j++) {
						if (archBuff.vectorCompras[i].getCantidad()[j] > 0) {
							vectorItems.push_back(archBuff.vectorCompras[i].getProducto()[j]);
							vectorCantidad.push_back(archBuff.vectorCompras[i].getCantidad()[j]);
						}
					}
					for (int j = 0; j < vectorItems.size(); j++) {
						String^ nombreItemSTR = Convert::ToString(gcnew String(vectorItems[j].getNombre()));
						int cantidad = vectorCantidad[j];
						int total = vectorCantidad[j] * vectorItems[j].getPrecio();
						dataGridView3->Rows->Add(nombreItemSTR, cantidad, vectorItems[j].getPrecio(), total);
					}
					totalVenta = archBuff.vectorCompras[i].getTotal();
				}

			}
			iva = totalVenta * .21;
			totalNeto = totalVenta - iva;
			labelNeto->Text = Convert::ToString(totalNeto);
			labelIVA->Text = Convert::ToString(iva);
			labelTotalVentas->Text = Convert::ToString(totalVenta);
			labelNumeroCompra->Text = Convert::ToString(numeroCompra);
			labelProveedor->Text = ProveedorSTR;
			labelComprador->Text = CompradorSTR;


		}
	}
	else {
		MessageBox::Show("Tiene que seleccionar una fila antes de poder cancelarla.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
