#pragma once

namespace NexaGest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaVerCompras
	/// </summary>
	public ref class VentanaVerCompras : public System::Windows::Forms::Form
	{
	public:
		VentanaVerCompras();
		void cargarElementos();

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~VentanaVerCompras()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Numero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Proveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Comprador;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Estado;
	private: System::Windows::Forms::Button^ buttonLimpiar;
	private: System::Windows::Forms::Button^ buttonFiltrar;





	private: System::Windows::Forms::ComboBox^ comboBoxComprador;

	private: System::Windows::Forms::CheckBox^ checkBoxComprador;
	private: System::Windows::Forms::ComboBox^ comboBoxProveedor;


	private: System::Windows::Forms::CheckBox^ checkBoxProveedor;
	private: System::Windows::Forms::MonthCalendar^ monthCalendarHasta;
	private: System::Windows::Forms::Button^ buttonCalendarioHasta;
	private: System::Windows::Forms::TextBox^ textBoxHasta;
	private: System::Windows::Forms::TextBox^ textBoxDe;
	private: System::Windows::Forms::CheckBox^ checkBoxFecha;
	private: System::Windows::Forms::Button^ buttonCalendarioDe;
	private: System::Windows::Forms::MonthCalendar^ monthCalendarDe;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
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
		int totalCompras;
		float totalComprado;
	private: System::Windows::Forms::Label^ labelTotalComprado;
	private: System::Windows::Forms::Label^ labelCompras;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ buttonVerDatos;
	private: System::Windows::Forms::Label^ labelTotalVentas;
	private: System::Windows::Forms::Label^ labelIVA;
	private: System::Windows::Forms::Label^ labelNeto;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ labelComprador;
	private: System::Windows::Forms::Label^ labelProveedor;
	private: System::Windows::Forms::Label^ labelNumeroCompra;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TotalColumna;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label6;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaVerCompras::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Numero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Proveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Comprador = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
			this->buttonFiltrar = (gcnew System::Windows::Forms::Button());
			this->comboBoxComprador = (gcnew System::Windows::Forms::ComboBox());
			this->checkBoxComprador = (gcnew System::Windows::Forms::CheckBox());
			this->comboBoxProveedor = (gcnew System::Windows::Forms::ComboBox());
			this->checkBoxProveedor = (gcnew System::Windows::Forms::CheckBox());
			this->monthCalendarHasta = (gcnew System::Windows::Forms::MonthCalendar());
			this->buttonCalendarioHasta = (gcnew System::Windows::Forms::Button());
			this->textBoxHasta = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDe = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxFecha = (gcnew System::Windows::Forms::CheckBox());
			this->buttonCalendarioDe = (gcnew System::Windows::Forms::Button());
			this->monthCalendarDe = (gcnew System::Windows::Forms::MonthCalendar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelTotalComprado = (gcnew System::Windows::Forms::Label());
			this->labelCompras = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonVerDatos = (gcnew System::Windows::Forms::Button());
			this->labelTotalVentas = (gcnew System::Windows::Forms::Label());
			this->labelIVA = (gcnew System::Windows::Forms::Label());
			this->labelNeto = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->labelComprador = (gcnew System::Windows::Forms::Label());
			this->labelProveedor = (gcnew System::Windows::Forms::Label());
			this->labelNumeroCompra = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TotalColumna = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Numero,
					this->Proveedor, this->Fecha, this->Total, this->Comprador, this->Estado
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 143);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(755, 414);
			this->dataGridView1->TabIndex = 1;
			// 
			// Numero
			// 
			this->Numero->HeaderText = L"Numero";
			this->Numero->Name = L"Numero";
			// 
			// Proveedor
			// 
			this->Proveedor->HeaderText = L"Proveedor";
			this->Proveedor->Name = L"Proveedor";
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
			// Comprador
			// 
			this->Comprador->HeaderText = L"Comprador";
			this->Comprador->Name = L"Comprador";
			// 
			// Estado
			// 
			this->Estado->HeaderText = L"Estado";
			this->Estado->Name = L"Estado";
			// 
			// buttonLimpiar
			// 
			this->buttonLimpiar->Location = System::Drawing::Point(130, 91);
			this->buttonLimpiar->Name = L"buttonLimpiar";
			this->buttonLimpiar->Size = System::Drawing::Size(104, 31);
			this->buttonLimpiar->TabIndex = 44;
			this->buttonLimpiar->Text = L"Limpiar Filtro";
			this->buttonLimpiar->UseVisualStyleBackColor = true;
			this->buttonLimpiar->Click += gcnew System::EventHandler(this, &VentanaVerCompras::buttonLimpiar_Click);
			// 
			// buttonFiltrar
			// 
			this->buttonFiltrar->Location = System::Drawing::Point(20, 91);
			this->buttonFiltrar->Name = L"buttonFiltrar";
			this->buttonFiltrar->Size = System::Drawing::Size(104, 31);
			this->buttonFiltrar->TabIndex = 43;
			this->buttonFiltrar->Text = L"Filtrar";
			this->buttonFiltrar->UseVisualStyleBackColor = true;
			this->buttonFiltrar->Click += gcnew System::EventHandler(this, &VentanaVerCompras::buttonFiltrar_Click);
			// 
			// comboBoxComprador
			// 
			this->comboBoxComprador->Enabled = false;
			this->comboBoxComprador->FormattingEnabled = true;
			this->comboBoxComprador->Location = System::Drawing::Point(477, 57);
			this->comboBoxComprador->Name = L"comboBoxComprador";
			this->comboBoxComprador->Size = System::Drawing::Size(178, 21);
			this->comboBoxComprador->TabIndex = 37;
			// 
			// checkBoxComprador
			// 
			this->checkBoxComprador->AutoSize = true;
			this->checkBoxComprador->Location = System::Drawing::Point(400, 59);
			this->checkBoxComprador->Name = L"checkBoxComprador";
			this->checkBoxComprador->Size = System::Drawing::Size(80, 17);
			this->checkBoxComprador->TabIndex = 36;
			this->checkBoxComprador->Text = L"Comprador:";
			this->checkBoxComprador->UseVisualStyleBackColor = true;
			this->checkBoxComprador->CheckedChanged += gcnew System::EventHandler(this, &VentanaVerCompras::checkBoxComprador_CheckedChanged);
			// 
			// comboBoxProveedor
			// 
			this->comboBoxProveedor->Enabled = false;
			this->comboBoxProveedor->FormattingEnabled = true;
			this->comboBoxProveedor->Location = System::Drawing::Point(477, 30);
			this->comboBoxProveedor->Name = L"comboBoxProveedor";
			this->comboBoxProveedor->Size = System::Drawing::Size(178, 21);
			this->comboBoxProveedor->TabIndex = 35;
			// 
			// checkBoxProveedor
			// 
			this->checkBoxProveedor->AutoSize = true;
			this->checkBoxProveedor->Location = System::Drawing::Point(400, 32);
			this->checkBoxProveedor->Name = L"checkBoxProveedor";
			this->checkBoxProveedor->Size = System::Drawing::Size(78, 17);
			this->checkBoxProveedor->TabIndex = 34;
			this->checkBoxProveedor->Text = L"Proveedor:";
			this->checkBoxProveedor->UseVisualStyleBackColor = true;
			this->checkBoxProveedor->CheckedChanged += gcnew System::EventHandler(this, &VentanaVerCompras::checkBoxProveedor_CheckedChanged);
			// 
			// monthCalendarHasta
			// 
			this->monthCalendarHasta->Location = System::Drawing::Point(307, 55);
			this->monthCalendarHasta->MaxSelectionCount = 1;
			this->monthCalendarHasta->Name = L"monthCalendarHasta";
			this->monthCalendarHasta->TabIndex = 33;
			this->monthCalendarHasta->Visible = false;
			// 
			// buttonCalendarioHasta
			// 
			this->buttonCalendarioHasta->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCalendarioHasta.BackgroundImage")));
			this->buttonCalendarioHasta->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonCalendarioHasta->Enabled = false;
			this->buttonCalendarioHasta->Location = System::Drawing::Point(281, 55);
			this->buttonCalendarioHasta->Name = L"buttonCalendarioHasta";
			this->buttonCalendarioHasta->Size = System::Drawing::Size(25, 23);
			this->buttonCalendarioHasta->TabIndex = 32;
			this->buttonCalendarioHasta->UseVisualStyleBackColor = true;
			this->buttonCalendarioHasta->Click += gcnew System::EventHandler(this, &VentanaVerCompras::buttonCalendarioHasta_Click);
			// 
			// textBoxHasta
			// 
			this->textBoxHasta->Enabled = false;
			this->textBoxHasta->Location = System::Drawing::Point(175, 56);
			this->textBoxHasta->Name = L"textBoxHasta";
			this->textBoxHasta->Size = System::Drawing::Size(100, 20);
			this->textBoxHasta->TabIndex = 31;
			// 
			// textBoxDe
			// 
			this->textBoxDe->Enabled = false;
			this->textBoxDe->Location = System::Drawing::Point(175, 31);
			this->textBoxDe->Name = L"textBoxDe";
			this->textBoxDe->Size = System::Drawing::Size(100, 20);
			this->textBoxDe->TabIndex = 30;
			// 
			// checkBoxFecha
			// 
			this->checkBoxFecha->AutoSize = true;
			this->checkBoxFecha->Location = System::Drawing::Point(81, 34);
			this->checkBoxFecha->Name = L"checkBoxFecha";
			this->checkBoxFecha->Size = System::Drawing::Size(64, 17);
			this->checkBoxFecha->TabIndex = 29;
			this->checkBoxFecha->Text = L"Fechas:";
			this->checkBoxFecha->UseVisualStyleBackColor = true;
			this->checkBoxFecha->CheckedChanged += gcnew System::EventHandler(this, &VentanaVerCompras::checkBoxFecha_CheckedChanged);
			// 
			// buttonCalendarioDe
			// 
			this->buttonCalendarioDe->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCalendarioDe.BackgroundImage")));
			this->buttonCalendarioDe->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonCalendarioDe->Enabled = false;
			this->buttonCalendarioDe->Location = System::Drawing::Point(281, 31);
			this->buttonCalendarioDe->Name = L"buttonCalendarioDe";
			this->buttonCalendarioDe->Size = System::Drawing::Size(25, 22);
			this->buttonCalendarioDe->TabIndex = 28;
			this->buttonCalendarioDe->UseVisualStyleBackColor = true;
			this->buttonCalendarioDe->Click += gcnew System::EventHandler(this, &VentanaVerCompras::buttonCalendarioDe_Click);
			// 
			// monthCalendarDe
			// 
			this->monthCalendarDe->Location = System::Drawing::Point(307, 31);
			this->monthCalendarDe->MaxSelectionCount = 1;
			this->monthCalendarDe->Name = L"monthCalendarDe";
			this->monthCalendarDe->TabIndex = 27;
			this->monthCalendarDe->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(131, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Hasta:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(144, 36);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 25;
			this->label3->Text = L"De:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(90, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Filtros:";
			// 
			// labelTotalComprado
			// 
			this->labelTotalComprado->AutoSize = true;
			this->labelTotalComprado->Location = System::Drawing::Point(711, 575);
			this->labelTotalComprado->Name = L"labelTotalComprado";
			this->labelTotalComprado->Size = System::Drawing::Size(35, 13);
			this->labelTotalComprado->TabIndex = 48;
			this->labelTotalComprado->Text = L"label8";
			// 
			// labelCompras
			// 
			this->labelCompras->AutoSize = true;
			this->labelCompras->Location = System::Drawing::Point(581, 575);
			this->labelCompras->Name = L"labelCompras";
			this->labelCompras->Size = System::Drawing::Size(35, 13);
			this->labelCompras->TabIndex = 47;
			this->labelCompras->Text = L"label8";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(510, 575);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 13);
			this->label7->TabIndex = 46;
			this->label7->Text = L"Total Compras:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(619, 575);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 13);
			this->label6->TabIndex = 45;
			this->label6->Text = L"Total Comprado: $";
			// 
			// buttonVerDatos
			// 
			this->buttonVerDatos->Location = System::Drawing::Point(648, 97);
			this->buttonVerDatos->Name = L"buttonVerDatos";
			this->buttonVerDatos->Size = System::Drawing::Size(104, 35);
			this->buttonVerDatos->TabIndex = 69;
			this->buttonVerDatos->Text = L"Ver Datos";
			this->buttonVerDatos->UseVisualStyleBackColor = true;
			this->buttonVerDatos->Click += gcnew System::EventHandler(this, &VentanaVerCompras::buttonVerDatos_Click);
			// 
			// labelTotalVentas
			// 
			this->labelTotalVentas->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelTotalVentas->AutoSize = true;
			this->labelTotalVentas->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTotalVentas->Location = System::Drawing::Point(870, 472);
			this->labelTotalVentas->Name = L"labelTotalVentas";
			this->labelTotalVentas->Size = System::Drawing::Size(41, 15);
			this->labelTotalVentas->TabIndex = 68;
			this->labelTotalVentas->Text = L"label8";
			// 
			// labelIVA
			// 
			this->labelIVA->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelIVA->AutoSize = true;
			this->labelIVA->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelIVA->Location = System::Drawing::Point(864, 453);
			this->labelIVA->Name = L"labelIVA";
			this->labelIVA->Size = System::Drawing::Size(41, 15);
			this->labelIVA->TabIndex = 67;
			this->labelIVA->Text = L"label8";
			// 
			// labelNeto
			// 
			this->labelNeto->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->labelNeto->AutoSize = true;
			this->labelNeto->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNeto->Location = System::Drawing::Point(893, 432);
			this->labelNeto->Name = L"labelNeto";
			this->labelNeto->Size = System::Drawing::Size(41, 15);
			this->labelNeto->TabIndex = 66;
			this->labelNeto->Text = L"label8";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(828, 472);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(43, 13);
			this->label12->TabIndex = 65;
			this->label12->Text = L"Total: $";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(830, 454);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 13);
			this->label13->TabIndex = 64;
			this->label13->Text = L"IVA: $";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(827, 433);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(69, 13);
			this->label14->TabIndex = 63;
			this->label14->Text = L"Total Neto: $";
			// 
			// labelComprador
			// 
			this->labelComprador->AutoSize = true;
			this->labelComprador->Location = System::Drawing::Point(886, 85);
			this->labelComprador->Name = L"labelComprador";
			this->labelComprador->Size = System::Drawing::Size(52, 13);
			this->labelComprador->TabIndex = 61;
			this->labelComprador->Text = L"vendedor";
			// 
			// labelProveedor
			// 
			this->labelProveedor->AutoSize = true;
			this->labelProveedor->Location = System::Drawing::Point(884, 64);
			this->labelProveedor->Name = L"labelProveedor";
			this->labelProveedor->Size = System::Drawing::Size(38, 13);
			this->labelProveedor->TabIndex = 60;
			this->labelProveedor->Text = L"cliente";
			// 
			// labelNumeroCompra
			// 
			this->labelNumeroCompra->AutoSize = true;
			this->labelNumeroCompra->Location = System::Drawing::Point(923, 43);
			this->labelNumeroCompra->Name = L"labelNumeroCompra";
			this->labelNumeroCompra->Size = System::Drawing::Size(42, 13);
			this->labelNumeroCompra->TabIndex = 59;
			this->labelNumeroCompra->Text = L"numero";
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
			this->dataGridView3->Location = System::Drawing::Point(827, 136);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->Size = System::Drawing::Size(475, 269);
			this->dataGridView3->TabIndex = 58;
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
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(824, 85);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 13);
			this->label10->TabIndex = 56;
			this->label10->Text = L"Comprador:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(824, 64);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 13);
			this->label9->TabIndex = 55;
			this->label9->Text = L"Proveedor:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(824, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 13);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Numero de Compra:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(782, 20);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(10, 619);
			this->dataGridView2->TabIndex = 53;
			// 
			// VentanaVerCompras
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
			this->Controls->Add(this->labelComprador);
			this->Controls->Add(this->labelProveedor);
			this->Controls->Add(this->labelNumeroCompra);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->labelTotalComprado);
			this->Controls->Add(this->labelCompras);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->buttonLimpiar);
			this->Controls->Add(this->buttonFiltrar);
			this->Controls->Add(this->comboBoxComprador);
			this->Controls->Add(this->checkBoxComprador);
			this->Controls->Add(this->comboBoxProveedor);
			this->Controls->Add(this->checkBoxProveedor);
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
			this->Name = L"VentanaVerCompras";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaVerCompras";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonFiltrar_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonCalendarioDe_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonCalendarioHasta_Click(System::Object^ sender, System::EventArgs^ e);
		Void checkBoxFecha_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		Void checkBoxProveedor_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		Void checkBoxComprador_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		Void buttonVerDatos_Click(System::Object^ sender, System::EventArgs^ e);
};
}
