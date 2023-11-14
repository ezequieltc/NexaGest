#pragma once

namespace NexaGest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuCrearProveedor
	/// </summary>
	public ref class MenuCrearProveedor : public System::Windows::Forms::Form
	{
	public:
		MenuCrearProveedor(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MenuCrearProveedor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxEmail;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxCuit;
	private: System::Windows::Forms::TextBox^ textBoxContacto;
	private: System::Windows::Forms::TextBox^ textBoxDireccion;
	private: System::Windows::Forms::TextBox^ textBoxTelefono;
	private: System::Windows::Forms::TextBox^ textBoxRubro;
	private: System::Windows::Forms::TextBox^ textBoxEmpresa;
	private: System::Windows::Forms::Button^ buttonCancelar;
	private: System::Windows::Forms::Button^ buttonAgregar;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ checkBoxConsumidorFinal;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxCuit = (gcnew System::Windows::Forms::TextBox());
			this->textBoxContacto = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDireccion = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTelefono = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRubro = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmpresa = (gcnew System::Windows::Forms::TextBox());
			this->buttonCancelar = (gcnew System::Windows::Forms::Button());
			this->buttonAgregar = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBoxConsumidorFinal = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxEmail
			// 
			this->textBoxEmail->Location = System::Drawing::Point(79, 170);
			this->textBoxEmail->Name = L"textBoxEmail";
			this->textBoxEmail->Size = System::Drawing::Size(216, 20);
			this->textBoxEmail->TabIndex = 60;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 61;
			this->label6->Text = L"Email";
			// 
			// textBoxCuit
			// 
			this->textBoxCuit->Location = System::Drawing::Point(79, 198);
			this->textBoxCuit->Name = L"textBoxCuit";
			this->textBoxCuit->Size = System::Drawing::Size(216, 20);
			this->textBoxCuit->TabIndex = 62;
			// 
			// textBoxContacto
			// 
			this->textBoxContacto->Location = System::Drawing::Point(79, 140);
			this->textBoxContacto->Name = L"textBoxContacto";
			this->textBoxContacto->Size = System::Drawing::Size(216, 20);
			this->textBoxContacto->TabIndex = 59;
			// 
			// textBoxDireccion
			// 
			this->textBoxDireccion->Location = System::Drawing::Point(79, 110);
			this->textBoxDireccion->Name = L"textBoxDireccion";
			this->textBoxDireccion->Size = System::Drawing::Size(216, 20);
			this->textBoxDireccion->TabIndex = 58;
			// 
			// textBoxTelefono
			// 
			this->textBoxTelefono->Location = System::Drawing::Point(79, 82);
			this->textBoxTelefono->Name = L"textBoxTelefono";
			this->textBoxTelefono->Size = System::Drawing::Size(216, 20);
			this->textBoxTelefono->TabIndex = 57;
			// 
			// textBoxRubro
			// 
			this->textBoxRubro->Location = System::Drawing::Point(79, 51);
			this->textBoxRubro->Name = L"textBoxRubro";
			this->textBoxRubro->Size = System::Drawing::Size(216, 20);
			this->textBoxRubro->TabIndex = 56;
			// 
			// textBoxEmpresa
			// 
			this->textBoxEmpresa->Location = System::Drawing::Point(80, 23);
			this->textBoxEmpresa->Name = L"textBoxEmpresa";
			this->textBoxEmpresa->Size = System::Drawing::Size(216, 20);
			this->textBoxEmpresa->TabIndex = 55;
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->Location = System::Drawing::Point(181, 292);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(107, 41);
			this->buttonCancelar->TabIndex = 54;
			this->buttonCancelar->Text = L"Cancelar";
			this->buttonCancelar->UseVisualStyleBackColor = true;
			this->buttonCancelar->Click += gcnew System::EventHandler(this, &MenuCrearProveedor::buttonCancelar_Click);
			// 
			// buttonAgregar
			// 
			this->buttonAgregar->Location = System::Drawing::Point(44, 292);
			this->buttonAgregar->Name = L"buttonAgregar";
			this->buttonAgregar->Size = System::Drawing::Size(107, 41);
			this->buttonAgregar->TabIndex = 53;
			this->buttonAgregar->Text = L"Agregar";
			this->buttonAgregar->UseVisualStyleBackColor = true;
			this->buttonAgregar->Click += gcnew System::EventHandler(this, &MenuCrearProveedor::buttonAgregar_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 201);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 52;
			this->label7->Text = L"CUIT:";
			// 
			// checkBoxConsumidorFinal
			// 
			this->checkBoxConsumidorFinal->AutoSize = true;
			this->checkBoxConsumidorFinal->Location = System::Drawing::Point(28, 237);
			this->checkBoxConsumidorFinal->Name = L"checkBoxConsumidorFinal";
			this->checkBoxConsumidorFinal->Size = System::Drawing::Size(106, 17);
			this->checkBoxConsumidorFinal->TabIndex = 51;
			this->checkBoxConsumidorFinal->Text = L"Consumidor Final";
			this->checkBoxConsumidorFinal->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 13);
			this->label5->TabIndex = 50;
			this->label5->Text = L"Contacto";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 49;
			this->label4->Text = L"Direcci�n:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 48;
			this->label3->Text = L"Telefono:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 47;
			this->label2->Text = L"Rubro:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 46;
			this->label1->Text = L"Empresa";
			// 
			// MenuCrearProveedor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(321, 356);
			this->Controls->Add(this->textBoxEmail);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxCuit);
			this->Controls->Add(this->textBoxContacto);
			this->Controls->Add(this->textBoxDireccion);
			this->Controls->Add(this->textBoxTelefono);
			this->Controls->Add(this->textBoxRubro);
			this->Controls->Add(this->textBoxEmpresa);
			this->Controls->Add(this->buttonCancelar);
			this->Controls->Add(this->buttonAgregar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->checkBoxConsumidorFinal);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MenuCrearProveedor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuCrearProveedor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
