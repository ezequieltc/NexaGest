#pragma once
#include "Persona.h"


class Proveedores : public Persona {
private:
    char _empresa[30];
    char _telefono[30];
    char _direccion[30];
    int _cuit;
    int _tipoProducto;
    float _totalComprado;

public:
    Proveedores();
    Proveedores(const char* empresa, const char* telefono, const char* direccion, int cuit, int tipoproducto = 0, const char* nombre, const char* apellido, const char* email, int id, bool estado);
    void setEmpresa(const char* empresa);
    void setTelefono(const char* telefono);
    void setDireccion(const char* direccion);
    void setCuit(int cuit);
    void setTipoProducto(int tipoproducto);
    void setTotalComprado(float totalcomprado);
    const char* getEmpresa();
    const char* getTelefono();
    const char* getDireccion();
    int getCuit();
    int getTipoProducto();
    float getTotalComprado();


};