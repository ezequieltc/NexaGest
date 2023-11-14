#pragma once
#include "Persona.h"


class Proveedores : public Persona {
private:
	char empresa[30];
	char rubro[30];
	char telefono[30];
	char direccion[30];
	char contacto[30];
	char cuit[30];
	bool activo;
    float _totalComprado;


public:
    Proveedores();
    Proveedores(const char* empresaSet,const char* rubroSet, const char* telefonoSet, const char* direccionSet, const char* contactoSet, const char* cuitSet, bool estadoSet,const char* nombre, const char* apellido, const char* email, int id, bool estado, float totalComprado);
    
    void setEmpresa(const char* empresa);
    void setRubro(const char* rubroSet);
    void setTelefono(const char* telefono);
    void setDireccion(const char* direccion);
    void setContacto(const char* contactoSet);
    void setCuit(const char* cuitSet);
    void setEstado(bool estado);
    void setTotalComprado(float totalcomprado);

    const char* getEmpresa();
    const char* getRubro();
    const char* getTelefono();
    const char* getDireccion();
    const char* getContacto();
    const char* getCuit();
    bool getActivo();
    float getTotalComprado();


};