#pragma once 
#include "Usuarios.h"
#include "Items.h"
#include "Fecha.h"



class Ventas{
    private: 
        int _numero;
        Usuarios _usuario; 
        Items _productos;
        float _total;
        bool _estado;
        Fecha _fecha;

    public:
    Ventas();
    Ventas(int numero, Usuarios usuario, Items productos, float total, bool estado, Fecha fecha);
    void setNumero(int numero);
    void setUsuario(Usuarios usuario);
    void setProductos(Items productos);
    void setTotal(float total);
    void setEstado(bool estado);
    void setFecha(Fecha fecha);
    int getNumero();
    Usuarios getUsuario();
    Items getProducto ();
    float getTotal();
    bool getEstado();
    Fecha getFecha();
    






    



};