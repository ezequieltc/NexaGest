#include "VentanaVerVentas.h"
#include "Archivos.h"
#include "Ventas.h"
#include "Clientes.h"
#include "Usuarios.h"
#include "Items.h"
#include "Fecha.h"
#include <iostream>
#include <cstring>
#include <msclr/marshal_cppstd.h>


using namespace std;
using namespace NexaGest;

VentanaVerVentas::VentanaVerVentas() {
	InitializeComponent();
	Archivos archBuff;
	archBuff.cargarVectorClientes();
	archBuff.cargarVectorItems();
	archBuff.cargarVectorVentas();
	archBuff.cargarVectorUsuarios();
	for (int i = 0; i < archBuff.vectorVentas.size(); i++) {
		int numeroVenta = archBuff.vectorVentas[i].getNumero();
		const char* cliente = archBuff.vectorVentas[i].getCliente().getEmpresa();
		string fechaVenta = archBuff.vectorVentas[i].getFecha().toString();
		float totalVenta = archBuff.vectorVentas[i].getTotal();
		const char* estadoVenta;
		Usuarios user = archBuff.vectorVentas[i].getUsuario();
		String^ userSTR = String::Concat(gcnew String(user.getNombre()), " ", gcnew String(user.getApellido()));
		if (archBuff.vectorVentas[i].getEstado()) {
			estadoVenta = "Activa";
		}
		else {
			estadoVenta = "Facturada";
		}
		String^ clienteSTR = gcnew String(cliente);
		//String^ fechaVentaSTR = gcnew String(fechaVenta);
		String^ estadoVentaSTR = gcnew String(estadoVenta);
		String^ fechaVentaSTR = msclr::interop::marshal_as<String^>(fechaVenta);
		dataGridView1->Rows->Add(numeroVenta, clienteSTR, fechaVentaSTR, totalVenta, userSTR, estadoVentaSTR);
		
	}

}

