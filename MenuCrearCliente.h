#pragma once

namespace NexaGest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuCrearCliente
	/// </summary>
	public ref class MenuCrearCliente : public System::Windows::Forms::Form
	{
	public:
		MenuCrearCliente();
		void actualizarListado();



	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MenuCrearCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxContacto;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ textBoxDireccion;

	private: System::Windows::Forms::TextBox^ textBoxTelefono;

	private: System::Windows::Forms::TextBox^ textBoxRubro;

	private: System::Windows::Forms::TextBox^ textBoxEmpresa;

	private: System::Windows::Forms::Button^ buttonCancelar;
	private: System::Windows::Forms::Button^ buttonAgregar;
	private: System::Windows::Forms::CheckBox^ checkBoxConsumidorFinal;








	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxCuit;

	private: System::Windows::Forms::TextBox^ textBoxEmail;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ buttonEliminar;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Empresa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CUIT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contacto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Telefono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Direccion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;






	protected:






















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
			this->textBoxContacto = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDireccion = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTelefono = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRubro = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmpresa = (gcnew System::Windows::Forms::TextBox());
			this->buttonCancelar = (gcnew System::Windows::Forms::Button());
			this->buttonAgregar = (gcnew System::Windows::Forms::Button());
			this->checkBoxConsumidorFinal = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxCuit = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Empresa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CUIT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contacto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Telefono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Direccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBoxContacto
			// 
			this->textBoxContacto->Location = System::Drawing::Point(69, 140);
			this->textBoxContacto->Name = L"textBoxContacto";
			this->textBoxContacto->Size = System::Drawing::Size(216, 20);
			this->textBoxContacto->TabIndex = 41;
			// 
			// textBoxDireccion
			// 
			this->textBoxDireccion->Location = System::Drawing::Point(69, 110);
			this->textBoxDireccion->Name = L"textBoxDireccion";
			this->textBoxDireccion->Size = System::Drawing::Size(216, 20);
			this->textBoxDireccion->TabIndex = 40;
			// 
			// textBoxTelefono
			// 
			this->textBoxTelefono->Location = System::Drawing::Point(69, 82);
			this->textBoxTelefono->Name = L"textBoxTelefono";
			this->textBoxTelefono->Size = System::Drawing::Size(216, 20);
			this->textBoxTelefono->TabIndex = 39;
			// 
			// textBoxRubro
			// 
			this->textBoxRubro->Location = System::Drawing::Point(69, 51);
			this->textBoxRubro->Name = L"textBoxRubro";
			this->textBoxRubro->Size = System::Drawing::Size(216, 20);
			this->textBoxRubro->TabIndex = 38;
			// 
			// textBoxEmpresa
			// 
			this->textBoxEmpresa->Location = System::Drawing::Point(70, 23);
			this->textBoxEmpresa->Name = L"textBoxEmpresa";
			this->textBoxEmpresa->Size = System::Drawing::Size(216, 20);
			this->textBoxEmpresa->TabIndex = 37;
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->Location = System::Drawing::Point(171, 292);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(107, 41);
			this->buttonCancelar->TabIndex = 36;
			this->buttonCancelar->Text = L"Cancelar";
			this->buttonCancelar->UseVisualStyleBackColor = true;
			this->buttonCancelar->Click += gcnew System::EventHandler(this, &MenuCrearCliente::buttonCancelar_Click);
			// 
			// buttonAgregar
			// 
			this->buttonAgregar->Location = System::Drawing::Point(34, 292);
			this->buttonAgregar->Name = L"buttonAgregar";
			this->buttonAgregar->Size = System::Drawing::Size(107, 41);
			this->buttonAgregar->TabIndex = 35;
			this->buttonAgregar->Text = L"Agregar";
			this->buttonAgregar->UseVisualStyleBackColor = true;
			this->buttonAgregar->Click += gcnew System::EventHandler(this, &MenuCrearCliente::buttonAgregar_Click);
			// 
			// checkBoxConsumidorFinal
			// 
			this->checkBoxConsumidorFinal->AutoSize = true;
			this->checkBoxConsumidorFinal->Location = System::Drawing::Point(18, 237);
			this->checkBoxConsumidorFinal->Name = L"checkBoxConsumidorFinal";
			this->checkBoxConsumidorFinal->Size = System::Drawing::Size(106, 17);
			this->checkBoxConsumidorFinal->TabIndex = 28;
			this->checkBoxConsumidorFinal->Text = L"Consumidor Final";
			this->checkBoxConsumidorFinal->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 13);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Contacto";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Direcci�n:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Telefono:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Rubro:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 13);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Empresa";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 201);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 34;
			this->label7->Text = L"CUIT:";
			// 
			// textBoxCuit
			// 
			this->textBoxCuit->Location = System::Drawing::Point(69, 198);
			this->textBoxCuit->Name = L"textBoxCuit";
			this->textBoxCuit->Size = System::Drawing::Size(216, 20);
			this->textBoxCuit->TabIndex = 45;
			// 
			// textBoxEmail
			// 
			this->textBoxEmail->Location = System::Drawing::Point(69, 170);
			this->textBoxEmail->Name = L"textBoxEmail";
			this->textBoxEmail->Size = System::Drawing::Size(216, 20);
			this->textBoxEmail->TabIndex = 43;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 13);
			this->label6->TabIndex = 44;
			this->label6->Text = L"Email";
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(326, 23);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(107, 41);
			this->buttonEliminar->TabIndex = 46;
			this->buttonEliminar->Text = L"Eliminar";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			this->buttonEliminar->Click += gcnew System::EventHandler(this, &MenuCrearCliente::buttonEliminar_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Empresa,
					this->CUIT, this->Contacto, this->Telefono, this->Direccion, this->ID
			});
			this->dataGridView1->Location = System::Drawing::Point(326, 82);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(650, 262);
			this->dataGridView1->TabIndex = 47;
			// 
			// Empresa
			// 
			this->Empresa->HeaderText = L"Empresa";
			this->Empresa->Name = L"Empresa";
			// 
			// CUIT
			// 
			this->CUIT->HeaderText = L"CUIT";
			this->CUIT->Name = L"CUIT";
			// 
			// Contacto
			// 
			this->Contacto->HeaderText = L"Contacto";
			this->Contacto->Name = L"Contacto";
			// 
			// Telefono
			// 
			this->Telefono->HeaderText = L"Telefono";
			this->Telefono->Name = L"Telefono";
			// 
			// Direccion
			// 
			this->Direccion->HeaderText = L"Direccion";
			this->Direccion->Name = L"Direccion";
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Visible = false;
			// 
			// MenuCrearCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(988, 356);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonEliminar);
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
			this->Name = L"MenuCrearCliente";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuCrearCliente";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void buttonAgregar_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonCancelar_Click(System::Object^ sender, System::EventArgs^ e);
		Void buttonEliminar_Click(System::Object^ sender, System::EventArgs^ e);
};
}
