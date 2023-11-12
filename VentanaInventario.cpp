#include "Items.h"
#include <iostream>
#include <cstring>
#include "Archivos.h"
#include "VentanaInventario.h"
using namespace std;
using namespace NexaGest;


void VentanaInventario::cargarItems() {
	Archivos arch;
	arch.cargarVectorItems();
	const char* nombre;
	const char* descripcion;
	const char* marca;
	int id;
	int cantidad;
	float precio;

	for (int i = 0; i < arch.vectorItems.size(); i++) {
		nombre = arch.vectorItems[i].getNombre();
		descripcion = arch.vectorItems[i].getDescripcion();
		id = arch.vectorItems[i].getID();
		precio = arch.vectorItems[i].getPrecio();
		cantidad = arch.vectorItems[i].getCantidad();
		marca = arch.vectorItems[i].getMarca();
		String^ nombreSTR = gcnew String(nombre);
		String^ descripcionSTR = gcnew String(descripcion);
		String^ marcaSTR = gcnew String(marca);
		dataGridView1->Rows->Add(id, nombreSTR, descripcionSTR, marcaSTR,cantidad, precio);
	

	}
}

void VentanaInventario::actualizarVista() {
	dataGridView1->Rows->Clear();
	cargarItems();
}

Void VentanaInventario::buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	Archivos arch;
	arch.cargarVectorItems();
	int idSeleccionado, indice;
	if (dataGridView1->SelectedRows->Count > 0) {
		Object^ valorCelda = dataGridView1->SelectedRows[0]->Cells[0]->Value;
		if (valorCelda != nullptr) {
			idSeleccionado = Convert::ToInt32(valorCelda);
			for (int i = 0; i < arch.vectorItems.size(); i++) {
				if (arch.vectorItems[i].getID() == idSeleccionado) {
					arch.vectorItems.erase(arch.vectorItems.begin()+ i);
				}
			}
			MessageBox::Show("El item fue eliminado correctamente correctamente", "Item eliminado", MessageBoxButtons::OK, MessageBoxIcon::Information);
			arch.guardarVectorItems();
			actualizarVista();			
		}
	}
	else {
		MessageBox::Show("Tiene que seleccionar una fila antes de poder eliminarla.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}