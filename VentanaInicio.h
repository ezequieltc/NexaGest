#pragma once
#include "MenuPrincipal.h"

namespace NexaGest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de VentanaInicio
	/// </summary>
	public ref class VentanaInicio : public System::Windows::Forms::Form
	{
	public:
		VentanaInicio(void)
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
		~VentanaInicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonIngresar;
	private: System::Windows::Forms::Button^ buttonCancelar;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

		   bool _mostarContrasena = true;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VentanaInicio::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonIngresar = (gcnew System::Windows::Forms::Button());
			this->buttonCancelar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 291);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(33, 74);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(171, 141);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gray;
			this->panel2->Location = System::Drawing::Point(314, 102);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(384, 1);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gray;
			this->panel3->Location = System::Drawing::Point(314, 181);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(384, 1);
			this->panel3->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::DimGray;
			this->textBox1->Location = System::Drawing::Point(314, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(384, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Usuario...";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &VentanaInicio::cambiarTextoUsuario);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::DimGray;
			this->textBox2->Location = System::Drawing::Point(314, 155);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(384, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"Contraseña...";
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &VentanaInicio::cambiarTextoContrasena);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DimGray;
			this->label1->Location = System::Drawing::Point(431, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"INICIAR SESION";
			// 
			// buttonIngresar
			// 
			this->buttonIngresar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->buttonIngresar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonIngresar->ForeColor = System::Drawing::Color::DimGray;
			this->buttonIngresar->Location = System::Drawing::Point(298, 222);
			this->buttonIngresar->Name = L"buttonIngresar";
			this->buttonIngresar->Size = System::Drawing::Size(204, 38);
			this->buttonIngresar->TabIndex = 6;
			this->buttonIngresar->Text = L"INGRESAR";
			this->buttonIngresar->UseVisualStyleBackColor = true;
			this->buttonIngresar->Click += gcnew System::EventHandler(this, &VentanaInicio::buttonIngresar_Click);
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->buttonCancelar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancelar->ForeColor = System::Drawing::Color::DimGray;
			this->buttonCancelar->Location = System::Drawing::Point(508, 222);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(204, 38);
			this->buttonCancelar->TabIndex = 7;
			this->buttonCancelar->Text = L"CANCELAR";
			this->buttonCancelar->UseVisualStyleBackColor = true;
			this->buttonCancelar->Click += gcnew System::EventHandler(this, &VentanaInicio::buttonCancelar_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(704, 161);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(20, 14);
			this->button1->TabIndex = 8;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &VentanaInicio::MostrarContrasena);
			// 
			// VentanaInicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(764, 291);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->buttonCancelar);
			this->Controls->Add(this->buttonIngresar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"VentanaInicio";
			this->Opacity = 0.95;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VentanaInicio";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void cambiarTextoUsuario(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	textBox1->Text = "";
}
private: System::Void cambiarTextoContrasena(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		   textBox2->Text = "";
	   }
private: System::Void MostrarContrasena(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (_mostarContrasena == false) {
		button1->BackgroundImage = Image::FromFile("./resources/images/contrasenaMostrar.png");
		textBox2->PasswordChar = L'*';
		_mostarContrasena = true;
	}
	else {
		button1->BackgroundImage = Image::FromFile("./resources/images/contrasenaNoMostrar.png");
		textBox2->PasswordChar = L'\0';
		_mostarContrasena = false;
	}

}
private: System::Void buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void buttonIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
	MenuPrincipal^ menuPrincipal = gcnew MenuPrincipal();
	menuPrincipal->Show();
	Hide();
}
};
}
