#pragma once

namespace NexaGest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuVentas
	/// </summary>
	public ref class MenuVentas : public System::Windows::Forms::Form
	{
	public:
		MenuVentas();


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MenuVentas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ labelNumeroVenta;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBoxCliente;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ labelFecha;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ buttonAgregar;
	private: System::Windows::Forms::Button^ buttonEliminar;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ labelNeto;
	private: System::Windows::Forms::Label^ labelIVA;
	private: System::Windows::Forms::Label^ labelTotal;
	private: System::Windows::Forms::Label^ labelVendedor;





	private: System::Windows::Forms::Button^ buttonGuardar;
	private: System::Windows::Forms::Button^ buttonCancelar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descuento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total;





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelNumeroVenta = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxCliente = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelFecha = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descuento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonAgregar = (gcnew System::Windows::Forms::Button());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelNeto = (gcnew System::Windows::Forms::Label());
			this->labelIVA = (gcnew System::Windows::Forms::Label());
			this->labelTotal = (gcnew System::Windows::Forms::Label());
			this->labelVendedor = (gcnew System::Windows::Forms::Label());
			this->buttonGuardar = (gcnew System::Windows::Forms::Button());
			this->buttonCancelar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(106, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Numero de Venta:";
			// 
			// labelNumeroVenta
			// 
			this->labelNumeroVenta->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelNumeroVenta->AutoSize = true;
			this->labelNumeroVenta->Location = System::Drawing::Point(206, 13);
			this->labelNumeroVenta->Name = L"labelNumeroVenta";
			this->labelNumeroVenta->Size = System::Drawing::Size(38, 13);
			this->labelNumeroVenta->TabIndex = 1;
			this->labelNumeroVenta->Text = L"Nuevo";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(109, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Cliente:";
			// 
			// comboBoxCliente
			// 
			this->comboBoxCliente->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->comboBoxCliente->FormattingEnabled = true;
			this->comboBoxCliente->Location = System::Drawing::Point(158, 41);
			this->comboBoxCliente->Name = L"comboBoxCliente";
			this->comboBoxCliente->Size = System::Drawing::Size(309, 21);
			this->comboBoxCliente->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(385, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Fecha:";
			// 
			// labelFecha
			// 
			this->labelFecha->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelFecha->AutoSize = true;
			this->labelFecha->Location = System::Drawing::Point(432, 13);
			this->labelFecha->Name = L"labelFecha";
			this->labelFecha->Size = System::Drawing::Size(37, 13);
			this->labelFecha->TabIndex = 5;
			this->labelFecha->Text = L"label4";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(109, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Vendedor:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Nombre,
					this->Cantidad, this->Precio, this->Descuento, this->Total
			});
			this->dataGridView1->Location = System::Drawing::Point(19, 183);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(548, 255);
			this->dataGridView1->TabIndex = 8;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->Name = L"Cantidad";
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->Name = L"Precio";
			this->Precio->ReadOnly = true;
			// 
			// Descuento
			// 
			this->Descuento->HeaderText = L"Descuento";
			this->Descuento->Name = L"Descuento";
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			this->Total->ReadOnly = true;
			// 
			// buttonAgregar
			// 
			this->buttonAgregar->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonAgregar->Location = System::Drawing::Point(158, 127);
			this->buttonAgregar->Name = L"buttonAgregar";
			this->buttonAgregar->Size = System::Drawing::Size(128, 38);
			this->buttonAgregar->TabIndex = 9;
			this->buttonAgregar->Text = L"Agregar Item";
			this->buttonAgregar->UseVisualStyleBackColor = true;
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonEliminar->Location = System::Drawing::Point(322, 127);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(128, 38);
			this->buttonEliminar->TabIndex = 10;
			this->buttonEliminar->Text = L"Eliminar Item";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(207, 455);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Total Neto:";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(304, 455);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"IVA:";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(382, 455);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Total:";
			// 
			// labelNeto
			// 
			this->labelNeto->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelNeto->AutoSize = true;
			this->labelNeto->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNeto->Location = System::Drawing::Point(210, 472);
			this->labelNeto->Name = L"labelNeto";
			this->labelNeto->Size = System::Drawing::Size(41, 15);
			this->labelNeto->TabIndex = 14;
			this->labelNeto->Text = L"label8";
			// 
			// labelIVA
			// 
			this->labelIVA->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelIVA->AutoSize = true;
			this->labelIVA->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelIVA->Location = System::Drawing::Point(304, 472);
			this->labelIVA->Name = L"labelIVA";
			this->labelIVA->Size = System::Drawing::Size(41, 15);
			this->labelIVA->TabIndex = 15;
			this->labelIVA->Text = L"label8";
			// 
			// labelTotal
			// 
			this->labelTotal->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelTotal->AutoSize = true;
			this->labelTotal->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTotal->Location = System::Drawing::Point(382, 472);
			this->labelTotal->Name = L"labelTotal";
			this->labelTotal->Size = System::Drawing::Size(41, 15);
			this->labelTotal->TabIndex = 16;
			this->labelTotal->Text = L"label8";
			// 
			// labelVendedor
			// 
			this->labelVendedor->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelVendedor->AutoSize = true;
			this->labelVendedor->Location = System::Drawing::Point(173, 78);
			this->labelVendedor->Name = L"labelVendedor";
			this->labelVendedor->Size = System::Drawing::Size(37, 13);
			this->labelVendedor->TabIndex = 17;
			this->labelVendedor->Text = L"label8";
			// 
			// buttonGuardar
			// 
			this->buttonGuardar->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonGuardar->Location = System::Drawing::Point(158, 512);
			this->buttonGuardar->Name = L"buttonGuardar";
			this->buttonGuardar->Size = System::Drawing::Size(128, 38);
			this->buttonGuardar->TabIndex = 18;
			this->buttonGuardar->Text = L"Guardar";
			this->buttonGuardar->UseVisualStyleBackColor = true;
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonCancelar->Location = System::Drawing::Point(322, 512);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(128, 38);
			this->buttonCancelar->TabIndex = 19;
			this->buttonCancelar->Text = L"Cancelar";
			this->buttonCancelar->UseVisualStyleBackColor = true;
			// 
			// MenuVentas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(571, 562);
			this->Controls->Add(this->buttonCancelar);
			this->Controls->Add(this->buttonGuardar);
			this->Controls->Add(this->labelVendedor);
			this->Controls->Add(this->labelTotal);
			this->Controls->Add(this->labelIVA);
			this->Controls->Add(this->labelNeto);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->buttonEliminar);
			this->Controls->Add(this->buttonAgregar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->labelFecha);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBoxCliente);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelNumeroVenta);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Roboto", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MenuVentas";
			this->Text = L"MenuVentas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
