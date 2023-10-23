#pragma once
#include "Items.h";
#include <iostream>
#include <cstring>
#include <vector>
#include "VentanaItems.h"

namespace NexaGest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	/// <summary>
	/// Resumen de VentanaItems
	/// </summary>
	public ref class VentanaItems : public Form
	{
	public:
		VentanaItems() {
			InitializeComponent();
		};
		void ingresarItem();
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>

		~VentanaItems()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBoxVendible;
	private: System::Windows::Forms::CheckBox^ checkBoxComprable;
	private: System::Windows::Forms::CheckBox^ checkBoxEstado;



	private: System::Windows::Forms::TextBox^ textBoxNombre;
	private: System::Windows::Forms::TextBox^ textBoxDescripcion;
	private: System::Windows::Forms::TextBox^ textBoxMarca;
	private: System::Windows::Forms::TextBox^ textBoxPrecio;
	private: System::Windows::Forms::TextBox^ textBoxCosto;





	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxCantidad;



	private:









		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBoxVendible = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxComprable = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxEstado = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMarca = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrecio = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCosto = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxCantidad = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Descripcion";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 96);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Marca";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 188);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Costo";
			// 
			// checkBoxVendible
			// 
			this->checkBoxVendible->AutoSize = true;
			this->checkBoxVendible->Location = System::Drawing::Point(31, 219);
			this->checkBoxVendible->Name = L"checkBoxVendible";
			this->checkBoxVendible->Size = System::Drawing::Size(67, 17);
			this->checkBoxVendible->TabIndex = 14;
			this->checkBoxVendible->Text = L"Vendible";
			this->checkBoxVendible->UseVisualStyleBackColor = true;
			// 
			// checkBoxComprable
			// 
			this->checkBoxComprable->AutoSize = true;
			this->checkBoxComprable->Location = System::Drawing::Point(31, 243);
			this->checkBoxComprable->Name = L"checkBoxComprable";
			this->checkBoxComprable->Size = System::Drawing::Size(76, 17);
			this->checkBoxComprable->TabIndex = 15;
			this->checkBoxComprable->Text = L"Comprable";
			this->checkBoxComprable->UseVisualStyleBackColor = true;
			// 
			// checkBoxEstado
			// 
			this->checkBoxEstado->AutoSize = true;
			this->checkBoxEstado->Location = System::Drawing::Point(31, 267);
			this->checkBoxEstado->Name = L"checkBoxEstado";
			this->checkBoxEstado->Size = System::Drawing::Size(56, 17);
			this->checkBoxEstado->TabIndex = 16;
			this->checkBoxEstado->Text = L"Activo";
			this->checkBoxEstado->UseVisualStyleBackColor = true;
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Location = System::Drawing::Point(79, 23);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(301, 20);
			this->textBoxNombre->TabIndex = 8;
			// 
			// textBoxDescripcion
			// 
			this->textBoxDescripcion->Location = System::Drawing::Point(98, 61);
			this->textBoxDescripcion->Name = L"textBoxDescripcion";
			this->textBoxDescripcion->Size = System::Drawing::Size(282, 20);
			this->textBoxDescripcion->TabIndex = 9;
			// 
			// textBoxMarca
			// 
			this->textBoxMarca->Location = System::Drawing::Point(79, 96);
			this->textBoxMarca->Name = L"textBoxMarca";
			this->textBoxMarca->Size = System::Drawing::Size(301, 20);
			this->textBoxMarca->TabIndex = 10;
			// 
			// textBoxPrecio
			// 
			this->textBoxPrecio->Location = System::Drawing::Point(79, 157);
			this->textBoxPrecio->Name = L"textBoxPrecio";
			this->textBoxPrecio->Size = System::Drawing::Size(96, 20);
			this->textBoxPrecio->TabIndex = 12;
			// 
			// textBoxCosto
			// 
			this->textBoxCosto->Location = System::Drawing::Point(79, 185);
			this->textBoxCosto->Name = L"textBoxCosto";
			this->textBoxCosto->Size = System::Drawing::Size(96, 20);
			this->textBoxCosto->TabIndex = 13;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(31, 291);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 51);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Ingresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &VentanaItems::botonIngresar);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(213, 291);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 51);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &VentanaItems::botonCancelar);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(28, 129);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Cantidad";
			// 
			// textBoxCantidad
			// 
			this->textBoxCantidad->Location = System::Drawing::Point(79, 126);
			this->textBoxCantidad->Name = L"textBoxCantidad";
			this->textBoxCantidad->Size = System::Drawing::Size(100, 20);
			this->textBoxCantidad->TabIndex = 11;
			// 
			// VentanaItems
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 363);
			this->Controls->Add(this->textBoxCantidad);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxCosto);
			this->Controls->Add(this->textBoxPrecio);
			this->Controls->Add(this->textBoxMarca);
			this->Controls->Add(this->textBoxDescripcion);
			this->Controls->Add(this->textBoxNombre);
			this->Controls->Add(this->checkBoxEstado);
			this->Controls->Add(this->checkBoxComprable);
			this->Controls->Add(this->checkBoxVendible);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"VentanaItems";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaItems";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
	Void botonIngresar(System::Object^ sender, System::EventArgs^ e);
	Void botonCancelar(System::Object^ sender, System::EventArgs^ e);
};
}
