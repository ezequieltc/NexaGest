#pragma once
#include "VentanaItems.h"
#include "VentanaInventario.h"
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
		MenuPrincipal(void)
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


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		VentanaItems^ ventanaItems = nullptr;
		VentanaInventario^ ventanaInventario = nullptr;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuPrincipal::typeid));
			this->labelBienvenido = (gcnew System::Windows::Forms::Label());
			this->buttonIngresarItem = (gcnew System::Windows::Forms::Button());
			this->buttonCompra = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
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
			this->buttonIngresarItem->FlatAppearance->BorderSize = 2;
			this->buttonIngresarItem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonIngresarItem->Location = System::Drawing::Point(274, 314);
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
			this->buttonCompra->FlatAppearance->BorderSize = 2;
			this->buttonCompra->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCompra->Location = System::Drawing::Point(390, 314);
			this->buttonCompra->Name = L"buttonCompra";
			this->buttonCompra->Size = System::Drawing::Size(100, 94);
			this->buttonCompra->TabIndex = 2;
			this->buttonCompra->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(507, 314);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 94);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
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
			this->button4->Location = System::Drawing::Point(623, 314);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 94);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MenuPrincipal::botonInventario);
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SandyBrown;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1020, 768);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
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
};
}
