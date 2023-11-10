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
    Items _Items;
    float _total;
    Fecha _fechaIngreso;
    bool _estado;

public:
    Compras();
    Compras(int numero, Proveedores proveedores, Usuarios comprador, Items items, float total, Fecha fechaIngreso, bool estado);
    int getNumero();
    Proveedores getProveedor();
    Usuarios getComprador();
    Items getItems();
    float getTotal();
    Fecha getFechaIngreso();
    bool getEstado();
    void setNumero(int numero);
    void setProveedor(Proveedores proveedor);
    void setComprador(Usuarios comprador);
    void setItems(Items items);
    void setTotal(float total);
    void setFechaIngreso(Fecha fechaIngreso);
    void setEstado(bool estado);


};