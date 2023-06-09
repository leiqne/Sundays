#pragma once
#include "Login.h"
#include "Cliente.h"
#include <string>
#include <msclr/marshal_cppstd.h>

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
	/// Resumen de InicioS
	/// </summary>
	public ref class InicioS : public System::Windows::Forms::Form
	{
	public:
		InicioS(Cliente* client): cliente(client)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			IniciarSesion->BackColor = Color::Transparent;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~InicioS()
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




	protected:



	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;
		Cliente* cliente;


		   bool confirmed;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Usuario = (gcnew System::Windows::Forms::Label());
			this->Registro = (gcnew System::Windows::Forms::Label());
			this->contrasenia = (gcnew System::Windows::Forms::Label());
			this->textUsuario = (gcnew System::Windows::Forms::TextBox());
			this->textContra = (gcnew System::Windows::Forms::TextBox());
			this->btn_aceptar = (gcnew System::Windows::Forms::Button());
			this->btn_cancel = (gcnew System::Windows::Forms::Button());
			this->IniciarSesion = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Usuario
			// 
			this->Usuario->AutoSize = true;
			this->Usuario->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Usuario->Location = System::Drawing::Point(81, 103);
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
			this->Registro->Location = System::Drawing::Point(319, 22);
			this->Registro->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Registro->Name = L"Registro";
			this->Registro->Size = System::Drawing::Size(183, 37);
			this->Registro->TabIndex = 1;
			this->Registro->Text = L"INICIO SESI�N";
			this->Registro->Click += gcnew System::EventHandler(this, &InicioS::label2_Click);
			// 
			// contrasenia
			// 
			this->contrasenia->AutoSize = true;
			this->contrasenia->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contrasenia->Location = System::Drawing::Point(81, 143);
			this->contrasenia->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->contrasenia->Name = L"contrasenia";
			this->contrasenia->Size = System::Drawing::Size(145, 32);
			this->contrasenia->TabIndex = 2;
			this->contrasenia->Text = L"Contrase�a";
			// 
			// textUsuario
			// 
			this->textUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textUsuario->Location = System::Drawing::Point(415, 103);
			this->textUsuario->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textUsuario->Name = L"textUsuario";
			this->textUsuario->Size = System::Drawing::Size(391, 30);
			this->textUsuario->TabIndex = 3;
			// 
			// textContra
			// 
			this->textContra->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textContra->Location = System::Drawing::Point(415, 144);
			this->textContra->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			this->btn_aceptar->Location = System::Drawing::Point(205, 225);
			this->btn_aceptar->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_aceptar->Name = L"btn_aceptar";
			this->btn_aceptar->Size = System::Drawing::Size(157, 43);
			this->btn_aceptar->TabIndex = 5;
			this->btn_aceptar->Text = L"INGRESAR";
			this->btn_aceptar->UseVisualStyleBackColor = false;
			this->btn_aceptar->Click += gcnew System::EventHandler(this, &InicioS::btn_aceptar_Click);
			// 
			// btn_cancel
			// 
			this->btn_cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_cancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(483, 220);
			this->btn_cancel->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(157, 43);
			this->btn_cancel->TabIndex = 6;
			this->btn_cancel->Text = L"Cancelar";
			this->btn_cancel->UseVisualStyleBackColor = true;
			this->btn_cancel->Click += gcnew System::EventHandler(this, &InicioS::btn_cancel_Click);
			// 
			// IniciarSesion
			// 
			this->IniciarSesion->Cursor = System::Windows::Forms::Cursors::Hand;
			this->IniciarSesion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->IniciarSesion->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->IniciarSesion->Location = System::Drawing::Point(269, 284);
			this->IniciarSesion->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->IniciarSesion->Name = L"IniciarSesion";
			this->IniciarSesion->Size = System::Drawing::Size(296, 38);
			this->IniciarSesion->TabIndex = 7;
			this->IniciarSesion->Text = L"�No tienes un cuenta\? �nete ahora";
			this->IniciarSesion->UseVisualStyleBackColor = true;
			this->IniciarSesion->Click += gcnew System::EventHandler(this, &InicioS::IniciarSesion_Click);
			// 
			// InicioS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(876, 350);
			this->Controls->Add(this->IniciarSesion);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->btn_aceptar);
			this->Controls->Add(this->textContra);
			this->Controls->Add(this->textUsuario);
			this->Controls->Add(this->contrasenia);
			this->Controls->Add(this->Registro);
			this->Controls->Add(this->Usuario);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"InicioS";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"InicioS";
			this->Load += gcnew System::EventHandler(this, &InicioS::InicioS_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void InicioS_Load(System::Object^ sender, System::EventArgs^ e) {
		IniciarSesion->FlatStyle = FlatStyle::Flat;
		IniciarSesion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		IniciarSesion->FlatAppearance->BorderSize = 0;
		btn_aceptar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_aceptar->FlatAppearance->BorderSize = 0;
	}
	private: System::Void IniciarSesion_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible=false;
		Login^ login = gcnew Login(cliente);
		if (login->ShowDialog() == Windows::Forms::DialogResult::Yes) {
			this->Close();
		}else this->Visible = true;
	}

private: System::Void btn_aceptar_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textUsuario->Text->Trim()->Equals("") || textContra->Text->Trim()->Equals("")) //para que no hayan espacios en blanco
		MessageBox::Show("Debe llenar todos los campos");
	else {
		string email = marshal_as<std::string>(textUsuario->Text);
		string password = marshal_as<std::string>(textContra->Text);
		String^ msg;
		if (cliente->login(email, password)) {
			msg = gcnew String(("Bienvenido " + cliente->getNombre()).c_str());
			MessageBox::Show(msg);
			this->DialogResult = Windows::Forms::DialogResult::Yes;
			this->Close();
		}
		else {
			msg = gcnew String("El usurio no existe o los datos son incorrectos");
			MessageBox::Show(msg);
		}
	}
}
};
}