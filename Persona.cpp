#include <iostream>
#include <cstring>
using namespace std;
#include "Persona.h"

Persona::Persona() {
    _estado = true;
}
Persona::Persona(const char* nombre, const char* apellido, const char* email, int id, bool estado) {
    strcpy(_nombre, nombre);
    strcpy(_apellido, apellido);
    strcpy(_email, email);
    _id = id;
    _estado = true;


}
void Persona::setNombre(const char* nombre) {
    strcpy(_nombre, nombre);
}
void Persona::setApellido(const char* apellido) {
    strcpy(_apellido, apellido);
}
void Persona::setEmail(const char* email) {
    strcpy(_email, email);
}
void Persona::setId(int id) {
    _id = id;
}
void Persona::setEstado(bool estado) {
    _estado = estado;
}
const char* Persona::getNombre() {
    return _nombre;
}
const char* Persona::getApellido() {
    return _apellido;
}
const char* Persona::getEmail() {
    return _email;
}
int Persona::getId() {
    return _id;
}

bool Persona::getEstado() {
    return _estado;
}
