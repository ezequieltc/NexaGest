#pragma once
#include "VentanaItems.h"
#include "VentanaInventario.h"
#include "MenuVentas.h"
#include "MenuNuevoUsuario.h"
#include "MenuCrearCliente.h"
#include "VentanaVerVentas.h"
#include "MenuCrearProveedor.h"
#include "MenuCompras.h"
#include "VentanaVerCompras.h"
#include "Usuarios.h"


namespace NexaGest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Resumen de MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{
	public:
		MenuPrincipal();


	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelBienvenido;
	private: System::Windows::Forms::Button^ buttonIngresarItem;
	private: System::Windows::Forms::Button^ buttonCompra;
	private: System::Windows::Forms::Button^ buttonVenta;



	private: System::Windows::Forms::Button^ button4;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		VentanaItems^ ventanaItems = nullptr;
		MenuVentas^ menuVentas = nullptr;
		MenuNuevoUsuario^ menuUsuario = nullptr;
		MenuCrearCliente^ menuCrearCliente = nullptr;
		VentanaVerVentas^ ventanaVerVentas = nullptr;
		MenuCrearProveedor^ crearProveedor = nullptr;
		MenuCompras^ menuCompras = nullptr;
		VentanaVerCompras^ ventanaVerCompras = nullptr;
	private: System::Windows::Forms::Label^ labelUsuario;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelTipo;
	private: System::Windows::Forms::Button^ buttonAgregarUsuario;
	private: System::Windows::Forms::Button^ buttonCerrarSesion;
	private: System::Windows::Forms::Button^ buttonCrearCliente;
	private: System::Windows::Forms::Button^ buttonCrearProveedor;
	private: System::Windows::Forms::Button^ buttonVerVentas;
	private: System::Windows::Forms::Button^ buttonVerCompras;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

		   VentanaInventario^ ventanaInventario = nullptr;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuPrincipal::typeid));
			this->labelBienvenido = (gcnew System::Windows::Forms::Label());
			this->buttonIngresarItem = (gcnew System::Windows::Forms::Button());
			this->buttonCompra = (gcnew System::Windows::Forms::Button());
			this->buttonVenta = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->labelUsuario = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelTipo = (gcnew System::Windows::Forms::Label());
			this->buttonAgregarUsuario = (gcnew System::Windows::Forms::Button());
			this->buttonCerrarSesion = (gcnew System::Windows::Forms::Button());
			this->buttonCrearCliente = (gcnew System::Windows::Forms::Button());
			this->buttonCrearProveedor = (gcnew System::Windows::Forms::Button());
			this->buttonVerVentas = (gcnew System::Windows::Forms::Button());
			this->buttonVerCompras = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelBienvenido
			// 
			this->labelBienvenido->AutoSize = true;
			this->labelBienvenido->Dock = System::Windows::Forms::DockStyle::Right;
			this->labelBienvenido->Location = System::Drawing::Point(1020, 0);
			this->labelBienvenido->Name = L"labelBienvenido";
			this->labelBienvenido->Size = System::Drawing::Size(0, 13);
			this->labelBienvenido->TabIndex = 0;
			// 
			// buttonIngresarItem
			// 
			this->buttonIngresarItem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonIngresarItem->BackColor = System::Drawing::Color::SandyBrown;
			this->buttonIngresarItem->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonIngresarItem.BackgroundImage")));
			this->buttonIngresarItem->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonIngresarItem->Enabled = false;
			this->buttonIngresarItem->FlatAppearance->BorderSize = 2;
			this->buttonIngresarItem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonIngresarItem->Location = System::Drawing::Point(299, 352);
			this->buttonIngresarItem->Name = L"buttonIngresarItem";
			this->buttonIngresarItem->Size = System::Drawing::Size(100, 94);
			this->buttonIngresarItem->TabIndex = 1;
			this->buttonIngresarItem->UseVisualStyleBackColor = false;
			this->buttonIngresarItem->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonIngresarItem_Click);
			// 
			// buttonCompra
			// 
			this->buttonCompra->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonCompra->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCompra.BackgroundImage")));
			this->buttonCompra->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonCompra->Enabled = false;
			this->buttonCompra->FlatAppearance->BorderSize = 2;
			this->buttonCompra->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCompra->Location = System::Drawing::Point(609, 352);
			this->buttonCompra->Name = L"buttonCompra";
			this->buttonCompra->Size = System::Drawing::Size(100, 94);
			this->buttonCompra->TabIndex = 2;
			this->buttonCompra->UseVisualStyleBackColor = true;
			this->buttonCompra->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonCompra_Click);
			// 
			// buttonVenta
			// 
			this->buttonVenta->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonVenta->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonVenta.BackgroundImage")));
			this->buttonVenta->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonVenta->Enabled = false;
			this->buttonVenta->FlatAppearance->BorderSize = 2;
			this->buttonVenta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonVenta->Location = System::Drawing::Point(455, 352);
			this->buttonVenta->Name = L"buttonVenta";
			this->buttonVenta->Size = System::Drawing::Size(100, 94);
			this->buttonVenta->TabIndex = 3;
			this->buttonVenta->UseVisualStyleBackColor = true;
			this->buttonVenta->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonVenta_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(299, 483);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 94);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MenuPrincipal::botonInventario);
			// 
			// labelUsuario
			// 
			this->labelUsuario->AutoSize = true;
			this->labelUsuario->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsuario->Location = System::Drawing::Point(856, 9);
			this->labelUsuario->Name = L"labelUsuario";
			this->labelUsuario->Size = System::Drawing::Size(41, 15);
			this->labelUsuario->TabIndex = 5;
			this->labelUsuario->Text = L"label1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(792, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 15);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Bievenido";
			// 
			// labelTipo
			// 
			this->labelTipo->AutoSize = true;
			this->labelTipo->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTipo->Location = System::Drawing::Point(792, 28);
			this->labelTipo->Name = L"labelTipo";
			this->labelTipo->Size = System::Drawing::Size(40, 14);
			this->labelTipo->TabIndex = 7;
			this->labelTipo->Text = L"label2";
			// 
			// buttonAgregarUsuario
			// 
			this->buttonAgregarUsuario->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonAgregarUsuario->BackColor = System::Drawing::Color::SandyBrown;
			this->buttonAgregarUsuario->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonAgregarUsuario.BackgroundImage")));
			this->buttonAgregarUsuario->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonAgregarUsuario->Enabled = false;
			this->buttonAgregarUsuario->FlatAppearance->BorderSize = 2;
			this->buttonAgregarUsuario->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAgregarUsuario->Location = System::Drawing::Point(299, 221);
			this->buttonAgregarUsuario->Name = L"buttonAgregarUsuario";
			this->buttonAgregarUsuario->Size = System::Drawing::Size(100, 94);
			this->buttonAgregarUsuario->TabIndex = 8;
			this->buttonAgregarUsuario->UseVisualStyleBackColor = false;
			this->buttonAgregarUsuario->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonAgregarUsuario_Click);
			// 
			// buttonCerrarSesion
			// 
			this->buttonCerrarSesion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonCerrarSesion->BackColor = System::Drawing::Color::SandyBrown;
			this->buttonCerrarSesion->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonCerrarSesion->FlatAppearance->BorderSize = 2;
			this->buttonCerrarSesion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCerrarSesion->Location = System::Drawing::Point(797, 49);
			this->buttonCerrarSesion->Name = L"buttonCerrarSesion";
			this->buttonCerrarSesion->Size = System::Drawing::Size(151, 34);
			this->buttonCerrarSesion->TabIndex = 9;
			this->buttonCerrarSesion->Text = L"Cerrar Sesion";
			this->buttonCerrarSesion->UseVisualStyleBackColor = false;
			this->buttonCerrarSesion->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonCerrarSesion_Click);
			// 
			// buttonCrearCliente
			// 
			this->buttonCrearCliente->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonCrearCliente->BackColor = System::Drawing::Color::SandyBrown;
			this->buttonCrearCliente->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCrearCliente.BackgroundImage")));
			this->buttonCrearCliente->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonCrearCliente->Enabled = false;
			this->buttonCrearCliente->FlatAppearance->BorderSize = 2;
			this->buttonCrearCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCrearCliente->Location = System::Drawing::Point(455, 221);
			this->buttonCrearCliente->Name = L"buttonCrearCliente";
			this->buttonCrearCliente->Size = System::Drawing::Size(100, 94);
			this->buttonCrearCliente->TabIndex = 10;
			this->buttonCrearCliente->UseVisualStyleBackColor = false;
			this->buttonCrearCliente->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonCrearCliente_Click);
			// 
			// buttonCrearProveedor
			// 
			this->buttonCrearProveedor->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonCrearProveedor->BackColor = System::Drawing::Color::SandyBrown;
			this->buttonCrearProveedor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonCrearProveedor.BackgroundImage")));
			this->buttonCrearProveedor->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonCrearProveedor->Enabled = false;
			this->buttonCrearProveedor->FlatAppearance->BorderSize = 2;
			this->buttonCrearProveedor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCrearProveedor->Location = System::Drawing::Point(609, 221);
			this->buttonCrearProveedor->Name = L"buttonCrearProveedor";
			this->buttonCrearProveedor->Size = System::Drawing::Size(100, 94);
			this->buttonCrearProveedor->TabIndex = 11;
			this->buttonCrearProveedor->UseVisualStyleBackColor = false;
			this->buttonCrearProveedor->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonCrearProveedor_Click);
			// 
			// buttonVerVentas
			// 
			this->buttonVerVentas->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonVerVentas->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonVerVentas.BackgroundImage")));
			this->buttonVerVentas->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonVerVentas->Enabled = false;
			this->buttonVerVentas->FlatAppearance->BorderSize = 2;
			this->buttonVerVentas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonVerVentas->Location = System::Drawing::Point(455, 483);
			this->buttonVerVentas->Name = L"buttonVerVentas";
			this->buttonVerVentas->Size = System::Drawing::Size(100, 94);
			this->buttonVerVentas->TabIndex = 12;
			this->buttonVerVentas->UseVisualStyleBackColor = true;
			this->buttonVerVentas->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonVerVentas_Click);
			// 
			// buttonVerCompras
			// 
			this->buttonVerCompras->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonVerCompras->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonVerCompras.BackgroundImage")));
			this->buttonVerCompras->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->buttonVerCompras->Enabled = false;
			this->buttonVerCompras->FlatAppearance->BorderSize = 2;
			this->buttonVerCompras->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonVerCompras->Location = System::Drawing::Point(609, 483);
			this->buttonVerCompras->Name = L"buttonVerCompras";
			this->buttonVerCompras->Size = System::Drawing::Size(100, 94);
			this->buttonVerCompras->TabIndex = 13;
			this->buttonVerCompras->UseVisualStyleBackColor = true;
			this->buttonVerCompras->Click += gcnew System::EventHandler(this, &MenuPrincipal::buttonVerCompras_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(286, 318);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 15);
			this->label2->TabIndex = 14;
			this->label2->Text = L"INGRESAR USUARIO";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(444, 318);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 15);
			this->label3->TabIndex = 15;
			this->label3->Text = L"INGRESAR CLIENTE";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(585, 318);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 15);
			this->label4->TabIndex = 16;
			this->label4->Text = L"INGRESAR PROVEEDOR";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(297, 449);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 15);
			this->label5->TabIndex = 17;
			this->label5->Text = L"INGRESAR ITEM";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(307, 580);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 15);
			this->label6->TabIndex = 18;
			this->label6->Text = L"INVENTARIO";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(444, 449);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 15);
			this->label7->TabIndex = 19;
			this->label7->Text = L"INGRESAR VENTA";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(439, 580);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(133, 15);
			this->label8->TabIndex = 20;
			this->label8->Text = L"CONSULTAR VENTAS";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(602, 449);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(126, 15);
			this->label9->TabIndex = 21;
			this->label9->Text = L"INGRESAR COMPRA";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Roboto", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(585, 580);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(146, 15);
			this->label10->TabIndex = 22;
			this->label10->Text = L"CONSULTAR COMPRAS";
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SandyBrown;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1020, 768);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonVerCompras);
			this->Controls->Add(this->buttonVerVentas);
			this->Controls->Add(this->buttonCrearProveedor);
			this->Controls->Add(this->buttonCrearCliente);
			this->Controls->Add(this->buttonCerrarSesion);
			this->Controls->Add(this->buttonAgregarUsuario);
			this->Controls->Add(this->labelTipo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelUsuario);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->buttonVenta);
			this->Controls->Add(this->buttonCompra);
			this->Controls->Add(this->buttonIngresarItem);
			this->Controls->Add(this->labelBienvenido);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Roboto", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MenuPrincipal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu Principal";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		Void buttonIngresarItem_Click(Object^ sender, EventArgs^ e);
		Void MenuCierra(Object^ sender, FormClosedEventArgs^ e);
		Void botonInventario(System::Object^ sender, System::EventArgs^ e);
		Void buttonAgregarUsuario_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonCerrarSesion_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonCrearCliente_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonVerVentas_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonCrearProveedor_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonCompra_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonVerCompras_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonVenta_Click(System::Object^ sender, System::EventArgs^ e);
};
}
