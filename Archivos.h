#pragma once
#include <vector>
#include <iostream>
#include <cstring>
#include "Items.h"
#include "Usuarios.h"
#include "Persona.h"



class Archivos
{
	static Usuarios usuarioConectado;

public:
	std::vector<Items> vectorItems;
	std::vector<Usuarios> vectorUsuarios;
	Archivos();
	void cargarVectorItems();
	void setVectorItems(std::vector<Items> vector);
	void guardarVectorItems();
	void cargarVectorUsuarios();
	void setVectorUsuarios(std::vector<Usuarios> vector);
	void setUsuarioConectado(Usuarios userConectado);
	static Usuarios getUsuarioConectado();
	void guardarVectorUsuarios();
};

