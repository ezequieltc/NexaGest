#include "VentanaVerVentas.h"
#include "Archivos.h"
#include "Ventas.h"
#include "Clientes.h"
#include "Usuarios.h"
#include "Items.h"
#include "Fecha.h"
#include <iostream>
#include <cstring>
#include <limits>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>


using namespace std;
using namespace NexaGest;

VentanaVerVentas::VentanaVerVentas() {
	InitializeComponent();
	cargarElementos();
	Archivos archBuff;
	archBuff.cargarVectorClientes();
	archBuff.cargarVectorUsuarios();
	archBuff.cargarVectorVentas();
	vector<Clientes> vectorClientes;
	vector<Usuarios> vectorVendedor;
	bool existe = false;
	for (int i = 0; i < archBuff.vectorVentas.size(); i++) {
		if (vectorClientes.size() > 0) {
			for (int j = 0; j < vectorClientes.size(); j++) {
				if (strcmp(vectorClientes[j].getEmpresa(), archBuff.vectorVentas[i].getCliente().getEmpresa()) == 0) {
					existe = true;
				}
			}
			if (!existe) {
				vectorClientes.push_back(archBuff.vectorVentas[i].getCliente());
			}
		}
		else {
			vectorClientes.push_back(archBuff.vectorVentas[i].getCliente());
		}
		existe = false;
	}
	existe = false;
	for (int i = 0; i < vectorClientes.size(); i++) {
		String^ nombreCliente = gcnew String(vectorClientes[i].getEmpresa());
		comboBoxCliente->Items->Add(nombreCliente);
	}
	for (int i = 0; i < archBuff.vectorVentas.size(); i++) {
		if (vectorVendedor.size() > 0) {
			for (int j = 0; j < vectorVendedor.size(); j++) {
				if (vectorVendedor[j].getId() == archBuff.vectorVentas[i].getUsuario().getId()) {
					existe = true;
				}
			}
			if (!existe) {
				vectorVendedor.push_back(archBuff.vectorVentas[i].getUsuario());
			}
		}
		else {
			vectorVendedor.push_back(archBuff.vectorVentas[i].getUsuario());
		}
		existe = false;
	}
	for (int i = 0; i < vectorVendedor.size(); i++) {
		if (vectorVendedor[i].getTipo() == 2 || vectorVendedor[i].getTipo() == 1) {
			String^ vendedorSTR = String::Concat(gcnew String(vectorVendedor[i].getNombre()), " ", gcnew String(vectorVendedor[i].getApellido()));
			comboBoxVendedor->Items->Add(vendedorSTR);
		}
	}
}

void VentanaVerVentas::cargarElementos() {
	dataGridView1->Rows->Clear();
	totalVendido = 0;
	totalVentas = 0;
	totalCotizaciones = 0;
	totalCotizado = 0;
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
		if (strcmp(archBuff.vectorVentas[i].getEstado(), "Facturada") == 0) {
			totalVendido += totalVenta;
			totalVentas++;
			totalCotizado += totalVenta;
			totalCotizaciones++;
		}
		else {
			totalCotizado += totalVenta;
			totalCotizaciones++;
		}
		Usuarios user = archBuff.vectorVentas[i].getUsuario();
		String^ userSTR = String::Concat(gcnew String(user.getNombre()), " ", gcnew String(user.getApellido()));
		String^ estadoSTR = gcnew String(archBuff.vectorVentas[i].getEstado());
		String^ clienteSTR = gcnew String(cliente);
		String^ fechaVentaSTR = msclr::interop::marshal_as<String^>(fechaVenta);
		dataGridView1->Rows->Add(numeroVenta, clienteSTR, fechaVentaSTR, totalVenta, userSTR, estadoSTR);

	}
	String^ totalCotizadoSTR = Convert::ToString(totalCotizado);
	String^ totalCotizacionesSTR = Convert::ToString(totalCotizaciones);
	String^ totalVentasSTR = Convert::ToString(totalVentas);
	String^ totalVendidoSTR = Convert::ToString(totalVendido);
	labelVentas->Text = totalVentasSTR;
	labelTotalVendido->Text = totalVendidoSTR;
	labelCotizado->Text = totalCotizadoSTR;
	labelCotizaciones->Text = totalCotizacionesSTR;

}
Void VentanaVerVentas::buttonFiltrar_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	totalVendido = 0;
	totalVentas = 0;
	totalCotizaciones = 0;
	totalCotizado = 0;
	Archivos archBuff;
	archBuff.cargarVectorVentas();
	vector<Ventas> vectorFiltro;
	for (int i = 0; i < archBuff.vectorVentas.size(); i++) {
		vectorFiltro.push_back(archBuff.vectorVentas[i]);
	}
	
	if (checkBoxCliente->Checked) {
		String^ clienteSeleccionado = comboBoxCliente->SelectedItem->ToString();
		string clienteSeleccionadoStr = msclr::interop::marshal_as<string>(clienteSeleccionado);
		const char* clienteSelec = clienteSeleccionadoStr.c_str();
		for (int i = 0; i < vectorFiltro.size(); i++) {
			if (strcmp(clienteSelec, vectorFiltro[i].getCliente().getEmpresa()) != 0) {
				vectorFiltro.erase(vectorFiltro.begin() + i);
				i--;
			}
		}

	}
	if (checkBoxEstado->Checked) {
		String^ estadoSeleccionado = comboBoxEstado->SelectedItem->ToString();
		string estadoSeleccionadoStr = msclr::interop::marshal_as<string>(estadoSeleccionado);
		const char* estadoSelec = estadoSeleccionadoStr.c_str();
		for (int i = 0; i < vectorFiltro.size(); i++) {
			if (strcmp(estadoSelec, vectorFiltro[i].getEstado()) != 0) {
				vectorFiltro.erase(vectorFiltro.begin() + i);
				i--;
			}
		}

	}
	if (checkBoxVendedor->Checked) {
		String^ vendedorSeleccionado = comboBoxVendedor->Text;
		string vendedorSeleccionadoStr = msclr::interop::marshal_as<string>(vendedorSeleccionado);
		const char* vendedorSelec = vendedorSeleccionadoStr.c_str();
		for (int i = 0; i < vectorFiltro.size(); i++) {
			String^ userSTRING = String::Concat(gcnew String(vectorFiltro[i].getUsuario().getNombre()), " ", gcnew String(vectorFiltro[i].getUsuario().getApellido()));
			string userSTR = msclr::interop::marshal_as<string>(userSTRING);
			const char* charUser = userSTR.c_str();
			if (strcmp(charUser, vendedorSelec) != 0) {
				vectorFiltro.erase(vectorFiltro.begin() + i);
				i--;
			}
		}
		
	}
	if (checkBoxFecha->Checked) {
		for (int i = 0; i < vectorFiltro.size();) {
			if (anioDe <= vectorFiltro[i].getFecha().getAnio() && vectorFiltro[i].getFecha().getAnio() <= anioHasta &&
				mesDe <= vectorFiltro[i].getFecha().getMes() && vectorFiltro[i].getFecha().getMes() <= mesHasta &&
				diaDe <= vectorFiltro[i].getFecha().getDia() && vectorFiltro[i].getFecha().getDia() <= diaHasta) {
				i++;
			}
			else {
				vectorFiltro.erase(vectorFiltro.begin() + i);
			}
		}
	}


	for (int i = 0; i < vectorFiltro.size(); i++) {
		int numeroVenta = vectorFiltro[i].getNumero();
		const char* cliente = vectorFiltro[i].getCliente().getEmpresa();
		string fechaVenta = vectorFiltro[i].getFecha().toString();
		float totalVenta = vectorFiltro[i].getTotal();
		if (strcmp(vectorFiltro[i].getEstado(), "Facturada") == 0) {
			totalVendido += totalVenta;
			totalVentas++;
			totalCotizado += totalVenta;
			totalCotizaciones++;
		}
		else {
			totalCotizado += totalVenta;
			totalCotizaciones++;
		}
		Usuarios user = vectorFiltro[i].getUsuario();
		String^ userSTR = String::Concat(gcnew String(user.getNombre()), " ", gcnew String(user.getApellido()));
		String^ estadoSTR = gcnew String(vectorFiltro[i].getEstado());
		String^ clienteSTR = gcnew String(cliente);
		String^ fechaVentaSTR = msclr::interop::marshal_as<String^>(fechaVenta);
		dataGridView1->Rows->Add(numeroVenta, clienteSTR, fechaVentaSTR, totalVenta, userSTR, estadoSTR);
	}
	String^ totalCotizadoSTR = Convert::ToString(totalCotizado);
	String^ totalCotizacionesSTR = Convert::ToString(totalCotizaciones);
	String^ totalVentasSTR = Convert::ToString(totalVentas);
	String^ totalVendidoSTR = Convert::ToString(totalVendido);
	labelVentas->Text = totalVentasSTR;
	labelTotalVendido->Text = totalVendidoSTR;
	labelCotizado->Text = totalCotizadoSTR;
	labelCotizaciones->Text = totalCotizacionesSTR;
}
Void VentanaVerVentas::buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	cargarElementos();
	comboBoxCliente->Text = "";
	comboBoxVendedor->Text = "";
	textBoxDe->Text = "";
	textBoxHasta->Text = "";
	checkBoxCliente->Checked = false;
	checkBoxFecha->Checked = false;
	checkBoxVendedor->Checked = false;
}
Void VentanaVerVentas::checkBoxFecha_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBoxFecha->Checked) {
		textBoxDe->Enabled = false;
		textBoxHasta->Enabled = false;
		buttonCalendarioDe->Enabled = false;
		buttonCalendarioHasta->Enabled = false;
	}
	else {
		textBoxDe->Enabled = true;
		textBoxHasta->Enabled = true;
		buttonCalendarioDe->Enabled = true;
		buttonCalendarioHasta->Enabled = true;
	}
}
Void VentanaVerVentas::checkBoxCliente_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBoxCliente->Checked) {
		comboBoxCliente->Enabled = false;
	}
	else
	{
		comboBoxCliente->Enabled = true;
	}

}
Void VentanaVerVentas::checkBoxVendedor_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBoxVendedor->Checked) {
		comboBoxVendedor->Enabled = false;
	}
	else
	{
		comboBoxVendedor->Enabled = true;
	}
}


Void VentanaVerVentas::buttonCalendarioDe_Click(System::Object^ sender, System::EventArgs^ e) {
	if (monthCalendarDe->Visible) {
		monthCalendarDe->Visible = false;
		DateTime fechaElegida = monthCalendarDe->SelectionStart;
		textBoxDe->Text = fechaElegida.ToShortDateString();
		diaDe = fechaElegida.Day;
		mesDe = fechaElegida.Month;
		anioDe = fechaElegida.Year;
	}
	else {
		monthCalendarDe->Visible = true;
		monthCalendarHasta->Visible = false;
		monthCalendarDe->BringToFront();
	}
}

Void VentanaVerVentas::buttonCalendarioHasta_Click(System::Object^ sender, System::EventArgs^ e) {
	if (monthCalendarHasta->Visible) {
		monthCalendarHasta->Visible = false;
		DateTime fechaElegida = monthCalendarHasta->SelectionStart;
		textBoxHasta->Text = fechaElegida.ToShortDateString();
		diaHasta = fechaElegida.Day;
		mesHasta = fechaElegida.Month;
		anioHasta = fechaElegida.Year;

	}
	else {
		monthCalendarDe->Visible = false;
		monthCalendarHasta->Visible = true;
		monthCalendarHasta->BringToFront();
	}
}

Void VentanaVerVentas::checkBoxEstado_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (!checkBoxEstado->Checked) {
		comboBoxEstado->Enabled = false;
	}
	else
	{
		comboBoxEstado->Enabled = true;
	}
}

Void VentanaVerVentas::buttonFacturar_Click(System::Object^ sender, System::EventArgs^ e) {
	Archivos archBuff;
	archBuff.cargarVectorVentas();
	int idSeleccionado, indice;
	if (dataGridView1->SelectedRows->Count > 0) {
		Object^ numeroVenta = dataGridView1->SelectedRows[0]->Cells[0]->Value;
		if (numeroVenta != nullptr) {
			idSeleccionado = Convert::ToInt32(numeroVenta);
			for (int i = 0; i < archBuff.vectorVentas.size(); i++) {
				if (archBuff.vectorVentas[i].getNumero() == idSeleccionado) {
					archBuff.vectorVentas[i].setEstado("Facturada");
					MessageBox::Show("La orden fue pasada para facturación.", "Orden Facturada", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			archBuff.guardarVectorVentas();
			cargarElementos();
		}
	}
	else {
		MessageBox::Show("Tiene que seleccionar una fila antes de poder facturarla.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

Void VentanaVerVentas::buttonVerDatos_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView3->Rows->Clear();
	int totalNeto;
	int iva;
	int totalVenta;
	Archivos archBuff;
	vector<Items> vectorItems;
	vector<int> vectorCantidad;
	archBuff.cargarVectorVentas();
	int idSeleccionado, indice;
	String^ numeroSTR;
	String^ clienteSTR;
	String^ vendedorSTR;
	String^ estadoSTR;
	if (dataGridView1->SelectedRows->Count > 0) {
		Object^ numeroVenta = dataGridView1->SelectedRows[0]->Cells[0]->Value;
		if (numeroVenta != nullptr) {
			idSeleccionado = Convert::ToInt32(numeroVenta);
			for (int i = 0; i < archBuff.vectorVentas.size(); i++) {
				if (archBuff.vectorVentas[i].getNumero() == idSeleccionado) {
					numeroSTR = Convert::ToString(archBuff.vectorVentas[i].getNumero());
					clienteSTR = Convert::ToString(gcnew String(archBuff.vectorVentas[i].getCliente().getEmpresa()));
					vendedorSTR = String::Concat(gcnew String(archBuff.vectorVentas[i].getUsuario().getNombre()), " ", gcnew String(archBuff.vectorVentas[i].getUsuario().getApellido()));
					estadoSTR = Convert::ToString(gcnew String(archBuff.vectorVentas[i].getEstado()));
					for (int j = 0; j < 20; j++) {
						if (archBuff.vectorVentas[i].getCantidad()[j] > 0) {
							vectorItems.push_back(archBuff.vectorVentas[i].getProducto()[j]);
							vectorCantidad.push_back(archBuff.vectorVentas[i].getCantidad()[j]);
						}
					}
					for (int j = 0; j < vectorItems.size(); j++) {
						String^ nombreItemSTR = Convert::ToString(gcnew String(vectorItems[j].getNombre()));
						int cantidad = vectorCantidad[j];
						int total = vectorCantidad[j] * vectorItems[j].getPrecio();
						dataGridView3->Rows->Add(nombreItemSTR,cantidad, vectorItems[j].getPrecio(), total);
					}
					totalVenta = archBuff.vectorVentas[i].getTotal();
				}

			}
			iva = totalVenta * .21;
			totalNeto = totalVenta - iva;
			labelNeto->Text = Convert::ToString(totalNeto);
			labelIVA->Text = Convert::ToString(iva);
			labelTotalVentas->Text = Convert::ToString(totalVenta);
			labelNumeroVenta->Text = Convert::ToString(numeroVenta);
			labelClienteVenta->Text = clienteSTR;
			labelVendedorVenta->Text = vendedorSTR;
			labelEstado->Text = estadoSTR;


		}
	}
	else {
		MessageBox::Show("Tiene que seleccionar una fila antes de poder cancelarla.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

Void VentanaVerVentas::buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	Archivos archBuff;
	archBuff.cargarVectorVentas();
	int idSeleccionado, indice;
	if (dataGridView1->SelectedRows->Count > 0) {
		Object^ numeroVenta = dataGridView1->SelectedRows[0]->Cells[0]->Value;
		if (numeroVenta != nullptr) {
			idSeleccionado = Convert::ToInt32(numeroVenta);
			for (int i = 0; i < archBuff.vectorVentas.size(); i++) {
				if (archBuff.vectorVentas[i].getNumero() == idSeleccionado) {
					archBuff.vectorVentas[i].setEstado("Cancelada");
					MessageBox::Show("La orden fue cancelada.", "Orden Cancelada", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			archBuff.guardarVectorVentas();
			cargarElementos();
		}
	}
	else {
		MessageBox::Show("Tiene que seleccionar una fila antes de poder cancelarla.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

