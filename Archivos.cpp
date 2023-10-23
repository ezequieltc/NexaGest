#include "Items.h"
#include "Comprador.h"
#include "Proveedores.h"
#include "Usuarios.h"
using namespace std;
#include "Archivos.h"

Archivos::Archivos() {
}

void Archivos::cargarVectorItems() {
	FILE* p;
	p = fopen("Items.gest", "rb");
	Items item;
	while (fread(&item, sizeof(Items), 1, p)) {
		vectorItems.push_back(item);
	}
	fclose(p);
}

void Archivos::setVectorItems(vector<Items> vector) {
	vectorItems = vector;
}

void Archivos::guardarVectorItems() {
	FILE* p;
	p = fopen("Items.gest", "wb");
	Items item;
	for (int i = 0; i < vectorItems.size(); i++) {
		fwrite(&vectorItems[i], sizeof(Items), 1, p);
	}
	fclose(p);
}
