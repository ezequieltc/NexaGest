#include <iostream>
#include <cstring>
using namespace std;
#include "Compras.h"

Compras::Compras() {

}
Compras::Compras(int numero, Proveedores proveedores, Usuarios comprador, Items items, float total, Fecha fechaIngreso, bool estado) {
    _numero = numero;
    _Proveedor = proveedores;
    _Comprador = comprador;
    _Items = items;
    _total = total;
    _fechaIngreso = fechaIngreso;
    _estado = estado;

}
int Compras::getNumero() {
    return _numero;
}
Proveedores Compras::getProveedor() {
    return _Proveedor;
}
Usuarios Compras::getComprador() {
    return _Comprador;
}
Items Compras::getItems() {
    return _Items;
}
float Compras::getTotal() {
    return _total;
}
Fecha Compras::getFechaIngreso() {
    return _fechaIngreso;
}
bool Compras::getEstado() {
    return _estado;
}
void Compras::setNumero(int numero) {
    _numero = numero;
}
void Compras::setProveedor(Proveedores proveedor) {
    _Proveedor = proveedor;
}
void Compras::setComprador(Usuarios comprador) {
    _Comprador = comprador;
}
void Compras::setItems(Items items) {
    _Items = items;
}
void Compras::setTotal(float total) {
    _total = total;
}
void Compras::setFechaIngreso(Fecha fechaIngreso) {
    _fechaIngreso = fechaIngreso;
}
void Compras::setEstado(bool estado) {
    _estado = estado;
}