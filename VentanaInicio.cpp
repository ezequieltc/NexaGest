#include "VentanaInicio.h"
#include "Usuarios.h"
#include "Archivos.h"
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;
using namespace NexaGest;


VentanaInicio::VentanaInicio()
{
	InitializeComponent();
	Archivos::verificarArchivos();
}

Void VentanaInicio::buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
	
}


Void VentanaInicio::buttonIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
	bool existeUser = false;
	const char* userr;
	Archivos archUser;
	archUser.cargarVectorUsuarios();
	string userSTR;
	string contrasenaSTR;
	userSTR = msclr::interop::marshal_as<string>(textBox1->Text);
	contrasenaSTR = msclr::interop::marshal_as<string>(textBox2->Text);
	const char* userIngresado = userSTR.c_str();
	const char* userContrasena = contrasenaSTR.c_str();
	for (int i = 0; i < archUser.vectorUsuarios.size(); i++) {
		if (strcmp(userIngresado, archUser.vectorUsuarios[i].getUsuario()) == 0 && strcmp(userContrasena, archUser.vectorUsuarios[i].getContrasena()) == 0) {
			existeUser = true;
			archUser.setUsuarioConectado(archUser.vectorUsuarios[i]);

		}
	}


	if (existeUser) {
		MenuPrincipal^ menuPrincipal = gcnew MenuPrincipal();
		menuPrincipal->Show();
		Hide();
	}
	else {
		MessageBox::Show("Los datos ingresados no son correctos o el usuario no existe.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}