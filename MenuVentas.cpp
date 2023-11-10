#include "Usuarios.h"
#include "Archivos.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include "Fecha.h"
#include "MenuVentas.h"
using namespace std;
using namespace NexaGest;



MenuVentas::MenuVentas()
{
	InitializeComponent();
    auto now = std::chrono::system_clock::now();
    Fecha fechaHoy;
    labelFecha->Text = gcnew System::String(fechaHoy.toString().c_str());
    Usuarios userConectado = Archivos::getUsuarioConectado();
    String^ user = String::Concat(gcnew String(userConectado.getNombre()), " ", gcnew String(userConectado.getApellido()));
    labelVendedor->Text = user;

   

}
