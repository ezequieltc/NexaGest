#include "Items.h"
#include "Comprador.h"
#include "Proveedores.h"
#include "Usuarios.h"
#include "Persona.h"
using namespace std;
#include "Archivos.h"
#include <vector>


Usuarios Archivos::usuarioConectado;

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


void Archivos::cargarVectorUsuarios() {
	FILE* p;
	p = fopen("Usuarios.gest", "rb");
	Usuarios user;
	while (fread(&user, sizeof(Usuarios), 1, p)) {
		vectorUsuarios.push_back(user);
	}
	fclose(p);
}
void Archivos::setVectorUsuarios(std::vector<Usuarios> vector) {
	vectorUsuarios = vector;
}
void Archivos::guardarVectorUsuarios() {
	FILE* p;
	p = fopen("Usuarios.gest", "wb");
	Usuarios user;
	for (int i = 0; i < vectorUsuarios.size(); i++) {
		fwrite(&vectorUsuarios[i], sizeof(Usuarios), 1, p);
	}
	fclose(p);
}

void Archivos::setUsuarioConectado(Usuarios userConectado) {
	usuarioConectado = userConectado;

}

Usuarios Archivos::getUsuarioConectado() {
	return usuarioConectado;
}
