#include "Persona.h";
#include "Clientes.h"
#include "Archivos.h"
#include <cstring>
#include <string>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include "MenuCrearCliente.h"

using namespace std;
using namespace NexaGest;

MenuCrearCliente::MenuCrearCliente() {
	InitializeComponent();
	actualizarListado();
}

Void MenuCrearCliente::buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxEmpresa->Text == "" && textBoxRubro->Text == "" && textBoxTelefono->Text == "" && textBoxDireccion->Text == "" && textBoxEmail->Text == "" && textBoxContacto->Text == "" && textBoxCuit->Text == "") {
		MessageBox::Show("Faltan completar campos. No pueden haber campos en blanco.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		Archivos archUser;
		archUser.cargarVectorClientes();
		String^ empresa = textBoxEmpresa->Text;
		String^ rubro = textBoxRubro->Text;
		String^ telefono = textBoxTelefono->Text;
		String^ direccion = textBoxDireccion->Text;
		String^ email = textBoxEmail->Text;
		String^ contacto = textBoxContacto->Text;
		String^ cuit = textBoxCuit->Text;
		std::string strEmpresa = msclr::interop::marshal_as<std::string>(empresa);
		std::string strRubro = msclr::interop::marshal_as<std::string>(rubro);
		std::string strTelefono = msclr::interop::marshal_as<std::string>(telefono);
		std::string strDireccion = msclr::interop::marshal_as<std::string>(direccion);
		std::string strEmail = msclr::interop::marshal_as<std::string>(email);
		std::string strContacto = msclr::interop::marshal_as<std::string>(contacto);
		std::string strCuit = msclr::interop::marshal_as<std::string>(cuit);
		const char* charEmpresa = strEmpresa.c_str();
		const char* charRubro = strRubro.c_str();
		const char* charTelefono = strTelefono.c_str();
		const char* charDireccion = strDireccion.c_str();
		const char* charEmail = strEmail.c_str();
		const char* charcontacto = strContacto.c_str();
		const char* charCuit = strCuit.c_str();
		bool consumidorFinal = checkBoxConsumidorFinal->Checked;
		int id;
		if (archUser.vectorClientes.size() == 0) {
			id = 0;
		}
		else {
			id = archUser.vectorClientes.back().getId() + 1;
		}
		Clientes cliente(charEmpresa, charRubro, charTelefono, charDireccion, charcontacto, charCuit, consumidorFinal, true, charEmpresa, "", charEmail, id, true);
		archUser.vectorClientes.push_back(cliente);
		archUser.guardarVectorClientes();
		MessageBox::Show("Cliente ingresado correctamente", "Exito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		textBoxEmpresa->Text = "";
		textBoxRubro->Text = "";
		textBoxTelefono->Text = "";
		textBoxDireccion->Text = "";
		textBoxEmail->Text = "";
		textBoxContacto->Text = "";
		textBoxCuit->Text = "";
		checkBoxConsumidorFinal->Checked = false;
		actualizarListado();
	}
}

void MenuCrearCliente::actualizarListado() {
	dataGridView1->Rows->Clear();
	Archivos archBuff;
	archBuff.cargarVectorClientes();
	for (int i = 0; i < archBuff.vectorClientes.size(); i++) {
		int id = archBuff.vectorClientes[i].getID();
		const char* charEmpresa = archBuff.vectorClientes[i].getEmpresa();
		const char* charCuit = archBuff.vectorClientes[i].getCuit();
		const char* charContacto = archBuff.vectorClientes[i].getContacto();
		const char* charTelefono = archBuff.vectorClientes[i].getTelefono();
		const char* charDireccion = archBuff.vectorClientes[i].getDireccion();
		String^ empresaSTR = gcnew String(charEmpresa);
		String^ cuitSTR = gcnew String(charCuit);
		String^ contactoSTR = gcnew String(charContacto);
		String^ telefonoSTR = gcnew String(charTelefono);
		String^ direccionSTR = gcnew String(charDireccion);
		dataGridView1->Rows->Add(empresaSTR, cuitSTR, contactoSTR, telefonoSTR, direccionSTR, id);
	}

}
Void MenuCrearCliente::buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}

Void MenuCrearCliente::buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	Archivos archBuff;
	archBuff.cargarVectorClientes();
	int idUsuario = 0;
	if (dataGridView1->SelectedRows->Count > 0) {
		int indiceFilaSeleccionada = dataGridView1->SelectedRows[0]->Index;
		idUsuario = Convert::ToInt32(dataGridView1->Rows[indiceFilaSeleccionada]->Cells["ID"]->Value);
		for (int i = 0; i < archBuff.vectorClientes.size(); i++) {
			if (idUsuario == archBuff.vectorClientes[i].getID()) {
				archBuff.vectorClientes.erase(archBuff.vectorClientes.begin() + i);
				archBuff.guardarVectorClientes();
				MessageBox::Show("Cliente eliminado correcto.", "Exito", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		dataGridView1->Rows->RemoveAt(indiceFilaSeleccionada);
		actualizarListado();
	}
	else {
		MessageBox::Show("Tiene que seleccionar una fila antes de poder eliminarla.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


