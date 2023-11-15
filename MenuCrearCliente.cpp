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
		Clientes cliente(charEmpresa, charRubro, charTelefono, charDireccion, charcontacto, charCuit, consumidorFinal, true, charEmpresa, "", charEmail, 0, true);
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
	}
}
Void MenuCrearCliente::buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}


