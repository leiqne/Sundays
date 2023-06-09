#pragma once
#include "Inicio sesion.h"
namespace Sundays {

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
		Login(void)
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
			this->SuspendLayout();
			// 
			// Usuario
			// 
			this->Usuario->AutoSize = true;
			this->Usuario->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Usuario->Location = System::Drawing::Point(61, 74);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(186, 25);
			this->Usuario->TabIndex = 0;
			this->Usuario->Text = L"Correo Electronico";
			// 
			// Registro
			// 
			this->Registro->AutoSize = true;
			this->Registro->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Registro->ForeColor = System::Drawing::Color::Maroon;
			this->Registro->Location = System::Drawing::Point(267, 18);
			this->Registro->Name = L"Registro";
			this->Registro->Size = System::Drawing::Size(105, 29);
			this->Registro->TabIndex = 1;
			this->Registro->Text = L"REGISTRO";
			this->Registro->Click += gcnew System::EventHandler(this, &Login::label2_Click);
			// 
			// contrasenia
			// 
			this->contrasenia->AutoSize = true;
			this->contrasenia->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contrasenia->Location = System::Drawing::Point(61, 106);
			this->contrasenia->Name = L"contrasenia";
			this->contrasenia->Size = System::Drawing::Size(115, 25);
			this->contrasenia->TabIndex = 2;
			this->contrasenia->Text = L"Contrase�a";
			// 
			// textUsuario
			// 
			this->textUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textUsuario->Location = System::Drawing::Point(311, 74);
			this->textUsuario->Name = L"textUsuario";
			this->textUsuario->Size = System::Drawing::Size(294, 26);
			this->textUsuario->TabIndex = 3;
			// 
			// textContra
			// 
			this->textContra->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textContra->Location = System::Drawing::Point(311, 107);
			this->textContra->Name = L"textContra";
			this->textContra->Size = System::Drawing::Size(294, 26);
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
			this->btn_aceptar->Location = System::Drawing::Point(165, 190);
			this->btn_aceptar->Name = L"btn_aceptar";
			this->btn_aceptar->Size = System::Drawing::Size(118, 35);
			this->btn_aceptar->TabIndex = 5;
			this->btn_aceptar->Text = L"REGISTRARME";
			this->btn_aceptar->UseVisualStyleBackColor = false;
			// 
			// btn_cancel
			// 
			this->btn_cancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_cancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_cancel->Location = System::Drawing::Point(376, 190);
			this->btn_cancel->Name = L"btn_cancel";
			this->btn_cancel->Size = System::Drawing::Size(118, 35);
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
			this->IniciarSesion->Location = System::Drawing::Point(200, 237);
			this->IniciarSesion->Name = L"IniciarSesion";
			this->IniciarSesion->Size = System::Drawing::Size(282, 31);
			this->IniciarSesion->TabIndex = 7;
			this->IniciarSesion->Text = L"Si ya tiene tiene una cuenta creada haga click aqui";
			this->IniciarSesion->UseVisualStyleBackColor = true;
			this->IniciarSesion->Click += gcnew System::EventHandler(this, &Login::IniciarSesion_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(311, 142);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(294, 26);
			this->textBox1->TabIndex = 9;
			this->textBox1->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(59, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Confirmar contrase�a";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 284);
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
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro";
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

}
};
}
