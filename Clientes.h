#pragma once
#include "Persona.h"
class Clientes  : public Persona {
private:
	char empresa[30];
	char rubro[30];
	char telefono[30];
	char direccion[30];
	char contacto[30];
	float totalVendido;
	char cuit[30];
	bool consumidorFinal;
	bool activo;

public:
	Clientes();
	Clientes(const char* empresaSet,const char* rubroSet, const char* telefonoSet, const char* direccionSet, const char* contactoSet, const char* cuitSet, bool consumidorSet, bool estadoSet,const char* nombre, const char* apellido, const char* email, int id, bool estado);
	const char* getEmpresa();
	const char* getRubro();
	const char* getTelefono();
	const char* getDireccion();
	const char* getContacto();
	float getTotalVendido();
	const char* getCuit();
	int getID();
	bool getConsumidorFinal();
	bool getActivo();

	void setEmpresa(const char* empresaSet);
	void setRubro(const char* rubroSet);
	void setTelefono(const char* telefonoSet);
	void setDireccion(const char* direccionSet);
	void setContacto(const char* contactoSet);
	void setTotalVendido(float totalSet);
	void setCuit(const char* cuitSet);
	void setConsumidorFinal(bool consumidorSet);
	void setActivo(bool activoSet);

};

