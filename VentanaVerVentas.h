#pragma once

namespace NexaGest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaVerVentas
	/// </summary>
	public ref class VentanaVerVentas : public System::Windows::Forms::Form
	{
	public:
		VentanaVerVentas();
		void cargarElementos();

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaVerVentas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Numero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cliente;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vendedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MonthCalendar^ monthCalendarDe;
	private: System::Windows::Forms::Button^ buttonCalendarioDe;
	private: System::Windows::Forms::CheckBox^ checkBoxFecha;




	private: System::Windows::Forms::TextBox^ textBoxDe;
	private: System::Windows::Forms::TextBox^ textBoxHasta;


	private: System::Windows::Forms::Button^ buttonCalendarioHasta;

	private: System::Windows::Forms::MonthCalendar^ monthCalendarHasta;





	protected:





	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		int diaDe;
		int mesDe;
		int anioDe;
		int diaHasta;
		int mesHasta;
	private: System::Windows::Forms::CheckBox^ checkBoxCliente;
	private: System::Windows::Forms::ComboBox^ comboBoxCliente;
	private: System::Windows::Forms::CheckBox^ checkBoxVendedor;
	private: System::Windows::Forms::ComboBox^ comboBoxVendedor;
	private: System::Windows::Forms::CheckBox^ checkBoxValores;
	private: System::Windows::Forms::TextBox^ textBoxValorDe;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxValorHasta;
	private: System::Windows::Forms::Button^ buttonFiltrar;
	private: System::Windows::Forms::Button^ buttonLimpiar;
		   int anioHasta;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaVerVentas::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Numero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vendedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->monthCalendarDe = (gcnew System::Windows::Forms::MonthCalendar());
			this->buttonCalendarioDe = (gcnew System::Windows::Forms::Button());
			this->checkBoxFecha = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxDe = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHasta = (gcnew System::Windows::Forms::TextBox());
			this->buttonCalendarioHasta = (gcnew System::Windows::Forms::Button());
			this->monthCalendarHasta = (gcnew System::Windows::Forms::MonthCalendar());
			this->checkBoxCliente = (gcnew System::Windows::Forms::CheckBox());
			this->comboBoxCliente = (gcnew System::Windows::Forms::ComboBox());
			this->checkBoxVendedor = (gcnew System::Windows::Forms::CheckBox());
			this->comboBoxVendedor = (gcnew System::Windows::Forms::ComboBox());
			this->checkBoxValores = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxValorDe = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxValorHasta = (gcnew System::Windows::Forms::TextBox());
			this->buttonFiltrar = (gcnew System::Windows::Forms::Button());
			this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Numero,
					this->Cliente, this->Fecha, this->Total, this->Vendedor, this->Estado
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 137);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(755, 420);
			this->dataGridView1->TabIndex = 0;
			// 
			// Numero
			// 
			this->Numero->HeaderText = L"Numero";
			this->Numero->Name = L"Numero";
			// 
			// Cliente
			// 
			this->Cliente->HeaderText = L"Cliente";
			this->Cliente->Name = L"Cliente";
			// 
			// Fecha
			// 
			this->Fecha->HeaderText = L"Fecha";
			this->Fecha->Name = L"Fecha";
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->Name = L"Total";
			// 
			// Vendedor
			// 
			this->Vendedor->HeaderText = L"Vendedor";
			this->Vendedor->Name = L"Vendedor";
			// 
			// Estado
			// 
			this->Estado->HeaderText = L"Estado";
			this->Estado->Name = L"Estado";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Filtros:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(67, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"De:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(54, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Hasta:";
			// 
			// monthCalendarDe
			// 
			this->monthCalendarDe->Location = System::Drawing::Point(230, 31);
			this->monthCalendarDe->MaxSelectionCount = 1;
			this->monthCalendarDe->Name = L"monthCalendarDe";
			this->monthCalendarDe->TabIndex = 5;
			this->monthCalendarDe->Visible = false;
			// 
			// buttonCalendarioDe
			// 
			this->buttonCalendarioDe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCalendarioDe.BackgroundImage")));
			this->buttonCalendarioDe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonCalendarioDe->Enabled = false;
			this->buttonCalendarioDe->Location = System::Drawing::Point(204, 31);
			this->buttonCalendarioDe->Name = L"buttonCalendarioDe";
			this->buttonCalendarioDe->Size = System::Drawing::Size(25, 21);
			this->buttonCalendarioDe->TabIndex = 7;
			this->buttonCalendarioDe->UseVisualStyleBackColor = true;
			this->buttonCalendarioDe->Click += gcnew System::EventHandler(this, &VentanaVerVentas::buttonCalendarioDe_Click);
			// 
			// checkBoxFecha
			// 
			this->checkBoxFecha->AutoSize = true;
			this->checkBoxFecha->Location = System::Drawing::Point(70, 14);
			this->checkBoxFecha->Name = L"checkBoxFecha";
			this->checkBoxFecha->Size = System::Drawing::Size(64, 17);
			this->checkBoxFecha->TabIndex = 8;
			this->checkBoxFecha->Text = L"Fechas:";
			this->checkBoxFecha->UseVisualStyleBackColor = true;
			this->checkBoxFecha->CheckedChanged += gcnew System::EventHandler(this, &VentanaVerVentas::checkBoxFecha_CheckedChanged);
			// 
			// textBoxDe
			// 
			this->textBoxDe->Enabled = false;
			this->textBoxDe->Location = System::Drawing::Point(98, 31);
			this->textBoxDe->Name = L"textBoxDe";
			this->textBoxDe->Size = System::Drawing::Size(100, 20);
			this->textBoxDe->TabIndex = 9;
			// 
			// textBoxHasta
			// 
			this->textBoxHasta->Enabled = false;
			this->textBoxHasta->Location = System::Drawing::Point(98, 56);
			this->textBoxHasta->Name = L"textBoxHasta";
			this->textBoxHasta->Size = System::Drawing::Size(100, 20);
			this->textBoxHasta->TabIndex = 10;
			// 
			// buttonCalendarioHasta
			// 
			this->buttonCalendarioHasta->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCalendarioHasta.BackgroundImage")));
			this->buttonCalendarioHasta->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonCalendarioHasta->Enabled = false;
			this->buttonCalendarioHasta->Location = System::Drawing::Point(204, 55);
			this->buttonCalendarioHasta->Name = L"buttonCalendarioHasta";
			this->buttonCalendarioHasta->Size = System::Drawing::Size(25, 21);
			this->buttonCalendarioHasta->TabIndex = 11;
			this->buttonCalendarioHasta->UseVisualStyleBackColor = true;
			this->buttonCalendarioHasta->Click += gcnew System::EventHandler(this, &VentanaVerVentas::buttonCalendarioHasta_Click);
			// 
			// monthCalendarHasta
			// 
			this->monthCalendarHasta->Location = System::Drawing::Point(230, 55);
			this->monthCalendarHasta->MaxSelectionCount = 1;
			this->monthCalendarHasta->Name = L"monthCalendarHasta";
			this->monthCalendarHasta->TabIndex = 12;
			this->monthCalendarHasta->Visible = false;
			// 
			// checkBoxCliente
			// 
			this->checkBoxCliente->AutoSize = true;
			this->checkBoxCliente->Location = System::Drawing::Point(251, 32);
			this->checkBoxCliente->Name = L"checkBoxCliente";
			this->checkBoxCliente->Size = System::Drawing::Size(61, 17);
			this->checkBoxCliente->TabIndex = 13;
			this->checkBoxCliente->Text = L"Cliente:";
			this->checkBoxCliente->UseVisualStyleBackColor = true;
			this->checkBoxCliente->CheckedChanged += gcnew System::EventHandler(this, &VentanaVerVentas::checkBoxCliente_CheckedChanged);
			// 
			// comboBoxCliente
			// 
			this->comboBoxCliente->Enabled = false;
			this->comboBoxCliente->FormattingEnabled = true;
			this->comboBoxCliente->Location = System::Drawing::Point(325, 30);
			this->comboBoxCliente->Name = L"comboBoxCliente";
			this->comboBoxCliente->Size = System::Drawing::Size(178, 21);
			this->comboBoxCliente->TabIndex = 14;
			// 
			// checkBoxVendedor
			// 
			this->checkBoxVendedor->AutoSize = true;
			this->checkBoxVendedor->Location = System::Drawing::Point(251, 59);
			this->checkBoxVendedor->Name = L"checkBoxVendedor";
			this->checkBoxVendedor->Size = System::Drawing::Size(75, 17);
			this->checkBoxVendedor->TabIndex = 15;
			this->checkBoxVendedor->Text = L"Vendedor:";
			this->checkBoxVendedor->UseVisualStyleBackColor = true;
			this->checkBoxVendedor->CheckedChanged += gcnew System::EventHandler(this, &VentanaVerVentas::checkBoxVendedor_CheckedChanged);
			// 
			// comboBoxVendedor
			// 
			this->comboBoxVendedor->Enabled = false;
			this->comboBoxVendedor->FormattingEnabled = true;
			this->comboBoxVendedor->Location = System::Drawing::Point(325, 57);
			this->comboBoxVendedor->Name = L"comboBoxVendedor";
			this->comboBoxVendedor->Size = System::Drawing::Size(178, 21);
			this->comboBoxVendedor->TabIndex = 16;
			// 
			// checkBoxValores
			// 
			this->checkBoxValores->AutoSize = true;
			this->checkBoxValores->Location = System::Drawing::Point(523, 33);
			this->checkBoxValores->Name = L"checkBoxValores";
			this->checkBoxValores->Size = System::Drawing::Size(64, 17);
			this->checkBoxValores->TabIndex = 17;
			this->checkBoxValores->Text = L"Valores:";
			this->checkBoxValores->UseVisualStyleBackColor = true;
			this->checkBoxValores->CheckedChanged += gcnew System::EventHandler(this, &VentanaVerVentas::checkBoxValores_CheckedChanged);
			// 
			// textBoxValorDe
			// 
			this->textBoxValorDe->Enabled = false;
			this->textBoxValorDe->Location = System::Drawing::Point(616, 33);
			this->textBoxValorDe->Name = L"textBoxValorDe";
			this->textBoxValorDe->Size = System::Drawing::Size(100, 20);
			this->textBoxValorDe->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(573, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 13);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Hasta:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(586, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 13);
			this->label5->TabIndex = 19;
			this->label5->Text = L"De:";
			// 
			// textBoxValorHasta
			// 
			this->textBoxValorHasta->Enabled = false;
			this->textBoxValorHasta->Location = System::Drawing::Point(616, 57);
			this->textBoxValorHasta->Name = L"textBoxValorHasta";
			this->textBoxValorHasta->Size = System::Drawing::Size(100, 20);
			this->textBoxValorHasta->TabIndex = 21;
			// 
			// buttonFiltrar
			// 
			this->buttonFiltrar->Location = System::Drawing::Point(16, 91);
			this->buttonFiltrar->Name = L"buttonFiltrar";
			this->buttonFiltrar->Size = System::Drawing::Size(104, 35);
			this->buttonFiltrar->TabIndex = 22;
			this->buttonFiltrar->Text = L"Filtrar";
			this->buttonFiltrar->UseVisualStyleBackColor = true;
			this->buttonFiltrar->Click += gcnew System::EventHandler(this, &VentanaVerVentas::buttonFiltrar_Click);
			// 
			// buttonLimpiar
			// 
			this->buttonLimpiar->Location = System::Drawing::Point(126, 91);
			this->buttonLimpiar->Name = L"buttonLimpiar";
			this->buttonLimpiar->Size = System::Drawing::Size(104, 35);
			this->buttonLimpiar->TabIndex = 23;
			this->buttonLimpiar->Text = L"Limpiar Filtro";
			this->buttonLimpiar->UseVisualStyleBackColor = true;
			this->buttonLimpiar->Click += gcnew System::EventHandler(this, &VentanaVerVentas::buttonLimpiar_Click);
			// 
			// VentanaVerVentas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 569);
			this->Controls->Add(this->buttonLimpiar);
			this->Controls->Add(this->buttonFiltrar);
			this->Controls->Add(this->textBoxValorHasta);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBoxValorDe);
			this->Controls->Add(this->checkBoxValores);
			this->Controls->Add(this->comboBoxVendedor);
			this->Controls->Add(this->checkBoxVendedor);
			this->Controls->Add(this->comboBoxCliente);
			this->Controls->Add(this->checkBoxCliente);
			this->Controls->Add(this->monthCalendarHasta);
			this->Controls->Add(this->buttonCalendarioHasta);
			this->Controls->Add(this->textBoxHasta);
			this->Controls->Add(this->textBoxDe);
			this->Controls->Add(this->checkBoxFecha);
			this->Controls->Add(this->buttonCalendarioDe);
			this->Controls->Add(this->monthCalendarDe);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"VentanaVerVentas";
			this->Text = L"VentanaVerVentas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonCalendarioHasta_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonCalendarioDe_Click(System::Object^ sender, System::EventArgs^ e);
		Void checkBoxFecha_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		Void checkBoxCliente_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		Void checkBoxVendedor_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		Void checkBoxValores_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonFiltrar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
