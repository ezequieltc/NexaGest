#include "Items.h"
#include <iostream>
#include <cstring>
#include "Proveedores.h"
#include "Usuarios.h"
#include "Persona.h"
#include "Ventas.h"
#include "Compras.h"
#include <vector>
using namespace std;
#include "Archivos.h"



Usuarios Archivos::usuarioConectado;

Archivos::Archivos() {
	
}

void Archivos::cargarVectorItems() {
	FILE* p;
	p = fopen("./files/Items.gest", "rb");
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
	p = fopen("./files/Items.gest", "wb");
	Items item;
	for (int i = 0; i < vectorItems.size(); i++) {
		fwrite(&vectorItems[i], sizeof(Items), 1, p);
	}
	fclose(p);
}


void Archivos::cargarVectorUsuarios() {
	FILE* p;
	p = fopen("./files/Usuarios.gest", "rb");
	Usuarios user;
	while (fread(&user, sizeof(Usuarios), 1, p) == 1) {
		vectorUsuarios.push_back(user);
	}
	fclose(p);
}
void Archivos::setVectorUsuarios(std::vector<Usuarios> vector) {
	//vectorUsuarios = vector;
}
void Archivos::guardarVectorUsuarios() {
	FILE* p;
	p = fopen("./files/Usuarios.gest", "wb");
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

void Archivos::cargarVectorVentas() {
	FILE* p;
	p = fopen("./files/Ventas.gest", "rb");
	Ventas venta;
	while (fread(&venta, sizeof(Ventas), 1, p)) {
		vectorVentas.push_back(venta);
	}
	fclose(p);
}

void Archivos::setVectorVentas(std::vector<Ventas> vector) {
	vectorVentas = vector;
}

void Archivos::guardarVectorVentas() {
	FILE* p;
	p = fopen("./files/Ventas.gest", "wb");
	Ventas venta;
	for (int i = 0; i < vectorVentas.size(); i++) {
		fwrite(&vectorVentas[i], sizeof(Ventas), 1, p);
	}
	fclose(p);

}
void Archivos::cargarVectorCllientes() {

}
void Archivos::guardarVectorClientes() {

}

void Archivos::verificarArchivos() {
	if (fopen("./files/Usuarios.gest", "rb") == NULL) {
		FILE* p;
		cout << "El archivo no existe, se creara" << endl;
		p = fopen("./files/Usuarios.gest", "wb");
		Usuarios user("admin", "admin", true, true, true, true, true, true, 1, true, "Administrado", "", "", 1, true);
		fwrite(&user, sizeof(Usuarios), 1, p);
		fclose(p);
	}
	if (fopen("./files/Items.gest", "rb") == NULL) {
		cout << "El archivo no existe, se creara" << endl;
		fopen("./files/Items.gest", "wb");
	}
	if (fopen("./files/Ventas.gest", "rb") == NULL) {
		cout << "El archivo no existe, se creara" << endl;
		fopen("./files/Ventas.gest", "wb");
	}
	if (fopen("./files/Compras.gest", "rb") == NULL) {
		cout << "El archivo no existe, se creara" << endl;
		fopen("./files/Compras.gest", "wb");
	}
	if (fopen("./files/Clientes.gest", "rb") == NULL) {
		cout << "El archivo no existe, se creara" << endl;
		fopen("./files/Clientes.gest", "wb");
	}
	if (fopen("./files/Proveedores.gest", "rb") == NULL) {
		cout << "El archivo no existe, se creara" << endl;
		fopen("./files/Proveedores.gest", "wb");
	}

}
