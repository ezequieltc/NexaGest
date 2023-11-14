#pragma once

namespace NexaGest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuCompras
	/// </summary>
	public ref class MenuCompras : public System::Windows::Forms::Form
	{
	public:
		MenuCompras(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MenuCompras()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descripcion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Descuento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TotalColumna;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDColumna;
	private: System::Windows::Forms::TextBox^ textBoxCantidad;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBoxItems;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ buttonCancelar;
	private: System::Windows::Forms::Button^ buttonGuardar;
	private: System::Windows::Forms::Label^ labelVendedor;
	private: System::Windows::Forms::Label^ labelTotalVentas;
	private: System::Windows::Forms::Label^ labelIVA;
	private: System::Windows::Forms::Label^ labelNeto;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ buttonEliminar;
	private: System::Windows::Forms::Button^ buttonAgregar;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ labelFecha;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBoxProveedor;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelNumeroCompra;
	private: System::Windows::Forms::Label^ label1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descripcion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Descuento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TotalColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IDColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBoxCantidad = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBoxItems = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->buttonCancelar = (gcnew System::Windows::Forms::Button());
			this->buttonGuardar = (gcnew System::Windows::Forms::Button());
			this->labelVendedor = (gcnew System::Windows::Forms::Label());
			this->labelTotalVentas = (gcnew System::Windows::Forms::Label());
			this->labelIVA = (gcnew System::Windows::Forms::Label());
			this->labelNeto = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->buttonAgregar = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->labelFecha = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBoxProveedor = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelNumeroCompra = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Nombre,
					this->Descripcion, this->Cantidad, this->Precio, this->Descuento, this->TotalColumna, this->IDColumna
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 171);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(716, 269);
			this->dataGridView1->TabIndex = 47;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			this->Nombre->Width = 150;
			// 
			// Descripcion
			// 
			this->Descripcion->HeaderText = L"Descripcion";
			this->Descripcion->Name = L"Descripcion";
			this->Descripcion->ReadOnly = true;
			this->Descripcion->Width = 150;
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->Name = L"Cantidad";
			this->Cantidad->ReadOnly = true;
			this->Cantidad->Width = 80;
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
			this->Descuento->ReadOnly = true;
			// 
			// TotalColumna
			// 
			this->TotalColumna->HeaderText = L"Total";
			this->TotalColumna->Name = L"TotalColumna";
			this->TotalColumna->ReadOnly = true;
			// 
			// IDColumna
			// 
			this->IDColumna->HeaderText = L"ID";
			this->IDColumna->Name = L"IDColumna";
			this->IDColumna->ReadOnly = true;
			this->IDColumna->Visible = false;
			// 
			// textBoxCantidad
			// 
			this->textBoxCantidad->Location = System::Drawing::Point(520, 100);
			this->textBoxCantidad->Name = L"textBoxCantidad";
			this->textBoxCantidad->Size = System::Drawing::Size(100, 20);
			this->textBoxCantidad->TabIndex = 46;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(460, 103);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 45;
			this->label9->Text = L"Cantidad:";
			// 
			// comboBoxItems
			// 
			this->comboBoxItems->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->comboBoxItems->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBoxItems->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxItems->FormattingEnabled = true;
			this->comboBoxItems->Location = System::Drawing::Point(243, 100);
			this->comboBoxItems->Name = L"comboBoxItems";
			this->comboBoxItems->Size = System::Drawing::Size(201, 21);
			this->comboBoxItems->TabIndex = 44;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(196, 103);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 13);
			this->label8->TabIndex = 43;
			this->label8->Text = L"Item:";
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonCancelar->Location = System::Drawing::Point(407, 512);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(128, 38);
			this->buttonCancelar->TabIndex = 42;
			this->buttonCancelar->Text = L"Cancelar";
			this->buttonCancelar->UseVisualStyleBackColor = true;
			// 
			// buttonGuardar
			// 
			this->buttonGuardar->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->buttonGuardar->Location = System::Drawing::Point(243, 512);
			this->buttonGuardar->Name = L"buttonGuardar";
			this->buttonGuardar->Size = System::Drawing::Size(128, 38);
			this->buttonGuardar->TabIndex = 41;
			this->buttonGuardar->Text = L"Guardar";
			this->buttonGuardar->UseVisualStyleBackColor = true;
			// 
			// labelVendedor
			// 
			this->labelVendedor->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelVendedor->AutoSize = true;
			this->labelVendedor->Location = System::Drawing::Point(258, 78);
			this->labelVendedor->Name = L"labelVendedor";
			this->labelVendedor->Size = System::Drawing::Size(35, 13);
			this->labelVendedor->TabIndex = 40;
			this->labelVendedor->Text = L"label8";
			// 
			// labelTotalVentas
			// 
			this->labelTotalVentas->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelTotalVentas->AutoSize = true;
			this->labelTotalVentas->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTotalVentas->Location = System::Drawing::Point(452, 472);
			this->labelTotalVentas->Name = L"labelTotalVentas";
			this->labelTotalVentas->Size = System::Drawing::Size(41, 15);
			this->labelTotalVentas->TabIndex = 39;
			this->labelTotalVentas->Text = L"label8";
			// 
			// labelIVA
			// 
			this->labelIVA->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelIVA->AutoSize = true;
			this->labelIVA->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelIVA->Location = System::Drawing::Point(374, 472);
			this->labelIVA->Name = L"labelIVA";
			this->labelIVA->Size = System::Drawing::Size(41, 15);
			this->labelIVA->TabIndex = 38;
			this->labelIVA->Text = L"label8";
			// 
			// labelNeto
			// 
			this->labelNeto->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelNeto->AutoSize = true;
			this->labelNeto->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNeto->Location = System::Drawing::Point(280, 472);
			this->labelNeto->Name = L"labelNeto";
			this->labelNeto->Size = System::Drawing::Size(41, 15);
			this->labelNeto->TabIndex = 37;
			this->labelNeto->Text = L"label8";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(452, 455);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 13);
			this->label7->TabIndex = 36;
			this->label7->Text = L"Total:";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(374, 455);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 13);
			this->label6->TabIndex = 35;
			this->label6->Text = L"IVA:";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(277, 455);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Total Neto:";
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonEliminar->Location = System::Drawing::Point(407, 127);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(128, 38);
			this->buttonEliminar->TabIndex = 33;
			this->buttonEliminar->Text = L"Eliminar Item";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			// 
			// buttonAgregar
			// 
			this->buttonAgregar->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonAgregar->Location = System::Drawing::Point(243, 127);
			this->buttonAgregar->Name = L"buttonAgregar";
			this->buttonAgregar->Size = System::Drawing::Size(128, 38);
			this->buttonAgregar->TabIndex = 32;
			this->buttonAgregar->Text = L"Agregar Item";
			this->buttonAgregar->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(194, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Comprador:";
			// 
			// labelFecha
			// 
			this->labelFecha->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelFecha->AutoSize = true;
			this->labelFecha->Location = System::Drawing::Point(517, 13);
			this->labelFecha->Name = L"labelFecha";
			this->labelFecha->Size = System::Drawing::Size(35, 13);
			this->labelFecha->TabIndex = 30;
			this->labelFecha->Text = L"label4";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(470, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Fecha:";
			// 
			// comboBoxProveedor
			// 
			this->comboBoxProveedor->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->comboBoxProveedor->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->comboBoxProveedor->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxProveedor->FormattingEnabled = true;
			this->comboBoxProveedor->Location = System::Drawing::Point(243, 41);
			this->comboBoxProveedor->Name = L"comboBoxProveedor";
			this->comboBoxProveedor->Size = System::Drawing::Size(309, 21);
			this->comboBoxProveedor->TabIndex = 28;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(186, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Proveedor";
			// 
			// labelNumeroCompra
			// 
			this->labelNumeroCompra->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelNumeroCompra->AutoSize = true;
			this->labelNumeroCompra->Location = System::Drawing::Point(291, 13);
			this->labelNumeroCompra->Name = L"labelNumeroCompra";
			this->labelNumeroCompra->Size = System::Drawing::Size(39, 13);
			this->labelNumeroCompra->TabIndex = 26;
			this->labelNumeroCompra->Text = L"Nuevo";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(191, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 13);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Numero de Compra:";
			// 
			// MenuCompras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(741, 562);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBoxCantidad);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBoxItems);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->buttonCancelar);
			this->Controls->Add(this->buttonGuardar);
			this->Controls->Add(this->labelVendedor);
			this->Controls->Add(this->labelTotalVentas);
			this->Controls->Add(this->labelIVA);
			this->Controls->Add(this->labelNeto);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->buttonEliminar);
			this->Controls->Add(this->buttonAgregar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->labelFecha);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBoxProveedor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->labelNumeroCompra);
			this->Controls->Add(this->label1);
			this->Name = L"MenuCompras";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuCompras";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
