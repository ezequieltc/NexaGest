#include "Persona.h";
#include "Clientes.h"
#include "Archivos.h"
#include <cstring>
#include <string>
#include <iostream>
#include "Proveedores.h"
#include <msclr/marshal_cppstd.h>
#include "MenuCrearProveedor.h"

using namespace std;
using namespace NexaGest;



Void MenuCrearProveedor::buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
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
	Proveedores provee(charEmpresa, charTelefono, charDireccion, charCuit,"",)
	Clientes cliente(charEmpresa, charRubro, charTelefono, charDireccion, charcontacto, charCuit, consumidorFinal, true, charEmpresa, "", charEmail, 0, true);
	archUser.vectorClientes.push_back(cliente);
	archUser.guardarVectorClientes();
	MessageBox::Show("Proveedor ingresado correctamente", "Exito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	textBoxEmpresa->Text = "";
	textBoxRubro->Text = "";
	textBoxTelefono->Text = "";
	textBoxDireccion->Text = "";
	textBoxEmail->Text = "";
	textBoxContacto->Text = "";
	textBoxCuit->Text = "";
	checkBoxConsumidorFinal->Checked = false;

}
Void MenuCrearProveedor::buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}


