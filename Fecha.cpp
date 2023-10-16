#include <iostream>
using namespace std;
#include "Fecha.h"
#include <ctime>


Fecha::Fecha() {
    time_t t = time(NULL);
    struct tm* f = localtime(&t);
    _dia = (*f).tm_mday;
    _mes = f->tm_mon + 1;
    _anio = f->tm_year + 1900;
}
Fecha::Fecha(int dia, int mes, int anio) {

    _dia = dia;
    _mes = mes;
    _anio = anio;
}
int Fecha::getDia() {
    return _dia;
}
int Fecha::getMes() {
    return _mes;
}
int Fecha::getAnio() {
    return _anio;
}
void Fecha::setDia(int dia) {
    _dia = dia;
}
void Fecha::setMes(int mes) {
    _mes = mes;
}
void Fecha::setAnio(int anio) {
    _anio = anio;
}


std::string Fecha::toString() {
    string devuelvefecha;
    devuelvefecha = to_string(_dia) + "/" + to_string(_mes) + "/" + to_string(_anio);
    return devuelvefecha;
}
std::string Fecha::AgregarDia(int dia) {
    string devuelvefecha;
    int vMes[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int mesactual = _mes, diaactual = dia + _dia;
    int diastotales = dia;
    while (diastotales >= 0) {
        if (vMes[_mes + 1] < diaactual) {
            diaactual = _dia + dia - vMes[_mes + 1];
            mesactual++;
            _dia = 0;
            if (mesactual > 12) {
                _anio++;
                mesactual = mesactual - 12;
                devuelvefecha = to_string(diaactual) + "/" + to_string(mesactual) + "/" + to_string(_anio);
            }
            else
                devuelvefecha = to_string(diaactual) + "/" + to_string(mesactual) + "/" + to_string(_anio);

        }
        else
        {

            devuelvefecha = to_string(diaactual) + "/" + to_string(mesactual) + "/" + to_string(_anio);
            diastotales -= vMes[_mes];
        }
        dia -= vMes[_mes];
    }
    return devuelvefecha;
}