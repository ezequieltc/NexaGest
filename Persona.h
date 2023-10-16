#pragma once

class Persona {
protected:
    char _nombre[30];
    char _apellido[30];
    char _email[30];
    int _id;
    bool _estado;

public:
    Persona();
    Persona(const char* nombre, const char* apellido, const char* email, int id, bool estado);
    void setNombre(const char* nombre);
    void setApellido(const char* apellido);
    void setEmail(const char* email);
    void setId(int id);
    void setEstado(bool estado);
    const char* getNombre();
    const char* getApellido();
    const char* getEmail();
    int getId();
    bool getEstado();
};