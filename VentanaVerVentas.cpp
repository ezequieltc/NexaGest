#include "VentanaVerVentas.h"
#include "Archivos.h"
#include "Ventas.h"
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

VentanaVerVentas::VentanaVerVentas() {
	InitializeComponent();
	cargarElementos();
	Archivos archBuff;
	archBuff.cargarVectorClientes();
	archBuff.cargarVectorUsuarios();
	for (int i = 0; i < archBuff.vectorClientes.size(); i++) {
		String^ nombreCliente = gcnew String(archBuff.vectorClientes[i].getEmpresa());
		comboBoxCliente->Items->Add(nombreCliente);
	}
	for (int i = 0; i < archBuff.vectorUsuarios.size(); i++) {
		if (archBuff.vectorUsuarios[i].getTipo() == 2 || archBuff.vectorUsuarios[i].getTipo() == 1) {
			String^ vendedorSTR = String::Concat(gcnew String(archBuff.vectorUsuarios[i].getNombre()), " ", gcnew String(archBuff.vectorUsuarios[i].getApellido()));
			comboBoxVendedor->Items->Add(vendedorSTR);
		}
	}
}

void VentanaVerVentas::cargarElementos() {
	dataGridView1->Rows->Clear();
	Archivos archBuff;
	archBuff.cargarVectorClientes();
	archBuff.cargarVectorItems();
	archBuff.cargarVectorVentas();
	archBuff.cargarVectorUsuarios();
	for (int i = 0; i < archBuff.vectorVentas.size(); i++) {
		int numeroVenta = archBuff.vectorVentas[i].getNumero();
		const char* cliente = archBuff.vectorVentas[i].getCliente().getEmpresa();
		string fechaVenta = archBuff.vectorVentas[i].getFecha().toString();
		float totalVenta = archBuff.vectorVentas[i].getTotal();
		const char* estadoVenta;
		Usuarios user = archBuff.vectorVentas[i].getUsuario();
		String^ userSTR = String::Concat(gcnew String(user.getNombre()), " ", gcnew String(user.getApellido()));
		if (archBuff.vectorVentas[i].getEstado()) {
			estadoVenta = "Activa";
		}
		else {
			estadoVenta = "Facturada";
		}
		String^ clienteSTR = gcnew String(cliente);
		//String^ fechaVentaSTR = gcnew String(fechaVenta);
		String^ estadoVentaSTR = gcnew String(estadoVenta);
		String^ fechaVentaSTR = msclr::interop::marshal_as<String^>(fechaVenta);
		dataGridView1->Rows->Add(numeroVenta, clienteSTR, fechaVentaSTR, totalVenta, userSTR, estadoVentaSTR);

	}

}
Void VentanaVerVentas::buttonFiltrar_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	Archivos archBuff;
	archBuff.cargarVectorVentas();
	vector<Ventas> vectorFiltro;
	for (int i = 0; i < archBuff.vectorVentas.size(); i++) {
		vectorFiltro.push_back(archBuff.vectorVentas[i]);
	}
	
	if (checkBoxCliente->Checked) {
		String^ clienteSeleccionado = comboBoxCliente->SelectedItem->ToString();
		string clienteSeleccionadoStr = msclr::interop::marshal_as<string>(clienteSeleccionado);
		const char* clienteSelec = clienteSeleccionadoStr.c_str();
		for (int i = 0; i < vectorFiltro.size(); i++) {
			if (strcmp(clienteSelec, vectorFiltro[i].getCliente().getEmpresa()) != 0) {
				vectorFiltro.erase(vectorFiltro.begin() + i);
				i--;
			}
		}

	}
	if (checkBoxVendedor->Checked) {
		String^ vendedorSeleccionado = comboBoxVendedor->Text;
		string vendedorSeleccionadoStr = msclr::interop::marshal_as<string>(vendedorSeleccionado);
		const char* vendedorSelec = vendedorSeleccionadoStr.c_str();
		for (int i = 0; i < vectorFiltro.size(); i++) {
			String^ userSTRING = String::Concat(gcnew String(vectorFiltro[i].getUsuario().getNombre()), " ", gcnew String(vectorFiltro[i].getUsuario().getApellido()));
			string userSTR = msclr::interop::marshal_as<string>(userSTRING);
			const char* charUser = userSTR.c_str();
			if (strcmp(charUser, vendedorSelec) != 0) {
				vectorFiltro.erase(vectorFiltro.begin() + i);
				i--;
			}
		}
		
	}
	if (checkBoxFecha->Checked) {
		for (int i = 0; i < vectorFiltro.size();) {
			if (anioDe <= vectorFiltro[i].getFecha().getAnio() && vectorFiltro[i].getFecha().getAnio() <= anioHasta &&
				mesDe <= vectorFiltro[i].getFecha().getMes() && vectorFiltro[i].getFecha().getMes() <= mesHasta &&
				diaDe <= vectorFiltro[i].getFecha().getDia() && vectorFiltro[i].getFecha().getDia() <= diaHasta) {
				i++;
			}
			else {
				vectorFiltro.erase(vectorFiltro.begin() + i);
			}
		}
	}

	if (checkBoxValores->Checked) {
		int valorDe = 0;
		int valorHasta = INT_MAX;
		if (textBoxValorDe->Text != "") {
			valorDe = Convert::ToInt32(textBoxValorDe->Text);
		}
		if (textBoxValorHasta->Text != "") {
			valorHasta = Convert::ToInt32(textBoxValorHasta->Text);
		}

		for (int i = 0; i < vectorFiltro.size(); i++) {
			if (valorDe > vectorFiltro[i].getTotal()) {
				vectorFiltro.erase(vectorFiltro.begin() + i);
				i--;
			}
		}
		for (int i = 0; i < vectorFiltro.size(); i++) {
			if (valorHasta > vectorFiltro[i].getTotal()) {
				vectorFiltro.erase(vectorFiltro.begin() + i);
				i--;
			}
		}
	}


	for (int i = 0; i < vectorFiltro.size(); i++) {
		int numeroVenta = vectorFiltro[i].getNumero();
		const char* cliente = vectorFiltro[i].getCliente().getEmpresa();
		string fechaVenta = vectorFiltro[i].getFecha().toString();
		float totalVenta = vectorFiltro[i].getTotal();
		const char* estadoVenta;
		Usuarios user = vectorFiltro[i].getUsuario();
		String^ userSTR = String::Concat(gcnew String(user.getNombre()), " ", gcnew String(user.getApellido()));
		if (vectorFiltro[i].getEstado()) {
			estadoVenta = "Activa";
		}
		else {
			estadoVenta = "Facturada";
		}
		String^ clienteSTR = gcnew String(cliente);
		//String^ fechaVentaSTR = gcnew String(fechaVenta);
		String^ estadoVentaSTR = gcnew String(estadoVenta);
		String^ fechaVentaSTR = msclr::interop::marshal_as<String^>(fechaVenta);
		dataGridView1->Rows->Add(numeroVenta, clienteSTR, fechaVentaSTR, totalVenta, userSTR, estadoVentaSTR);
	}

}
Void VentanaVerVentas::buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	cargarElementos();
	comboBoxCliente->Text = "";
	comboBoxVendedor->Text = "";
	textBoxDe->Text = "";
	textBoxHasta->Text = "";
	textBoxValorDe->Text = "";
	textBoxValorHasta->Text = "";
	checkBoxCliente->Checked = false;
	checkBoxFecha->Checked = false;
	checkBoxVendedor->Checked = false;
	checkBoxValores->Checked = false;
}
Void VentanaVerVentas::checkBoxFecha_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
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
Void VentanaVerVentas::checkBoxCliente_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBoxCliente->Checked) {
		comboBoxCliente->Enabled = false;
	}
	else
	{
		comboBoxCliente->Enabled = true;
	}

}
Void VentanaVerVentas::checkBoxVendedor_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBoxVendedor->Checked) {
		comboBoxVendedor->Enabled = false;
	}
	else
	{
		comboBoxVendedor->Enabled = true;
	}
}

Void VentanaVerVentas::checkBoxValores_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBoxValores->Checked) {
		textBoxValorDe->Enabled = false;
		textBoxValorHasta->Enabled = false;
	}
	else {
		textBoxValorDe->Enabled = true;
		textBoxValorHasta->Enabled = true;
	}
}

Void VentanaVerVentas::buttonCalendarioDe_Click(System::Object^ sender, System::EventArgs^ e) {
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

Void VentanaVerVentas::buttonCalendarioHasta_Click(System::Object^ sender, System::EventArgs^ e) {
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

