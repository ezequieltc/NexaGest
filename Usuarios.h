#pragma once
#include "Persona.h"

class Usuarios : public Persona {
private:
    char _usuario[30];
    char _contrasena[30];
    bool _crearUser;
    bool _crearItem;
    bool _ordenDeVenta;
    bool _ordenDeCompra;
    bool _crearCliente;
    bool _crearProveedores;
    bool _estado;
    int _compras;
    int _ventas;
    float  _objetivoVentas;
    char  _region[30];

public:
    Usuarios();
    Usuarios(const char* usuario, const char* contrasena, bool crearUser, bool crearItem, bool ordenDeVenta, bool ordenDeCompra, bool crearCliente, bool crearProveedores, bool _estado, const char* nombre, const char* apellido, const char* email, int id, bool estado);
    const char* getContrasena();
    const char* getUsuario();
    bool getCrearUser();
    bool getCrearItem();
    bool getOrdenDeVenta();
    bool getOrdenDeCompra();
    bool getCrearCliente();
    bool getCrearProveedor();
    bool getEstado();
    void setCrearCliente(bool crearcliente);
    void setCrearProveedor(bool crearproveedor);
    void setCrearUser(bool crearuser);
    void setCrearItem(bool crearitem);
    void setOrdenDeVenta(bool ordendeventa);
    void setOrdenDeCompra(bool ordendecompra);
    void setEstado(bool estado);
    void setContrasena(const char* contrasena);
    void setUsuario(const char* usuario);
    int getCompras();
    void setCompras(int compras);
    void setVentas(int ventas);
    void setObjetivoVentas(float objetivoventas);
    void setRegion(const char* region);
    int getVentas();
    float getObjetivoVentas();
    const char* getRegion();

};