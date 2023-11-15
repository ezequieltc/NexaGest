#pragma once
#include "Usuarios.h"
#include "Proveedores.h"
#include "Items.h"
#include "Fecha.h"

class Compras {
private:
    int _numero;
    Proveedores _Proveedor;
    Usuarios _Comprador;
    Items _productos[20];
    int _cantidad[20];
    float _total;
    Fecha _fechaIngreso;
    bool _estado;

public:
    Compras();
    Compras(int numero, Usuarios comprador, float total, Fecha fechaIngreso, bool estado);
    int getNumero();
    Proveedores getProveedor();
    Usuarios getComprador();
    float getTotal();
    Fecha getFechaIngreso();
    bool getEstado();
    void setNumero(int numero);
    void setProductos(Items productosNuevo, int cantidadProd, int indice);
    void setProveedor(Proveedores proveedor);
    void setComprador(Usuarios comprador);
    void setTotal(float total);
    void setFechaIngreso(Fecha fechaIngreso);
    void setEstado(bool estado);
    Items* getProducto();
    int* getCantidad();


};