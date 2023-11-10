#include "MenuNuevoUsuario.h"
#include <iostream>
#include <cstring>
#include "Archivos.h"
#include "Usuarios.h"
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace std;
using namespace NexaGest;


Void MenuNuevoUsuario::buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}

Void MenuNuevoUsuario::buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	Archivos archUser;
	archUser.cargarVectorUsuarios();
	String^ nombre = textBoxNombre->Text;
	String^ apellido = textBoxApellido->Text;
	String^ usuario = textBoxUsuario->Text;
	String^ contrasena = textBoxContrasena->Text;
	String^ email = textBoxEmail->Text;
	String^ tipo = comboBoxTipo->Text;
	std::string strNombre = msclr::interop::marshal_as<std::string>(nombre);
	std::string strApellido = msclr::interop::marshal_as<std::string>(apellido);
	std::string strUsuario = msclr::interop::marshal_as<std::string>(usuario);
	std::string strContrasena = msclr::interop::marshal_as<std::string>(contrasena);
	std::string strEmail = msclr::interop::marshal_as<std::string>(email);
	std::string strTipo = msclr::interop::marshal_as<std::string>(tipo);
	const char* charNombre = strNombre.c_str();
	const char* charApellido = strApellido.c_str();
	const char* charUsuario = strUsuario.c_str();
	const char* charContrasena = strContrasena.c_str();
	const char* charEmail = strEmail.c_str();
	const char* charTipo = strTipo.c_str();
	int tipoUser;
	if (strcmp(charTipo, "Administrador") == 0){
		tipoUser = 1;

	}
	else if (strcmp(charTipo, "Vendedor") == 0){
		tipoUser = 2;

	}
	else {
		tipoUser = 3;

	}
	int objetivo = 0;
	bool ordenVenta = checkBoxOrdenVenta->Checked;
	bool ordenCompra = checkBoxOrdenCompra->Checked;
	bool crearUser = checkBoxUsuarios->Checked;
	bool crearItem = checkBoxItems->Checked;
	bool crearProveedor = checkBoxProveedores->Checked;
	bool crearCliente = checkBoxClientes->Checked;
	Usuarios User(charUsuario, charContrasena, crearUser, crearItem, ordenVenta, ordenCompra, crearCliente, crearProveedor, tipoUser, true, charNombre, charApellido, charEmail, 1, true);
	archUser.vectorUsuarios.push_back(User);
	archUser.guardarVectorUsuarios();
	MessageBox::Show("Usuario ingresado correctamente", "Exito", MessageBoxButtons::OK, MessageBoxIcon::Information);
	textBoxNombre->Text = "";
	textBoxApellido->Text = "";
	textBoxUsuario->Text = "";
	textBoxContrasena->Text = "";
	textBoxEmail->Text = "";
	comboBoxTipo->Text = "";
	checkBoxOrdenVenta->Checked = false;
	checkBoxOrdenCompra->Checked = false;
	checkBoxUsuarios->Checked = false;
	checkBoxItems->Checked = false;
	checkBoxProveedores->Checked = false;
	checkBoxClientes->Checked = false;

	



}
