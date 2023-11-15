#pragma once

namespace NexaGest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuNuevoUsuario
	/// </summary>
	public ref class MenuNuevoUsuario : public System::Windows::Forms::Form
	{
	public:
		MenuNuevoUsuario();
		void actualizarListado();
		void limpiarValores();

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MenuNuevoUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkBoxOrdenVenta;
	private: System::Windows::Forms::CheckBox^ checkBoxOrdenCompra;
	private: System::Windows::Forms::CheckBox^ checkBoxUsuarios;
	private: System::Windows::Forms::CheckBox^ checkBoxItems;
	private: System::Windows::Forms::CheckBox^ checkBoxClientes;
	private: System::Windows::Forms::CheckBox^ checkBoxProveedores;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ buttonAgregar;
	private: System::Windows::Forms::Button^ buttonCancelar;
	private: System::Windows::Forms::TextBox^ textBoxNombre;
	private: System::Windows::Forms::TextBox^ textBoxApellido;
	private: System::Windows::Forms::TextBox^ textBoxEmail;
	private: System::Windows::Forms::TextBox^ textBoxUsuario;
	private: System::Windows::Forms::TextBox^ textBoxContrasena;
	private: System::Windows::Forms::ComboBox^ comboBoxTipo;

	private: System::Windows::Forms::TextBox^ textBoxObjetivo;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Button^ buttonEliminar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Usuario;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contrasena;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBoxOrdenVenta = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxOrdenCompra = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxUsuarios = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxItems = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxClientes = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxProveedores = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->buttonAgregar = (gcnew System::Windows::Forms::Button());
			this->buttonCancelar = (gcnew System::Windows::Forms::Button());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->textBoxApellido = (gcnew System::Windows::Forms::TextBox());
			this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUsuario = (gcnew System::Windows::Forms::TextBox());
			this->textBoxContrasena = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxTipo = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxObjetivo = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonEliminar = (gcnew System::Windows::Forms::Button());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Usuario = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contrasena = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Apellido:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Email:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Usuario:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 133);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Contraseña:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(14, 166);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Tipo:";
			// 
			// checkBoxOrdenVenta
			// 
			this->checkBoxOrdenVenta->AutoSize = true;
			this->checkBoxOrdenVenta->Location = System::Drawing::Point(17, 219);
			this->checkBoxOrdenVenta->Name = L"checkBoxOrdenVenta";
			this->checkBoxOrdenVenta->Size = System::Drawing::Size(129, 17);
			this->checkBoxOrdenVenta->TabIndex = 6;
			this->checkBoxOrdenVenta->Text = L"Crear Orden de Venta";
			this->checkBoxOrdenVenta->UseVisualStyleBackColor = true;
			// 
			// checkBoxOrdenCompra
			// 
			this->checkBoxOrdenCompra->AutoSize = true;
			this->checkBoxOrdenCompra->Location = System::Drawing::Point(17, 242);
			this->checkBoxOrdenCompra->Name = L"checkBoxOrdenCompra";
			this->checkBoxOrdenCompra->Size = System::Drawing::Size(137, 17);
			this->checkBoxOrdenCompra->TabIndex = 7;
			this->checkBoxOrdenCompra->Text = L"Crear Orden de Compra";
			this->checkBoxOrdenCompra->UseVisualStyleBackColor = true;
			// 
			// checkBoxUsuarios
			// 
			this->checkBoxUsuarios->AutoSize = true;
			this->checkBoxUsuarios->Location = System::Drawing::Point(17, 265);
			this->checkBoxUsuarios->Name = L"checkBoxUsuarios";
			this->checkBoxUsuarios->Size = System::Drawing::Size(95, 17);
			this->checkBoxUsuarios->TabIndex = 8;
			this->checkBoxUsuarios->Text = L"Crear Usuarios";
			this->checkBoxUsuarios->UseVisualStyleBackColor = true;
			// 
			// checkBoxItems
			// 
			this->checkBoxItems->AutoSize = true;
			this->checkBoxItems->Location = System::Drawing::Point(17, 288);
			this->checkBoxItems->Name = L"checkBoxItems";
			this->checkBoxItems->Size = System::Drawing::Size(79, 17);
			this->checkBoxItems->TabIndex = 9;
			this->checkBoxItems->Text = L"Crear Items";
			this->checkBoxItems->UseVisualStyleBackColor = true;
			// 
			// checkBoxClientes
			// 
			this->checkBoxClientes->AutoSize = true;
			this->checkBoxClientes->Location = System::Drawing::Point(17, 311);
			this->checkBoxClientes->Name = L"checkBoxClientes";
			this->checkBoxClientes->Size = System::Drawing::Size(91, 17);
			this->checkBoxClientes->TabIndex = 10;
			this->checkBoxClientes->Text = L"Crear Clientes";
			this->checkBoxClientes->UseVisualStyleBackColor = true;
			// 
			// checkBoxProveedores
			// 
			this->checkBoxProveedores->AutoSize = true;
			this->checkBoxProveedores->Location = System::Drawing::Point(17, 334);
			this->checkBoxProveedores->Name = L"checkBoxProveedores";
			this->checkBoxProveedores->Size = System::Drawing::Size(114, 17);
			this->checkBoxProveedores->TabIndex = 11;
			this->checkBoxProveedores->Text = L"Crear Proveedores";
			this->checkBoxProveedores->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(14, 194);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Objetivo de Ventas:  $";
			this->label7->Visible = false;
			// 
			// buttonAgregar
			// 
			this->buttonAgregar->Location = System::Drawing::Point(39, 375);
			this->buttonAgregar->Name = L"buttonAgregar";
			this->buttonAgregar->Size = System::Drawing::Size(107, 41);
			this->buttonAgregar->TabIndex = 13;
			this->buttonAgregar->Text = L"Agregar";
			this->buttonAgregar->UseVisualStyleBackColor = true;
			this->buttonAgregar->Click += gcnew System::EventHandler(this, &MenuNuevoUsuario::buttonAgregar_Click);
			// 
			// buttonCancelar
			// 
			this->buttonCancelar->Location = System::Drawing::Point(176, 375);
			this->buttonCancelar->Name = L"buttonCancelar";
			this->buttonCancelar->Size = System::Drawing::Size(107, 41);
			this->buttonCancelar->TabIndex = 14;
			this->buttonCancelar->Text = L"Cancelar";
			this->buttonCancelar->UseVisualStyleBackColor = true;
			this->buttonCancelar->Click += gcnew System::EventHandler(this, &MenuNuevoUsuario::buttonCancelar_Click);
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->Location = System::Drawing::Point(67, 13);
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(216, 20);
			this->textBoxNombre->TabIndex = 15;
			// 
			// textBoxApellido
			// 
			this->textBoxApellido->Location = System::Drawing::Point(66, 41);
			this->textBoxApellido->Name = L"textBoxApellido";
			this->textBoxApellido->Size = System::Drawing::Size(216, 20);
			this->textBoxApellido->TabIndex = 16;
			// 
			// textBoxEmail
			// 
			this->textBoxEmail->Location = System::Drawing::Point(66, 72);
			this->textBoxEmail->Name = L"textBoxEmail";
			this->textBoxEmail->Size = System::Drawing::Size(216, 20);
			this->textBoxEmail->TabIndex = 17;
			// 
			// textBoxUsuario
			// 
			this->textBoxUsuario->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBoxUsuario->Location = System::Drawing::Point(66, 100);
			this->textBoxUsuario->Name = L"textBoxUsuario";
			this->textBoxUsuario->Size = System::Drawing::Size(216, 20);
			this->textBoxUsuario->TabIndex = 18;
			// 
			// textBoxContrasena
			// 
			this->textBoxContrasena->Location = System::Drawing::Point(84, 130);
			this->textBoxContrasena->Name = L"textBoxContrasena";
			this->textBoxContrasena->Size = System::Drawing::Size(199, 20);
			this->textBoxContrasena->TabIndex = 19;
			// 
			// comboBoxTipo
			// 
			this->comboBoxTipo->FormattingEnabled = true;
			this->comboBoxTipo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Administrador", L"Vendedor", L"Comprador" });
			this->comboBoxTipo->Location = System::Drawing::Point(51, 163);
			this->comboBoxTipo->Name = L"comboBoxTipo";
			this->comboBoxTipo->Size = System::Drawing::Size(146, 21);
			this->comboBoxTipo->TabIndex = 20;
			// 
			// textBoxObjetivo
			// 
			this->textBoxObjetivo->Location = System::Drawing::Point(132, 191);
			this->textBoxObjetivo->Name = L"textBoxObjetivo";
			this->textBoxObjetivo->Size = System::Drawing::Size(151, 20);
			this->textBoxObjetivo->TabIndex = 21;
			this->textBoxObjetivo->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Nombre,
					this->Apellido, this->Email, this->Usuario, this->Contrasena, this->Tipo, this->ID
			});
			this->dataGridView1->Location = System::Drawing::Point(357, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(682, 358);
			this->dataGridView1->TabIndex = 22;
			// 
			// buttonEliminar
			// 
			this->buttonEliminar->Location = System::Drawing::Point(357, 13);
			this->buttonEliminar->Name = L"buttonEliminar";
			this->buttonEliminar->Size = System::Drawing::Size(107, 41);
			this->buttonEliminar->TabIndex = 23;
			this->buttonEliminar->Text = L"Eliminar";
			this->buttonEliminar->UseVisualStyleBackColor = true;
			this->buttonEliminar->Click += gcnew System::EventHandler(this, &MenuNuevoUsuario::buttonEliminar_Click);
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			// 
			// Apellido
			// 
			this->Apellido->HeaderText = L"Apellido";
			this->Apellido->Name = L"Apellido";
			// 
			// Email
			// 
			this->Email->HeaderText = L"Email";
			this->Email->Name = L"Email";
			// 
			// Usuario
			// 
			this->Usuario->HeaderText = L"Usuario";
			this->Usuario->Name = L"Usuario";
			// 
			// Contrasena
			// 
			this->Contrasena->HeaderText = L"Contraseña";
			this->Contrasena->Name = L"Contrasena";
			// 
			// Tipo
			// 
			this->Tipo->HeaderText = L"Tipo";
			this->Tipo->Name = L"Tipo";
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->Name = L"ID";
			this->ID->Visible = false;
			// 
			// MenuNuevoUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1051, 442);
			this->Controls->Add(this->buttonEliminar);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBoxObjetivo);
			this->Controls->Add(this->comboBoxTipo);
			this->Controls->Add(this->textBoxContrasena);
			this->Controls->Add(this->textBoxUsuario);
			this->Controls->Add(this->textBoxEmail);
			this->Controls->Add(this->textBoxApellido);
			this->Controls->Add(this->textBoxNombre);
			this->Controls->Add(this->buttonCancelar);
			this->Controls->Add(this->buttonAgregar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->checkBoxProveedores);
			this->Controls->Add(this->checkBoxClientes);
			this->Controls->Add(this->checkBoxItems);
			this->Controls->Add(this->checkBoxUsuarios);
			this->Controls->Add(this->checkBoxOrdenCompra);
			this->Controls->Add(this->checkBoxOrdenVenta);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MenuNuevoUsuario";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MenuNuevoUsuario";
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
