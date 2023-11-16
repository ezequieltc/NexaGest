#include <iostream>
#include <cstring>
using namespace std;
#include "Persona.h"
#include "Proveedores.h"


Proveedores::Proveedores() {

}
Proveedores::Proveedores(const char* empresaSet,const char* rubroSet, const char* telefonoSet, const char* direccionSet, const char* contactoSet, const char* cuitSet, bool estadoSet,const char* nombre, const char* apellido, const char* email, int id, bool estado):Persona(nombre, apellido, email, id, estado) {
    strcpy(empresa, empresaSet);
    strcpy(rubro, rubroSet);
    strcpy(telefono, telefonoSet);
    strcpy(direccion, direccionSet);
    strcpy(contacto, contactoSet);
    strcpy(cuit, cuitSet);
    activo = estado;
    _totalComprado = 0;
}
void Proveedores::setEmpresa(const char* empresaSet) {
    strcpy(empresa, empresaSet);
}
void Proveedores::setRubro(const char* rubroSet){
    strcpy(rubro, rubroSet);
}
void Proveedores::setTelefono(const char* telefonoSet) {
    strcpy(telefono, telefonoSet);
}
void Proveedores::setDireccion(const char* direccionSet) {
    strcpy(direccion, direccionSet);
}
void Proveedores::setContacto(const char* contactoSet){
    strcpy(contacto, contactoSet);
}
void Proveedores::setCuit(const char * cuitSet) {
    strcpy(cuit, cuitSet);
}
void Proveedores::setEstado(bool estado){
    activo = estado;
}
void Proveedores::setTotalComprado(float totalcomprado) {
    _totalComprado = totalcomprado;
}



const char* Proveedores::getEmpresa() {
    return empresa;
}
const char* Proveedores::getRubro() {
    return rubro;
}
const char* Proveedores::getTelefono() {
    return telefono;
}
const char* Proveedores::getDireccion() {
    return direccion;
}
const char* Proveedores::getContacto(){
    return contacto;
}
const char* Proveedores::getCuit(){
    return cuit;
}
bool Proveedores::getActivo(){
    return activo;
}
float Proveedores::getTotalComprado() {
    return _totalComprado;
}
int Proveedores::getID() {
    return Persona::getId();
}