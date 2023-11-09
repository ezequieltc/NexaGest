#include "Ventas.h"



Ventas::Ventas(){

}
Ventas::Ventas(int numero, Usuarios usuario, Items productos, float total, bool estado, Fecha fecha){
    _numero = numero;
    _usuario = usuario;
    _productos = productos;
    _total = total;
    _estado = estado;
    _fecha = fecha;
}
void Ventas::setNumero(int numero){
    _numero = numero;

}
void Ventas::setUsuario(Usuarios usuario){
    _usuario = usuario;

}
void Ventas::setProductos(Items productos){
    _productos = productos;
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
Items Ventas::getProducto(){
    return _productos;
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