#include <iostream>
#include <cstring>
using namespace std;
#include "Usuarios.h"
#include "Comprador.h"






Comprador::Comprador() {

}
Comprador::Comprador(int compras, const char* usuario, const char* contrasena, bool crearUser, bool crearItem, bool ordenDeVenta, bool ordenDeCompra, bool crearCliente, bool crearProveedores, bool _estado, const char* nombre, const char* apellido, const char* email, int id, bool estado) : Usuarios(usuario, contrasena, crearUser, crearItem, ordenDeVenta, ordenDeCompra, crearCliente, crearProveedores, _estado, nombre, apellido, email, id, estado) {
    _compras = compras;
}
int Comprador::getCompras() {
    return _compras;
}
void Comprador::setCompras(int compras) {
    _compras = compras;
}