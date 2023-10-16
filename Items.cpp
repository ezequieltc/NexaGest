#include <iostream>
#include <cstring>
using namespace std;
#include "Items.h"

Items::Items() {

}
Items::Items(const char* nombre, const char* descripcion, int id, const char* marca, int cantidad, float precio, float costo, bool vendible, bool comprable, bool estado) {
    strcpy(_nombre, nombre);
    strcpy(_descripcion, descripcion);
    _id = id;
    strcpy(_marca, marca);
    _cantidad = cantidad;
    _precio = precio;
    _costo = costo;
    _vendible = vendible;
    _comprable = comprable;
    _estado = estado;
}
const char* Items::getNombre() {
    return _nombre;
}
const char* Items::getDescripcion() {
    return _descripcion;
}
int Items::getID() {
    return _id;
}
const char* Items::getMarca() {
    return _marca;
}
int Items::getCantidad() {
    return _cantidad;
}
float Items::getPrecio() {
    return _precio;
}
float Items::getCosto() {
    return _costo;
}
bool Items::getVendible() {
    return _vendible;
}
bool Items::getComprable() {
    return _comprable;
}
bool Items::getEstado() {
    return _estado;
}
void Items::setNombre(const char* nombre) {
    strcpy(_nombre, nombre);
}
void Items::setDescripcion(const char* descripcion) {
    strcpy(_descripcion, descripcion);
}
void Items::setID(int id) {
    _id = id;
}
void Items::setMarca(const char* marca) {
    strcpy(_marca, marca);
}
void Items::setCantidad(int cantidad) {
    _cantidad = cantidad;
}
void Items::setPrecio(float precio) {
    _precio = precio;
}
void Items::setCosto(float costo) {
    _costo = costo;
}
void Items::setVendible(bool vendible) {
    _vendible = vendible;
}
void Items::setComprable(bool comprable) {
    _comprable = comprable;
}
void Items::setEstado(bool estado) {
    _estado = estado;
}

