#pragma once

class Items {
private:
    char _nombre[30];
    char _descripcion[30];
    int _id;
    char _marca[30];
    int _cantidad;
    float _precio;
    float _costo;
    bool _vendible;
    bool _comprable;
    bool _estado;

public:
    Items();
    Items(const char* nombre, const char* descripcion, int id, const char* marca, int cantidad, float precio, float costo, bool vendible, bool comprable, bool estado);
    const char* getNombre();
    const char* getDescripcion();
    int getID();
    const char* getMarca();
    int getCantidad();
    float getPrecio();
    float getCosto();
    bool getVendible();
    bool getComprable();
    bool getEstado();
    void setNombre(const char* nombre);
    void setDescripcion(const char* descripcion);
    void setID(int id);
    void setMarca(const char* marca);
    void setCantidad(int cantidad);
    void setPrecio(float precio);
    void setCosto(float costo);
    void setVendible(bool vendible);
    void setComprable(bool comprable);
    void setEstado(bool estado);
};
