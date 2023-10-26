#pragma once
#include "Usuarios.h"
#include "Persona.h"


class Vendedor : public Usuarios {
private:
    int _ventas;
    float  _objetivoVentas;
    char  _region[30];

public:
    Vendedor();
    Vendedor(int ventas, float objetivoventas, const char* region, const char* usuario, const char* contrasena, bool crearUser, bool crearItem, bool ordenDeVenta, bool ordenDeCompra, bool crearCliente, bool crearProveedores, bool _estado, const char* nombre, const char* apellido, const char* email, int id, bool estado);
    void setVentas(int ventas);
    void setObjetivoVentas(float objetivoventas);
    void setRegion(const char* region);
    int getVentas();
    float getObjetivoVentas();
    const char* getRegion();






};