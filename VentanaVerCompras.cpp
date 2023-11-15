#include "VentanaVerCompras.h"
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

VentanaVerCompras::VentanaVerCompras() {
	InitializeComponent();
	Archivos archBuff;
	archBuff.cargarVectorProveedores();
	archBuff.cargarVectorItems();
	archBuff.cargarVectorCompras();
	archBuff.cargarVectorUsuarios();
	for (int i = 0; i < archBuff.vectorCompras.size(); i++) {
		int numeroCompra = archBuff.vectorCompras[i].getNumero();
		const char* proveedor = archBuff.vectorCompras[i].getProveedor().getEmpresa();
		string fechaCompra = archBuff.vectorCompras[i].getFechaIngreso().toString();
		float totalCompra = archBuff.vectorCompras[i].getTotal();
		const char* estadoCompra;
		Usuarios user = archBuff.vectorCompras[i].getComprador();
		String^ userSTR = String::Concat(gcnew String(user.getNombre()), " ", gcnew String(user.getApellido()));
		if (archBuff.vectorCompras[i].getEstado()) {
			estadoCompra = "Activa";
		}
		else {
			estadoCompra = "Facturada";
		}
		String^ proveedorSTR = gcnew String(proveedor);
		String^ estadoVentaSTR = gcnew String(estadoCompra);
		String^ fechaVentaSTR = msclr::interop::marshal_as<String^>(fechaCompra);
		dataGridView1->Rows->Add(numeroCompra, proveedorSTR, fechaVentaSTR, totalCompra, userSTR, estadoVentaSTR);

	}

}

