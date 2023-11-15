#include <iostream>
#include <cstring>
using namespace std;
#include "Usuarios.h"

Usuarios::Usuarios() {

}
Usuarios::Usuarios(const char* usuario, const char* contrasena, bool crearUser, bool crearItem, bool ordenDeVenta, bool ordenDeCompra, bool crearCliente, bool crearProveedores, int tipo, bool _estado, const char* nombre, const char* apellido, const char* email, int id, bool estado) :Persona(nombre, apellido, email, id, estado) {
    strcpy(_usuario, usuario);
    strcpy(_contrasena, contrasena);
    _crearUser = crearUser;
    _crearItem = crearItem;
    _ordenDeVenta = ordenDeVenta;
    _ordenDeCompra = ordenDeCompra;
    _crearCliente = crearCliente;
    _crearProveedores = crearProveedores;
    _tipo = tipo;
    _compras = 0;
    _ventas = 0;
}
const char* Usuarios::getContrasena() {
    return _contrasena;
}
const char* Usuarios::getUsuario() {
    return _usuario;
}
bool Usuarios::getCrearUser() {
    return _crearUser;
}
bool Usuarios::getCrearItem() {
    return _crearItem;
}
bool Usuarios::getOrdenDeVenta() {
    return  _ordenDeVenta;
}
bool Usuarios::getOrdenDeCompra() {
    return _ordenDeCompra;
}
bool Usuarios::getCrearCliente() {
    return _crearCliente;
}
bool Usuarios::getCrearProveedor() {
    return  _crearProveedores;
}
bool Usuarios::getEstado() {
    return  _estado;
}
void Usuarios::setCrearCliente(bool crearcliente) {
    _crearCliente = crearcliente;
}
void Usuarios::setCrearProveedor(bool crearproveedor) {
    _crearProveedores = crearproveedor;
}
void Usuarios::setCrearUser(bool crearuser) {
    _crearUser = crearuser;
}
void Usuarios::setCrearItem(bool crearitem) {
    _crearItem = crearitem;
}
void Usuarios::setOrdenDeVenta(bool ordendeventa) {
    _ordenDeVenta = ordendeventa;
}
void Usuarios::setOrdenDeCompra(bool ordendecompra) {
    _ordenDeCompra = ordendecompra;
}
void Usuarios::setEstado(bool estado) {
    _estado = estado;
}
void Usuarios::setContrasena(const char* contrasena) {
    strcpy(_contrasena, contrasena);
}
void Usuarios::setUsuario(const char* usuario) {
    strcpy(_usuario, usuario);
}
int Usuarios::getCompras() {
    return _compras;
}
void Usuarios::setCompras(int compras) {
    _compras = compras;
}

void Usuarios::setVentas(int ventas) {
    _ventas = ventas;
}
void Usuarios::setObjetivoVentas(float objetivoventas) {
    _objetivoVentas = objetivoventas;
}

void Usuarios::setTipo(int tipo) {
    _tipo = tipo;
}

int Usuarios::getTipo() {
    return _tipo;
}
void Usuarios::setRegion(const char* region) {
    strcpy(_region, region);
}
int Usuarios::getVentas() {
    return _ventas;
}
float Usuarios::getObjetivoVentas() {
    return _objetivoVentas;
}
const char* Usuarios::getRegion() {
    return _region;
}

int Usuarios::getId() {
    return Persona::getId();
}