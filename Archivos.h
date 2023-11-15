#pragma once
#include "Items.h"
#include <iostream>
#include <cstring>
#include "Proveedores.h"
#include "Usuarios.h"
#include "Persona.h"
#include "Ventas.h"
#include "Compras.h"
#include "Clientes.h"
#include <vector>

class Archivos
{
	static Usuarios usuarioConectado;

public:
	std::vector<Items> vectorItems;
	std::vector<Usuarios> vectorUsuarios;
	std::vector<Ventas> vectorVentas;
	std::vector<Clientes> vectorClientes;
	std::vector<Proveedores> vectorProveedores;
	std::vector<Compras> vectorCompras;
	Archivos();
	static void verificarArchivos();
	void cargarVectorItems();
	void setVectorItems(std::vector<Items> vector);
	void guardarVectorItems();
	void cargarVectorUsuarios();
	void setVectorUsuarios(std::vector<Usuarios> vector);
	void setUsuarioConectado(Usuarios userConectado);
	static Usuarios getUsuarioConectado();
	void guardarVectorUsuarios();
	void cargarVectorVentas();
	void setVectorVentas(std::vector<Ventas> vector);
	void guardarVectorVentas();
	void cargarVectorClientes();
	void guardarVectorClientes();
	void cargarVectorProveedores();
	void guardarVectorProveedores();
	void cargarVectorCompras();
	void guardarVectorCompras();

};

