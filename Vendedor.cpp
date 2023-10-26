#include <iostream>
#include <cstring>
using namespace std;
#include "Usuarios.h"
#include "Vendedor.h"



Vendedor::Vendedor() {

}
Vendedor::Vendedor(int ventas, float objetivoventas, const char* region, const char* usuario, const char* contrasena, bool crearUser, bool crearItem, bool ordenDeVenta, bool ordenDeCompra, bool crearCliente, bool crearProveedores, bool _estado, const char* nombre, const char* apellido, const char* email, int id, bool estado)
    : Usuarios(usuario, contrasena, crearUser, crearItem, ordenDeVenta, ordenDeCompra, crearCliente, crearProveedores, _estado, nombre, apellido, email, id, estado) {
    _ventas = ventas;
    _objetivoVentas = objetivoventas;
    strcpy(_region, region);
}
void Vendedor::setVentas(int ventas) {
    _ventas = ventas;
}
void Vendedor::setObjetivoVentas(float objetivoventas) {
    _objetivoVentas = objetivoventas;
}
void Vendedor::setRegion(const char* region) {
    strcpy(_region, region);
}
int Vendedor::getVentas() {
    return _ventas;
}
float Vendedor::getObjetivoVentas() {
    return _objetivoVentas;
}
const char* Vendedor::getRegion() {
    return _region;
}