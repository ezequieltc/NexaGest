#include <iostream>
#include <cstring>
#include "VentanaInicio.h"
#include "MenuPrincipal.h"
#include "Archivos.h"
#include <msclr/marshal_cppstd.h>
#include <Windows.h>

using namespace std;
using namespace NexaGest;

MenuPrincipal::MenuPrincipal() {
	InitializeComponent();
	Usuarios userConectado = Archivos::getUsuarioConectado();
	String^ user = String::Concat(gcnew String(userConectado.getNombre()), " ", gcnew String(userConectado.getApellido()));
	switch (userConectado.getTipo()) {
	case 2:
		labelTipo->Text = "Vendedor";
		break;
	case 3:
		labelTipo->Text = "Comprador";
		break;

	default:
		labelTipo->Text = "Administrador";
		break;
	}

	if (userConectado.getCrearCliente()) {
		buttonCrearCliente->Enabled = true;
		buttonCrearCliente->BackColor = Drawing::Color::SandyBrown;
	}
	else
	{
		buttonCrearCliente->Enabled = false;
		buttonCrearCliente->BackColor = Drawing::Color::PeachPuff;
	}

	if (userConectado.getCrearItem()) {
		buttonIngresarItem->Enabled = true;
		buttonIngresarItem->BackColor = Drawing::Color::SandyBrown;
	}
	else {
		buttonIngresarItem->Enabled = false;
		buttonIngresarItem->BackColor = Drawing::Color::PeachPuff;
	}

	if (userConectado.getCrearProveedor()) {
		buttonCrearProveedor->Enabled = true;
		buttonCrearProveedor->BackColor = Drawing::Color::SandyBrown;
	}
	else {
		buttonCrearProveedor->Enabled = false;
		buttonCrearProveedor->BackColor = Drawing::Color::PeachPuff;
	}
	if (userConectado.getOrdenDeCompra()) {
		buttonCompra->Enabled = true;
		buttonCompra->BackColor = Drawing::Color::SandyBrown;
		buttonVerCompras->Enabled = true;
		buttonVerCompras->BackColor = Drawing::Color::SandyBrown;
	}
	else {
		buttonCompra->Enabled = false;
		buttonCompra->BackColor = Drawing::Color::PeachPuff;
		buttonVerCompras->Enabled = false;
		buttonVerCompras->BackColor = Drawing::Color::PeachPuff;
	}
	if (userConectado.getOrdenDeVenta()) {
		buttonVenta->Enabled = true;
		buttonVenta->BackColor = Drawing::Color::SandyBrown;
		buttonVerVentas->Enabled = true;
		buttonVerVentas->BackColor = Drawing::Color::SandyBrown;
	}
	else {
		buttonVenta->Enabled = false;
		buttonVenta->BackColor = Drawing::Color::PeachPuff;
		buttonVerVentas->Enabled = false;
		buttonVerVentas->BackColor = Drawing::Color::PeachPuff;
	}
	if (userConectado.getCrearUser()) {
		buttonAgregarUsuario->Enabled = true;
		buttonAgregarUsuario->BackColor = Drawing::Color::SandyBrown;
	}
	else {
		buttonAgregarUsuario->Enabled = false;
		buttonAgregarUsuario->BackColor = Drawing::Color::PeachPuff;
	}
	labelUsuario->Text = user;
}

Void MenuPrincipal::MenuCierra(Object^ sender, FormClosedEventArgs^ e) {
	Application::Exit();
}

Void MenuPrincipal::buttonCerrarSesion_Click(System::Object^ sender, System::EventArgs^ e) {
	VentanaInicio^ ventanaInicio = gcnew VentanaInicio();
	ventanaInicio->Show();
	Close();

}

Void MenuPrincipal::buttonIngresarItem_Click(Object^ sender, EventArgs^ e) {
	if (ventanaItems == nullptr || ventanaItems->IsDisposed) {
		ventanaItems = gcnew VentanaItems();
		ventanaItems->Show();
	}
	else {
		ventanaItems->BringToFront();
	}
}

Void MenuPrincipal::botonInventario(System::Object^ sender, System::EventArgs^ e) {
	if (ventanaInventario == nullptr || ventanaInventario->IsDisposed) {
		ventanaInventario = gcnew VentanaInventario();
		ventanaInventario->Show();
	}
	else {
		ventanaInventario->BringToFront();
	}
}

Void MenuPrincipal::buttonVenta_Click(System::Object^ sender, System::EventArgs^ e) {
	if (menuVentas == nullptr || menuVentas->IsDisposed) {
		menuVentas = gcnew MenuVentas();
		menuVentas->Show();
	}
	else {
		menuVentas->BringToFront();
	}
}

Void MenuPrincipal::buttonAgregarUsuario_Click(System::Object^ sender, System::EventArgs^ e) {
	if (menuUsuario == nullptr || menuUsuario->IsDisposed) {
		menuUsuario = gcnew MenuNuevoUsuario();
		menuUsuario->Show();
	}
	else {
		menuUsuario->BringToFront();
	}
}

Void MenuPrincipal::buttonCrearCliente_Click(System::Object^ sender, System::EventArgs^ e) {
	if (menuCrearCliente == nullptr || menuCrearCliente->IsDisposed) {
		menuCrearCliente = gcnew MenuCrearCliente();
		menuCrearCliente->Show();
	}
	else {
		menuCrearCliente->BringToFront();
	}
}

Void MenuPrincipal::buttonVerVentas_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ventanaVerVentas == nullptr || ventanaVerVentas->IsDisposed) {
		ventanaVerVentas = gcnew VentanaVerVentas();
		ventanaVerVentas->Show();
	}
	else {
		ventanaVerVentas->BringToFront();
	}
}


Void MenuPrincipal::buttonCrearProveedor_Click(System::Object^ sender, System::EventArgs^ e) {
	if (crearProveedor == nullptr || crearProveedor->IsDisposed) {
		crearProveedor = gcnew MenuCrearProveedor();
		crearProveedor->Show();
	}
	else {
		crearProveedor->BringToFront();
	}
}

Void MenuPrincipal::buttonCompra_Click(System::Object^ sender, System::EventArgs^ e) {
	if (menuCompras == nullptr || menuCompras->IsDisposed) {
		menuCompras = gcnew MenuCompras();
		menuCompras->Show();
	}
	else {
		menuCompras->BringToFront();
	}
}


Void MenuPrincipal::buttonVerCompras_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ventanaVerCompras == nullptr || ventanaVerCompras->IsDisposed) {
		ventanaVerCompras = gcnew VentanaVerCompras();
		ventanaVerCompras->Show();
	}
	else {
		ventanaVerCompras->BringToFront();
	}
}