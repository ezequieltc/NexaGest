#include <iostream>
#include <cstring>
#include "MenuPrincipal.h"

using namespace std;
using namespace NexaGest;


Void MenuPrincipal::MenuCierra(Object^ sender, FormClosedEventArgs^ e) {
	Application::Exit();
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