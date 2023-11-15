#include <vector>
#include "Items.h"
#include "Persona.h"
#include "Usuarios.h"
#include "Ventas.h"
using namespace std;



Ventas::Ventas(){

}
Ventas::Ventas(int numero, Usuarios usuario, float total, bool estado, Fecha fecha){
    _numero = numero;
    _usuario = usuario;
    _total = total;
    _estado = estado;
    _fecha = fecha;
    for (int i = 0; i < 20; i++) {
        _cantidad[i] = 0;
        _productos[i] = Items();
    }

}
void Ventas::setNumero(int numero){
    _numero = numero;

}
void Ventas::setUsuario(Usuarios usuario){
    _usuario = usuario;

}
void Ventas::setCliente(Clientes cliente) {
    _cliente = cliente;
}
void Ventas::setProductos(Items productosNuevo, int cantidadProd, int indice){
    //_productos.push_back(productos);
    _productos[indice] = productosNuevo;
    _cantidad[indice] = cantidadProd;
}
void Ventas::setTotal(float total){
    _total = total;
}
void Ventas::setEstado(bool estado){
    _estado = estado;
}
void Ventas::setFecha(Fecha fecha){
    _fecha = fecha;
}
int Ventas::getNumero(){
    return _numero;
}
Usuarios Ventas::getUsuario(){
    return _usuario;
}
Clientes Ventas::getCliente() {
    return _cliente;
}
Items* Ventas::getProducto() {
    return _productos;
}
int* Ventas::getCantidad() {
    return _cantidad;
}
float Ventas::getTotal(){
    return _total;
}
bool Ventas::getEstado(){
    return _estado;
}
Fecha Ventas::getFecha(){
    return _fecha;
}