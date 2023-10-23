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
	int id;
	float precio;

	for (int i = 0; i < arch.vectorItems.size(); i++) {
		nombre = arch.vectorItems[i].getNombre();
		descripcion = arch.vectorItems[i].getDescripcion();
		id = arch.vectorItems[i].getID();
		precio = arch.vectorItems[i].getPrecio();
		String^ nombreSTR = gcnew String(nombre);
		String^ descripcionSTR = gcnew String(descripcion);
		dataGridView1->Rows->Add(id, nombreSTR, descripcionSTR, precio);
	}
}
