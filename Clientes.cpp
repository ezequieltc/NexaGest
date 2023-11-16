#include <iostream>
#include <cstring>
#include "Clientes.h"


Clientes::Clientes(){

}

Clientes::Clientes(const char* empresaSet,const char* rubroSet, const char* telefonoSet, const char* direccionSet, const char* contactoSet, const char* cuitSet, bool consumidorSet, bool estadoSet, const char* nombre, const char* apellido, const char* email, int id, bool estado) : Persona(nombre, apellido, email, id, estado) {
    strcpy(empresa,empresaSet);
    strcpy(rubro,rubroSet);
    strcpy(telefono,telefonoSet);
    strcpy(direccion,direccionSet);
    strcpy(contacto,contactoSet);
    totalVendido = 0;
    strcpy(cuit, cuitSet);
    consumidorFinal = consumidorSet;
    estado = estadoSet;
}



const char* Clientes::getEmpresa(){
    return empresa;
}
const char* Clientes::getRubro(){
    return rubro;
}
const char* Clientes::getTelefono(){
    return telefono;
}
const char* Clientes::getDireccion(){
    return direccion;
}
const char* Clientes::getContacto(){
    return contacto;
}
float  Clientes::getTotalVendido(){
    return totalVendido;
}
const char*  Clientes::getCuit(){
    return cuit;
}
bool Clientes::getConsumidorFinal(){
    return consumidorFinal;
}
bool  Clientes::getActivo(){
    return activo;
}

int Clientes::getID() {
    return Persona::getId();
}
void Clientes::setEmpresa(const char* empresaSet){
    strcpy(empresa, empresaSet);
}
void Clientes::setRubro(const char* rubroSet){
    strcpy(rubro, rubroSet);
}
void Clientes::setTelefono(const char* telefonoSet){
    strcpy(telefono, telefonoSet);
}
void Clientes::setDireccion(const char* direccionSet){
    strcpy(direccion, direccionSet);
}
void Clientes::setContacto(const char* contactoSet){
    strcpy(contacto, contactoSet);
}
void Clientes::setTotalVendido(float totalSet){
    totalVendido = totalSet;
}
void Clientes::setCuit(const char* cuitSet){
    strcpy(cuit, cuitSet);
}
void Clientes::setConsumidorFinal(bool consumidorSet){
    consumidorFinal = consumidorSet;
}
void Clientes::setActivo(bool activoSet){
    activo = activoSet;
}