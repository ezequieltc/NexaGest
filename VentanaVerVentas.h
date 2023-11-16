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
		int anioHasta;
		float totalVendido;
		int totalVentas;
		float totalCotizado;
		int totalCotizaciones;
	private: System::Windows::Forms::CheckBox^ checkBoxCliente;
	private: System::Windows::Forms::ComboBox^ comboBoxCliente;
	private: System::Windows::Forms::CheckBox^ checkBoxVendedor;
	private: System::Windows::Forms::ComboBox^ comboBoxVendedor;





	private: System::Windows::Forms::Button^ buttonFiltrar;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ labelVentas;
	private: System::Windows::Forms::Label^ labelTotalVendido;
	private: System::Windows::Forms::ComboBox^ comboBoxEstado;
	private: System::Windows::Forms::CheckBox^ checkBoxEstado;

	private: System::Windows::Forms::Button^ buttonFacturar;
	private: System::Windows::Forms::Button^ buttonCancelar;
	private: System::Windows::Forms::Label^ labelCotizaciones;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ labelCotizado;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TotalColumna;
	private: System::Windows::Forms::Label^ labelNumeroVenta;
	private: System::Windows::Forms::Label^ labelClienteVenta;
	private: System::Windows::Forms::Label^ labelVendedorVenta;
private: System::Windows::Forms::Label^ labelEstado;
private: System::Windows::Forms::Label^ labelTotalVentas;
private: System::Windows::Forms::Label^ labelIVA;
private: System::Windows::Forms::Label^ labelNeto;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Button^ buttonVerDatos;

	private: System::Windows::Forms::Button^ buttonLimpiar;
		   

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
			this->buttonFiltrar = (gcnew System::Windows::Forms::Button());
			this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->labelVentas = (gcnew System::Windows::Forms::Label());
			this->labelTotalVendido = (gcnew System::Windows::Forms::Label());
			this->comboBoxEstado = (gcnew System::Windows::Forms::ComboBox());
			this->checkBoxEstado = (gcnew System::Windows::Forms::CheckBox());
			this->buttonFacturar = (gcnew System::Windows::Forms::Button());
			this->buttonCancelar = (gcnew System::Windows::Forms::Button());
			this->labelCotizaciones = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->labelCotizado = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TotalColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->labelNumeroVenta = (gcnew System::Windows::Forms::Label());
			this->labelClienteVenta = (gcnew System::Windows::Forms::Label());
			this->labelVendedorVenta = (gcnew System::Windows::Forms::Label());
			this->labelEstado = (gcnew System::Windows::Forms::Label());
			this->labelTotalVentas = (gcnew System::Windows::Forms::Label());
			this->labelIVA = (gcnew System::Windows::Forms::Label());
			this->labelNeto = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->buttonVerDatos = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
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
			this->label1->Location = System::Drawing::Point(81, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Filtros:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(135, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"De:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(122, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Hasta:";
			// 
			// monthCalendarDe
			// 
			this->monthCalendarDe->Location = System::Drawing::Point(298, 31);
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
			this->buttonCalendarioDe->Location = System::Drawing::Point(272, 31);
			this->buttonCalendarioDe->Name = L"buttonCalendarioDe";
			this->buttonCalendarioDe->Size = System::Drawing::Size(25, 21);
			this->buttonCalendarioDe->TabIndex = 7;
			this->buttonCalendarioDe->UseVisualStyleBackColor = true;
			this->buttonCalendarioDe->Click += gcnew System::EventHandler(this, &VentanaVerVentas::buttonCalendarioDe_Click);
			// 
			// checkBoxFecha
			// 
			this->checkBoxFecha->AutoSize = true;
			this->checkBoxFecha->Location = System::Drawing::Point(65, 35);
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
			this->textBoxDe->Location = System::Drawing::Point(166, 31);
			this->textBoxDe->Name = L"textBoxDe";
			this->textBoxDe->Size = System::Drawing::Size(100, 20);
			this->textBoxDe->TabIndex = 9;
			// 
			// textBoxHasta
			// 
			this->textBoxHasta->Enabled = false;
			this->textBoxHasta->Location = System::Drawing::Point(166, 56);
			this->textBoxHasta->Name = L"textBoxHasta";
			this->textBoxHasta->Size = System::Drawing::Size(100, 20);
			this->textBoxHasta->TabIndex = 10;
			// 
			// buttonCalendarioHasta
			// 
			this->buttonCalendarioHasta->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCalendarioHasta.BackgroundImage")));
			this->buttonCalendarioHasta->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonCalendarioHasta->Enabled = false;
			this->buttonCalendarioHasta->Location = System::Drawing::Point(272, 55);
			this->buttonCalendarioHasta->Name = L"buttonCalendarioHasta";
			this->buttonCalendarioHasta->Size = System::Drawing::Size(25, 21);
			this->buttonCalendarioHasta->TabIndex = 11;
			this->buttonCalendarioHasta->UseVisualStyleBackColor = true;
			this->buttonCalendarioHasta->Click += gcnew System::EventHandler(this, &VentanaVerVentas::buttonCalendarioHasta_Click);
			// 
			// monthCalendarHasta
			// 
			this->monthCalendarHasta->Location = System::Drawing::Point(298, 55);
			this->monthCalendarHasta->MaxSelectionCount = 1;
			this->monthCalendarHasta->Name = L"monthCalendarHasta";
			this->monthCalendarHasta->TabIndex = 12;
			this->monthCalendarHasta->Visible = false;
			// 
			// checkBoxCliente
			// 
			this->checkBoxCliente->AutoSize = true;
			this->checkBoxCliente->Location = System::Drawing::Point(327, 32);
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
			this->comboBoxCliente->Location = System::Drawing::Point(401, 30);
			this->comboBoxCliente->Name = L"comboBoxCliente";
			this->comboBoxCliente->Size = System::Drawing::Size(178, 21);
			this->comboBoxCliente->TabIndex = 14;
			// 
			// checkBoxVendedor
			// 
			this->checkBoxVendedor->AutoSize = true;
			this->checkBoxVendedor->Location = System::Drawing::Point(327, 59);
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
			this->comboBoxVendedor->Location = System::Drawing::Point(401, 57);
			this->comboBoxVendedor->Name = L"comboBoxVendedor";
			this->comboBoxVendedor->Size = System::Drawing::Size(178, 21);
			this->comboBoxVendedor->TabIndex = 16;
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
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(583, 582);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Total Vendido: $";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(468, 582);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Total Ventas:";
			// 
			// labelVentas
			// 
			this->labelVentas->AutoSize = true;
			this->labelVentas->Location = System::Drawing::Point(539, 582);
			this->labelVentas->Name = L"labelVentas";
			this->labelVentas->Size = System::Drawing::Size(35, 13);
			this->labelVentas->TabIndex = 26;
			this->labelVentas->Text = L"label8";
			// 
			// labelTotalVendido
			// 
			this->labelTotalVendido->AutoSize = true;
			this->labelTotalVendido->Location = System::Drawing::Point(669, 582);
			this->labelTotalVendido->Name = L"labelTotalVendido";
			this->labelTotalVendido->Size = System::Drawing::Size(35, 13);
			this->labelTotalVendido->TabIndex = 27;
			this->labelTotalVendido->Text = L"label8";
			// 
			// comboBoxEstado
			// 
			this->comboBoxEstado->Enabled = false;
			this->comboBoxEstado->FormattingEnabled = true;
			this->comboBoxEstado->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Activa", L"Facturada", L"Cancelada" });
			this->comboBoxEstado->Location = System::Drawing::Point(659, 30);
			this->comboBoxEstado->Name = L"comboBoxEstado";
			this->comboBoxEstado->Size = System::Drawing::Size(108, 21);
			this->comboBoxEstado->TabIndex = 29;
			// 
			// checkBoxEstado
			// 
			this->checkBoxEstado->AutoSize = true;
			this->checkBoxEstado->Location = System::Drawing::Point(590, 32);
			this->checkBoxEstado->Name = L"checkBoxEstado";
			this->checkBoxEstado->Size = System::Drawing::Size(62, 17);
			this->checkBoxEstado->TabIndex = 28;
			this->checkBoxEstado->Text = L"Estado:";
			this->checkBoxEstado->UseVisualStyleBackColor = true;
			this->checkBoxEstado->CheckedChanged += gcnew System::EventHandler(this, &VentanaVerVentas::checkBoxEstado_CheckedChanged);
			// 
			// buttonFacturar
			// 
			this->buttonFacturar->Location = System::Drawing::Point(433, 91);
			this->buttonFacturar->Name = L"buttonFacturar";
			this->buttonFacturar->Size = System::Drawing::Size(104, 35);
			this->buttonFacturar->TabIndex = 30;
			this->buttonFacturar->Text = L"Facturar Orden";
			this->buttonFacturar->UseVisualStyleBackColor = true;
			this->buttonFacturar->Click += gcnew System::EventHandler(this, &VentanaVerVentas::buttonFacturar_Click);
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->Location = System::Drawing::Point(545, 91);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(104, 35);
			this->buttonCancelar->TabIndex = 31;
			this->buttonCancelar->Text = L"Cancelar Orden";
			this->buttonCancelar->UseVisualStyleBackColor = true;
			this->buttonCancelar->Click += gcnew System::EventHandler(this, &VentanaVerVentas::buttonCancelar_Click);
			// 
			// labelCotizaciones
			// 
			this->labelCotizaciones->AutoSize = true;
			this->labelCotizaciones->Location = System::Drawing::Point(539, 602);
			this->labelCotizaciones->Name = L"labelCotizaciones";
			this->labelCotizaciones->Size = System::Drawing::Size(35, 13);
			this->labelCotizaciones->TabIndex = 33;
			this->labelCotizaciones->Text = L"label8";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(441, 602);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Total Cotizaciones:";
			// 
			// labelCotizado
			// 
			this->labelCotizado->AutoSize = true;
			this->labelCotizado->Location = System::Drawing::Point(669, 602);
			this->labelCotizado->Name = L"labelCotizado";
			this->labelCotizado->Size = System::Drawing::Size(35, 13);
			this->labelCotizado->TabIndex = 35;
			this->labelCotizado->Text = L"label8";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(582, 602);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 13);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Total Cotizado: $";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(789, 14);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(10, 619);
			this->dataGridView2->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(831, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 13);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Numero de Venta:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(831, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 13);
			this->label9->TabIndex = 38;
			this->label9->Text = L"Cliente:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(831, 79);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 13);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Vendedor:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(831, 100);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 13);
			this->label11->TabIndex = 40;
			this->label11->Text = L"Estado:";
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Nombre,
					this->Cantidad, this->Precio, this->TotalColumna
			});
			this->dataGridView3->Location = System::Drawing::Point(834, 137);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->Size = System::Drawing::Size(475, 269);
			this->dataGridView3->TabIndex = 41;
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			this->Nombre->Width = 150;
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
			// TotalColumna
			// 
			this->TotalColumna->HeaderText = L"Total";
			this->TotalColumna->Name = L"TotalColumna";
			this->TotalColumna->ReadOnly = true;
			// 
			// labelNumeroVenta
			// 
			this->labelNumeroVenta->AutoSize = true;
			this->labelNumeroVenta->Location = System::Drawing::Point(930, 37);
			this->labelNumeroVenta->Name = L"labelNumeroVenta";
			this->labelNumeroVenta->Size = System::Drawing::Size(42, 13);
			this->labelNumeroVenta->TabIndex = 42;
			this->labelNumeroVenta->Text = L"numero";
			// 
			// labelClienteVenta
			// 
			this->labelClienteVenta->AutoSize = true;
			this->labelClienteVenta->Location = System::Drawing::Point(879, 58);
			this->labelClienteVenta->Name = L"labelClienteVenta";
			this->labelClienteVenta->Size = System::Drawing::Size(38, 13);
			this->labelClienteVenta->TabIndex = 43;
			this->labelClienteVenta->Text = L"cliente";
			// 
			// labelVendedorVenta
			// 
			this->labelVendedorVenta->AutoSize = true;
			this->labelVendedorVenta->Location = System::Drawing::Point(893, 79);
			this->labelVendedorVenta->Name = L"labelVendedorVenta";
			this->labelVendedorVenta->Size = System::Drawing::Size(52, 13);
			this->labelVendedorVenta->TabIndex = 44;
			this->labelVendedorVenta->Text = L"vendedor";
			// 
			// labelEstado
			// 
			this->labelEstado->AutoSize = true;
			this->labelEstado->Location = System::Drawing::Point(880, 100);
			this->labelEstado->Name = L"labelEstado";
			this->labelEstado->Size = System::Drawing::Size(39, 13);
			this->labelEstado->TabIndex = 45;
			this->labelEstado->Text = L"estado";
			// 
			// labelTotalVentas
			// 
			this->labelTotalVentas->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelTotalVentas->AutoSize = true;
			this->labelTotalVentas->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTotalVentas->Location = System::Drawing::Point(877, 466);
			this->labelTotalVentas->Name = L"labelTotalVentas";
			this->labelTotalVentas->Size = System::Drawing::Size(41, 15);
			this->labelTotalVentas->TabIndex = 51;
			this->labelTotalVentas->Text = L"label8";
			// 
			// labelIVA
			// 
			this->labelIVA->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelIVA->AutoSize = true;
			this->labelIVA->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelIVA->Location = System::Drawing::Point(871, 447);
			this->labelIVA->Name = L"labelIVA";
			this->labelIVA->Size = System::Drawing::Size(41, 15);
			this->labelIVA->TabIndex = 50;
			this->labelIVA->Text = L"label8";
			// 
			// labelNeto
			// 
			this->labelNeto->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelNeto->AutoSize = true;
			this->labelNeto->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNeto->Location = System::Drawing::Point(900, 426);
			this->labelNeto->Name = L"labelNeto";
			this->labelNeto->Size = System::Drawing::Size(41, 15);
			this->labelNeto->TabIndex = 49;
			this->labelNeto->Text = L"label8";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(835, 466);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(43, 13);
			this->label12->TabIndex = 48;
			this->label12->Text = L"Total: $";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(837, 448);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 13);
			this->label13->TabIndex = 47;
			this->label13->Text = L"IVA: $";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(834, 427);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 13);
			this->label14->TabIndex = 46;
			this->label14->Text = L"Total Neto: $";
			// 
			// buttonVerDatos
			// 
			this->buttonVerDatos->Location = System::Drawing::Point(655, 91);
			this->buttonVerDatos->Name = L"buttonVerDatos";
			this->buttonVerDatos->Size = System::Drawing::Size(104, 35);
			this->buttonVerDatos->TabIndex = 52;
			this->buttonVerDatos->Text = L"Ver Datos";
			this->buttonVerDatos->UseVisualStyleBackColor = true;
			this->buttonVerDatos->Click += gcnew System::EventHandler(this, &VentanaVerVentas::buttonVerDatos_Click);
			// 
			// VentanaVerVentas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1337, 645);
			this->Controls->Add(this->buttonVerDatos);
			this->Controls->Add(this->labelTotalVentas);
			this->Controls->Add(this->labelIVA);
			this->Controls->Add(this->labelNeto);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->labelEstado);
			this->Controls->Add(this->labelVendedorVenta);
			this->Controls->Add(this->labelClienteVenta);
			this->Controls->Add(this->labelNumeroVenta);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->labelCotizado);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->labelCotizaciones);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->buttonCancelar);
			this->Controls->Add(this->buttonFacturar);
			this->Controls->Add(this->comboBoxEstado);
			this->Controls->Add(this->checkBoxEstado);
			this->Controls->Add(this->labelTotalVendido);
			this->Controls->Add(this->labelVentas);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->buttonLimpiar);
			this->Controls->Add(this->buttonFiltrar);
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
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaVerVentas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonCalendarioHasta_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonCalendarioDe_Click(System::Object^ sender, System::EventArgs^ e);
		Void checkBoxFecha_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		Void checkBoxCliente_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		Void checkBoxVendedor_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonFiltrar_Click(System::Object^ sender, System::EventArgs^ e);
		Void checkBoxEstado_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		Void buttonFacturar_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonVerDatos_Click(System::Object^ sender, System::EventArgs^ e);
};
}
