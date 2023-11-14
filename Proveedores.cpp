#include <iostream>
#include <cstring>
using namespace std;
#include "Persona.h"
#include "Proveedores.h"


Proveedores::Proveedores() {

}
Proveedores::Proveedores(const char* empresa, const char* telefono, const char* direccion, int cuit, int tipoproducto = 0, const char* nombre, const char* apellido, const char* email, int id, bool estado) :Persona(nombre, apellido, email, id, estado) {
    strcpy(_empresa, empresa);
    strcpy(_telefono, telefono);
    strcpy(_direccion, direccion);
    _cuit = cuit;
    _tipoProducto = tipoproducto;
    _totalComprado = 0;
}
void Proveedores::setEmpresa(const char* empresa) {
    strcpy(_empresa, empresa);
}
void Proveedores::setTelefono(const char* telefono) {
    strcpy(_telefono, telefono);
}
void Proveedores::setDireccion(const char* direccion) {
    strcpy(_direccion, direccion);
}
void Proveedores::setCuit(int cuit) {
    _cuit = cuit;
}
void Proveedores::setTipoProducto(int tipoproducto) {
    _tipoProducto = tipoproducto;
}
void Proveedores::setTotalComprado(float totalcomprado) {
    _totalComprado = totalcomprado;
}
const char* Proveedores::getEmpresa() {
    return _empresa;
}
const char* Proveedores::getTelefono() {
    return _telefono;
}
const char* Proveedores::getDireccion() {
    return _direccion;
}
int Proveedores::getCuit() {
    return _cuit;
}
int Proveedores::getTipoProducto() {
    return _tipoProducto;
}
float Proveedores::getTotalComprado() {
    return _totalComprado;
}