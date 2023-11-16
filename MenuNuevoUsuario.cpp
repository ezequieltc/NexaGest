#include "MenuNuevoUsuario.h"
#include <iostream>
#include <cstring>
#include "Archivos.h"
#include "Usuarios.h"
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace std;
using namespace NexaGest;

MenuNuevoUsuario::MenuNuevoUsuario() {
	InitializeComponent();
	actualizarListado();
	
}

void MenuNuevoUsuario::actualizarListado() {
	dataGridView1->Rows->Clear();
	Archivos archBuff;
	archBuff.cargarVectorUsuarios();
	for (int i = 0; i < archBuff.vectorUsuarios.size(); i++) {
		const char* charNombre = archBuff.vectorUsuarios[i].getNombre();
		const char* charApellido = archBuff.vectorUsuarios[i].getApellido();
		const char* charUsuario = archBuff.vectorUsuarios[i].getUsuario();
		const char* charContrasena = archBuff.vectorUsuarios[i].getContrasena();
		const char* charEmail = archBuff.vectorUsuarios[i].getEmail();
		int tipo = archBuff.vectorUsuarios[i].getTipo();
		int id = archBuff.vectorUsuarios[i].getId();
		char charTipo[13];
		if (tipo == 1) {
			strcpy(charTipo, "Administrador");
		}
		else if (tipo == 2) {
			strcpy(charTipo, "Vendedor");
		}
		else {
			strcpy(charTipo, "Comprador");
		}

		String^ nombreSTR = gcnew String(charNombre);
		String^ apellidoSTR = gcnew String(charApellido);
		String^ usuarioSTR = gcnew String(charUsuario);
		String^ contrasenaSTR = gcnew String(charContrasena);
		String^ emailSTR = gcnew String(charEmail);
		String^ tipoSTR = gcnew String(charTipo);
		dataGridView1->Rows->Add(nombreSTR, apellidoSTR, usuarioSTR, contrasenaSTR, emailSTR, tipoSTR,id);
	}
}

Void MenuNuevoUsuario::buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}

void MenuNuevoUsuario::limpiarValores() {
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

Void MenuNuevoUsuario::buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxNombre->Text == "" && textBoxApellido->Text == "" && textBoxUsuario->Text == "" && textBoxContrasena->Text == "" && textBoxEmail->Text == "" && comboBoxTipo->Text == "") {
		MessageBox::Show("Hay campos incompletos. Todos los campos deben ser completados.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
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
		for (int i = 0; i < archUser.vectorUsuarios.size(); i++) {
			if (strcmp(archUser.vectorUsuarios[i].getUsuario(), charUsuario) == 0) {
				MessageBox::Show("El usuario ya existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
		const char* charContrasena = strContrasena.c_str();
		const char* charEmail = strEmail.c_str();
		const char* charTipo = strTipo.c_str();
		int tipoUser;
		if (strcmp(charTipo, "Administrador") == 0) {
			tipoUser = 1;

		}
		else if (strcmp(charTipo, "Vendedor") == 0) {
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
		int id;
		if (archUser.vectorUsuarios.size() == 0) {
			id = 0;
		}
		else {
			id = archUser.vectorUsuarios.back().getId() + 1;
		}
		Usuarios User(charUsuario, charContrasena, crearUser, crearItem, ordenVenta, ordenCompra, crearCliente, crearProveedor, tipoUser, true, charNombre, charApellido, charEmail, id, true);
		archUser.vectorUsuarios.push_back(User);
		archUser.guardarVectorUsuarios();
		MessageBox::Show("Usuario ingresado correctamente", "Exito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		limpiarValores();
		actualizarListado();
	}
}

Void MenuNuevoUsuario::buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	Archivos archUser;
	archUser.cargarVectorUsuarios();
	int idUsuario;
	if (dataGridView1->SelectedRows->Count > 0) {
		int indiceFilaSeleccionada = dataGridView1->SelectedRows[0]->Index;
		idUsuario = Convert::ToInt32(dataGridView1->Rows[indiceFilaSeleccionada]->Cells["ID"]->Value);
		for (int i = 0; i < archUser.vectorUsuarios.size(); i++) {
			if (idUsuario == archUser.vectorUsuarios[i].getId()) {
				archUser.vectorUsuarios.erase(archUser.vectorUsuarios.begin() + i);
				archUser.guardarVectorUsuarios();
				MessageBox::Show("Usuario eliminado.", "Exito", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		dataGridView1->Rows->RemoveAt(indiceFilaSeleccionada);
		actualizarListado();
	}
	else {
		MessageBox::Show("Tiene que seleccionar una fila antes de poder eliminarla.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

Void MenuNuevoUsuario::comboBoxTipo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBoxTipo->Text == "Administrador") {
		checkBoxOrdenVenta->Checked = true;
		checkBoxOrdenCompra->Checked = true;
		checkBoxUsuarios->Checked = true;
		checkBoxItems->Checked = true;
		checkBoxProveedores->Checked = true;
		checkBoxClientes->Checked = true;
	}
	else if (comboBoxTipo->Text == "Vendedor") {
		checkBoxOrdenVenta->Checked = true;
		checkBoxOrdenCompra->Checked = false;
		checkBoxUsuarios->Checked = false;
		checkBoxItems->Checked = false;
		checkBoxProveedores->Checked = false;
		checkBoxClientes->Checked = true;
	}
	else {
		checkBoxOrdenVenta->Checked = false;
		checkBoxOrdenCompra->Checked = true;
		checkBoxUsuarios->Checked = false;
		checkBoxItems->Checked = false;
		checkBoxProveedores->Checked = true;
		checkBoxClientes->Checked = false;
	}
}
