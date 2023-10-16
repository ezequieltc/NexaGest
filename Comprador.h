#pragma once
#include "Usuarios.h"
#include "Persona.h"



class Comprador : public Usuarios {
private:
    int _compras;



public:
    Comprador();
    Comprador(int compras, const char* usuario, const char* contrasena, bool crearUser, bool crearItem, bool ordenDeVenta, bool ordenDeCompra, bool crearCliente, bool crearProveedores, bool _estado, const char* nombre, const char* apellido, const char* email, int id, bool estado);
    int getCompras();
    void setCompras(int compras);

};