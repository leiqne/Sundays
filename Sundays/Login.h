#pragma once
#include <msclr/marshal_cppstd.h>
#include "Cliente.h"

namespace Sundays {
	
	using namespace std;
	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(Cliente* client) : cliente(client)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			IniciarSesion->BackColor = Color::Transparent;
			
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Usuario;
	private: System::Windows::Forms::Label^ Registro;
	private: System::Windows::Forms::Label^ contrasenia;
	private: System::Windows::Forms::TextBox^ textUsuario;
	private: System::Windows::Forms::TextBox^ textContra;
	private: System::Windows::Forms::Button^ btn_aceptar;
	private: System::Windows::Forms::Button^ btn_cancel;
	private: System::Windows::Forms::Button^ IniciarSesion;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ojo1;
	private: System::Windows::Forms::Button^ ojo2;

	protected:



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		Cliente* cliente;
		bool confirmado1 = false;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtNombres;
		   bool confirmado2 = false;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->Usuario = (gcnew System::Windows::Forms::Label());
			this->Registro = (gcnew System::Windows::Forms::Label());
			this->contrasenia = (gcnew System::Windows::Forms::Label());
			this->textUsuario = (gcnew System::Windows::Forms::TextBox());
			this->textContra = (gcnew System::Windows::Forms::TextBox());
			this->btn_aceptar = (gcnew System::Windows::Forms::Button());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->IniciarSesion = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ojo1 = (gcnew System::Windows::Forms::Button());
			this->ojo2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtNombres = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Usuario
			// 
			this->Usuario->AutoSize = true;
			this->Usuario->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Usuario->Location = System::Drawing::Point(81, 130);
			this->Usuario->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(234, 32);
			this->Usuario->TabIndex = 0;
			this->Usuario->Text = L"Correo Electronico";
			// 
			// Registro
			// 
			this->Registro->AutoSize = true;
			this->Registro->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Registro->ForeColor = System::Drawing::Color::Maroon;
			this->Registro->Location = System::Drawing::Point(356, 22);
			this->Registro->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Registro->Name = L"Registro";
			this->Registro->Size = System::Drawing::Size(133, 37);
			this->Registro->TabIndex = 1;
			this->Registro->Text = L"REGISTRO";
			this->Registro->Click += gcnew System::EventHandler(this, &Login::label2_Click);
			// 
			// contrasenia
			// 
			this->contrasenia->AutoSize = true;
			this->contrasenia->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contrasenia->Location = System::Drawing::Point(81, 169);
			this->contrasenia->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->contrasenia->Name = L"contrasenia";
			this->contrasenia->Size = System::Drawing::Size(145, 32);
			this->contrasenia->TabIndex = 2;
			this->contrasenia->Text = L"Contraseña";
			// 
			// textUsuario
			// 
			this->textUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textUsuario->Location = System::Drawing::Point(415, 130);
			this->textUsuario->Margin = System::Windows::Forms::Padding(4);
			this->textUsuario->Name = L"textUsuario";
			this->textUsuario->Size = System::Drawing::Size(391, 30);
			this->textUsuario->TabIndex = 3;
			// 
			// textContra
			// 
			this->textContra->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textContra->Location = System::Drawing::Point(415, 171);
			this->textContra->Margin = System::Windows::Forms::Padding(4);
			this->textContra->Name = L"textContra";
			this->textContra->Size = System::Drawing::Size(391, 30);
			this->textContra->TabIndex = 4;
			this->textContra->UseSystemPasswordChar = true;
			// 
			// btn_aceptar
			// 
			this->btn_aceptar->BackColor = System::Drawing::Color::Maroon;
			this->btn_aceptar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_aceptar->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_aceptar->ForeColor = System::Drawing::Color::White;
			this->btn_aceptar->Location = System::Drawing::Point(220, 258);
			this->btn_aceptar->Margin = System::Windows::Forms::Padding(4);
			this->btn_aceptar->Name = L"btn_aceptar";
			this->btn_aceptar->Size = System::Drawing::Size(157, 43);
			this->btn_aceptar->TabIndex = 5;
			this->btn_aceptar->Text = L"REGISTRARME";
			this->btn_aceptar->UseVisualStyleBackColor = false;
			this->btn_aceptar->Click += gcnew System::EventHandler(this, &Login::btn_aceptar_Click);
			// 
			// btn_cancel
			// 
			this->btn_cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_cancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(501, 258);
			this->btn_cancel->Margin = System::Windows::Forms::Padding(4);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(157, 43);
			this->btn_cancel->TabIndex = 6;
			this->btn_cancel->Text = L"Cancelar";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &Login::btn_cancel_Click);
			// 
			// IniciarSesion
			// 
			this->IniciarSesion->Cursor = System::Windows::Forms::Cursors::Hand;
			this->IniciarSesion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->IniciarSesion->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->IniciarSesion->Location = System::Drawing::Point(267, 309);
			this->IniciarSesion->Margin = System::Windows::Forms::Padding(4);
			this->IniciarSesion->Name = L"IniciarSesion";
			this->IniciarSesion->Size = System::Drawing::Size(376, 38);
			this->IniciarSesion->TabIndex = 7;
			this->IniciarSesion->Text = L"Si ya tiene tiene una cuenta creada haga click aqui";
			this->IniciarSesion->UseVisualStyleBackColor = true;
			this->IniciarSesion->Click += gcnew System::EventHandler(this, &Login::IniciarSesion_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(415, 214);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(391, 30);
			this->textBox1->TabIndex = 9;
			this->textBox1->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(79, 213);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(266, 32);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Confirmar contraseña";
			// 
			// ojo1
			// 
			this->ojo1->BackColor = System::Drawing::Color::Transparent;
			this->ojo1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ojo1.BackgroundImage")));
			this->ojo1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ojo1->Location = System::Drawing::Point(761, 164);
			this->ojo1->Margin = System::Windows::Forms::Padding(4);
			this->ojo1->Name = L"ojo1";
			this->ojo1->Size = System::Drawing::Size(45, 36);
			this->ojo1->TabIndex = 10;
			this->ojo1->UseVisualStyleBackColor = false;
			this->ojo1->Click += gcnew System::EventHandler(this, &Login::ojo1_Click);
			// 
			// ojo2
			// 
			this->ojo2->BackColor = System::Drawing::Color::Transparent;
			this->ojo2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ojo2.BackgroundImage")));
			this->ojo2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ojo2->Location = System::Drawing::Point(761, 208);
			this->ojo2->Margin = System::Windows::Forms::Padding(4);
			this->ojo2->Name = L"ojo2";
			this->ojo2->Size = System::Drawing::Size(45, 36);
			this->ojo2->TabIndex = 11;
			this->ojo2->UseVisualStyleBackColor = false;
			this->ojo2->Click += gcnew System::EventHandler(this, &Login::ojo2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(81, 86);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 32);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Nombres";
			// 
			// txtNombres
			// 
			this->txtNombres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombres->Location = System::Drawing::Point(415, 86);
			this->txtNombres->Margin = System::Windows::Forms::Padding(4);
			this->txtNombres->Name = L"txtNombres";
			this->txtNombres->Size = System::Drawing::Size(391, 30);
			this->txtNombres->TabIndex = 13;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(876, 350);
			this->Controls->Add(this->txtNombres);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ojo2);
			this->Controls->Add(this->ojo1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->IniciarSesion);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->btn_aceptar);
			this->Controls->Add(this->textContra);
			this->Controls->Add(this->textUsuario);
			this->Controls->Add(this->contrasenia);
			this->Controls->Add(this->Registro);
			this->Controls->Add(this->Usuario);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
	IniciarSesion->FlatStyle = FlatStyle::Flat;
	IniciarSesion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	IniciarSesion->FlatAppearance->BorderSize = 0;
	btn_aceptar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	btn_aceptar->FlatAppearance->BorderSize = 0;
}
private: System::Void IniciarSesion_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ojo1_Click(System::Object^ sender, System::EventArgs^ e) {
	textContra->UseSystemPasswordChar = confirmado1;
	confirmado1 =! confirmado1;

}
private: System::Void ojo2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->UseSystemPasswordChar = confirmado2;
	confirmado2 =!confirmado2;
}
private: System::Void btn_aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	cout << marshal_as<std::string>(textBox1->Text->Empty->ToString());
	if (textBox1->Text->Trim()->Equals("") || textContra->Text->Trim()->Equals("") || textUsuario->Text->Trim()->Equals("") || txtNombres->Text->Trim()->Equals("")) {
		MessageBox::Show("Debe llenar todos los campos");
		return;
	}
	if (textBox1->Text != textContra->Text) {
		MessageBox::Show("Las contraseñas no soinciden");
		return;
	}
	string email = marshal_as<std::string>(textUsuario->Text);
	string password = marshal_as<std::string>(textContra->Text);
	string nombres = marshal_as<std::string>(txtNombres->Text);
	if (cliente->registro(email, nombres, password)) {
		MessageBox::Show("Registrado con exito");
		this->DialogResult = Windows::Forms::DialogResult::Yes;
		this->Close();
	} else {
		MessageBox::Show("Ha ocurrido un error al registrarse");
	}
}
};
}
