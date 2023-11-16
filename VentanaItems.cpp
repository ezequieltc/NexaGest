#include <iostream>
#include <cstring>
#include <vector>
#include "Items.h"
#include "VentanaItems.h"
#include "Archivos.h"
#include <iostream>
#include <cstring>
#include <cctype>
#include <msclr/marshal_cppstd.h>
using namespace std;
using namespace NexaGest;

Void  VentanaItems::botonIngresar(System::Object^ sender, System::EventArgs^ e) {
	ingresarItem();
}
Void VentanaItems::botonCancelar(System::Object^ sender, System::EventArgs^ e) {
	Close();
}

void VentanaItems::ingresarItem() {
	Archivos arch;
	arch.cargarVectorItems();
	const char* nombre;
	string nombreSTR;
	const char* descripcion;
	string descripcionSTR;
	const char* marca;
	string marcaSTR;
	float precio;
	float costo;
	int cantidad;
	int id;
	bool vendible;
	bool comprable;
	bool estado;
	nombreSTR = msclr::interop::marshal_as<string>(textBoxNombre->Text);
	descripcionSTR = msclr::interop::marshal_as<string>(textBoxDescripcion->Text);
	marcaSTR = msclr::interop::marshal_as<string>(textBoxMarca->Text);


	if (nombreSTR.empty() || descripcionSTR.empty()|| marcaSTR.empty()) {
		MessageBox::Show("Hay campos incompletos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		nombre = nombreSTR.c_str();
		descripcion = descripcionSTR.c_str();
		marca = marcaSTR.c_str();
		//precio = stof(msclr::interop::marshal_as<string>(textBoxPrecio->Text));
		precio = Decimal::ToInt32(numericUpDownPre->Value);
		//costo = stof(msclr::interop::marshal_as<string>(textBoxCosto->Text));
		costo = Decimal::ToInt32(numericUpDownCos->Value);
		cantidad = Decimal::ToInt32(numericUpDownCant->Value);
		vendible = checkBoxVendible->Checked;
		comprable = checkBoxComprable->Checked;
		estado = checkBoxEstado->Checked;
		if (arch.vectorItems.size() == 0) {
			id = 0;
		}
		else {
			id = arch.vectorItems.back().getID() + 1;
		}

		Items item(nombre, descripcion, id, marca, cantidad, precio, costo, vendible, comprable, estado);
		arch.vectorItems.push_back(item);
		MessageBox::Show("El item fue ingresado correctamente", "Item ingresado", MessageBoxButtons::OK, MessageBoxIcon::Information);
		textBoxNombre->Text = "";
		textBoxDescripcion->Text = "";
		textBoxMarca->Text = "";
		numericUpDownCos->Value = 0;
		numericUpDownCant->Value = 0;
		numericUpDownPre->Value = 0;
		checkBoxVendible->Checked = false;
		checkBoxComprable->Checked = false;
		checkBoxEstado->Checked = false;
		arch.guardarVectorItems();
	}

}
