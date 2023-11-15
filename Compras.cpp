#include <iostream>
#include <cstring>
using namespace std;
#include "Compras.h"

Compras::Compras() {

}
Compras::Compras(int numero, Usuarios comprador, float total, Fecha fechaIngreso, bool estado) {
    _numero = numero;
    _Comprador = comprador;
    _total = total;
    _fechaIngreso = fechaIngreso;
    _estado = estado;
    for (int i = 0; i < 20; i++) {
        _cantidad[i] = 0;
        _productos[i] = Items();
    }


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
void Compras::setTotal(float total) {
    _total = total;
}
void Compras::setFechaIngreso(Fecha fechaIngreso) {
    _fechaIngreso = fechaIngreso;
}
void Compras::setEstado(bool estado) {
    _estado = estado;
}

void Compras::setProductos(Items productosNuevo, int cantidadProd, int indice) {
    _productos[indice] = productosNuevo;
    _cantidad[indice] = cantidadProd;
}