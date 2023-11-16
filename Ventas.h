#pragma once 
#include "Usuarios.h"
#include "Items.h"
#include "Fecha.h"
#include "Clientes.h"
#include <vector>



class Ventas{
    private: 
        int _numero;
        Usuarios _usuario; 
        Clientes _cliente;
        Items _productos[20];
        int _cantidad[20];
        float _total;
        char _estado[20];
        Fecha _fecha;

    public:
    Ventas();
    Ventas(int numero, Usuarios usuario, float total, const char* estado, Fecha fecha);
    void setNumero(int numero);
    void setUsuario(Usuarios usuario);
    void setCliente(Clientes cliente);
    void setProductos(Items productosNuevo, int cantidadProd, int indice);
    void setTotal(float total);
    void setEstado(const char* estado);
    void setFecha(Fecha fecha);
    int getNumero();
    Usuarios getUsuario();
    Clientes getCliente();
    Items* getProducto();
    int* getCantidad();
    float getTotal();
    const char* getEstado();
    Fecha getFecha();
    






    



};