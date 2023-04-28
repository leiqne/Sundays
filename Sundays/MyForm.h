#pragma once
#include "funciones.h"
#include <string>
#include "Login.h"
namespace Sundays {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			gr = this->CreateGraphics();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;


	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		Graphics^ gr;
		Color SelectedColor = Color::FromArgb(250, 250, 250);
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ cookies;
	private: System::Windows::Forms::Button^ aceptar_c;
	private: System::Windows::Forms::Button^ carta;
	private: System::Windows::Forms::Button^ infocookies;
	private: System::Windows::Forms::Button^ btn_login;



		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Método necesario para admitir el Diseñador. No se puede modificar
		   /// el contenido de este método con el editor de código.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->cookies = (gcnew System::Windows::Forms::TextBox());
			   this->aceptar_c = (gcnew System::Windows::Forms::Button());
			   this->carta = (gcnew System::Windows::Forms::Button());
			   this->infocookies = (gcnew System::Windows::Forms::Button());
			   this->btn_login = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BackColor = System::Drawing::Color::White;
			   this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			   this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->pictureBox2->Location = System::Drawing::Point(-3, 0);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(1384, 137);
			   this->pictureBox2->TabIndex = 1;
			   this->pictureBox2->TabStop = false;
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			   this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->pictureBox3->Location = System::Drawing::Point(79, 14);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(139, 59);
			   this->pictureBox3->TabIndex = 2;
			   this->pictureBox3->TabStop = false;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			   this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->pictureBox1->Location = System::Drawing::Point(18, 166);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(1336, 258);
			   this->pictureBox1->TabIndex = 4;
			   this->pictureBox1->TabStop = false;
			   // 
			   // cookies
			   // 
			   this->cookies->BackColor = System::Drawing::Color::Black;
			   this->cookies->Cursor = System::Windows::Forms::Cursors::Default;
			   this->cookies->Font = (gcnew System::Drawing::Font(L"Impact", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->cookies->ForeColor = System::Drawing::Color::White;
			   this->cookies->HideSelection = false;
			   this->cookies->Location = System::Drawing::Point(160, 778);
			   this->cookies->Multiline = true;
			   this->cookies->Name = L"cookies";
			   this->cookies->ReadOnly = true;
			   this->cookies->Size = System::Drawing::Size(964, 78);
			   this->cookies->TabIndex = 6;
			   this->cookies->TabStop = false;
			   this->cookies->Text = resources->GetString(L"cookies.Text");
			   this->cookies->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			   // 
			   // aceptar_c
			   // 
			   this->aceptar_c->BackColor = System::Drawing::Color::White;
			   this->aceptar_c->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->aceptar_c->Font = (gcnew System::Drawing::Font(L"Impact", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->aceptar_c->Location = System::Drawing::Point(1225, 791);
			   this->aceptar_c->Name = L"aceptar_c";
			   this->aceptar_c->Size = System::Drawing::Size(82, 37);
			   this->aceptar_c->TabIndex = 7;
			   this->aceptar_c->Text = L"ACEPTAR";
			   this->aceptar_c->UseVisualStyleBackColor = false;
			   this->aceptar_c->Click += gcnew System::EventHandler(this, &MyForm::aceptar_c_Click);
			   // 
			   // carta
			   // 
			   this->carta->BackColor = System::Drawing::Color::White;
			   this->carta->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->carta->Font = (gcnew System::Drawing::Font(L"Impact", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->carta->Location = System::Drawing::Point(247, 30);
			   this->carta->Name = L"carta";
			   this->carta->Size = System::Drawing::Size(70, 25);
			   this->carta->TabIndex = 8;
			   this->carta->Text = L"CARTA";
			   this->carta->UseVisualStyleBackColor = false;
			   // 
			   // infocookies
			   // 
			   this->infocookies->BackColor = System::Drawing::Color::Black;
			   this->infocookies->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->infocookies->Font = (gcnew System::Drawing::Font(L"Impact", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->infocookies->ForeColor = System::Drawing::Color::Transparent;
			   this->infocookies->Location = System::Drawing::Point(158, 815);
			   this->infocookies->Name = L"infocookies";
			   this->infocookies->Size = System::Drawing::Size(162, 23);
			   this->infocookies->TabIndex = 9;
			   this->infocookies->Text = L"Como eliminar las cookies";
			   this->infocookies->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->infocookies->UseVisualStyleBackColor = false;
			   this->infocookies->Click += gcnew System::EventHandler(this, &MyForm::infocookies_Click);
			   // 
			   // btn_login
			   // 
			   this->btn_login->BackColor = System::Drawing::Color::Transparent;
			   this->btn_login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_login.BackgroundImage")));
			   this->btn_login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->btn_login->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->btn_login->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->btn_login->Location = System::Drawing::Point(1122, 30);
			   this->btn_login->Name = L"btn_login";
			   this->btn_login->Size = System::Drawing::Size(226, 36);
			   this->btn_login->TabIndex = 10;
			   this->btn_login->UseVisualStyleBackColor = false;
			   this->btn_login->Click += gcnew System::EventHandler(this, &MyForm::btn_login_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				   static_cast<System::Int32>(static_cast<System::Byte>(250)));
			   this->ClientSize = System::Drawing::Size(1372, 850);
			   this->Controls->Add(this->btn_login);
			   this->Controls->Add(this->infocookies);
			   this->Controls->Add(this->carta);
			   this->Controls->Add(this->aceptar_c);
			   this->Controls->Add(this->cookies);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->pictureBox3);
			   this->Controls->Add(this->pictureBox2);
			   this->Name = L"MyForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"MyForm";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		cookies->BorderStyle = System::Windows::Forms::BorderStyle::None;
		aceptar_c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		aceptar_c->FlatAppearance->BorderSize = 0;//quitar el borde
		infocookies->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		infocookies->FlatAppearance->BorderSize = 0;//quitar el borde
		carta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		carta->FlatAppearance->BorderSize = 0;
		btn_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_login->FlatAppearance->BorderSize = 0;
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		if (cookies->Visible==true)
		{
			int a = gr->VisibleClipBounds.Width;
			gr->FillRectangle(Brushes::Black, 0, 769, a, 500);
		}
		else
		{

			gr->Clear(Color::WhiteSmoke);
		}
				
	}
	
private: System::Void aceptar_c_Click(System::Object^ sender, System::EventArgs^ e) {
	aceptar_c->Visible = false;
	cookies->Visible = false;
	infocookies->Visible = false;

}
private: System::Void infocookies_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ mensaje = "Cuando ingresas a un sitio online, es común que se genere y almacene un archivo llamado cookie en tu navegador. Las cookies almacenan información especifica de un usuario, como datos de autentificación que te ayudan a mantener registrado en tus páginas web favoritas.\n\nTe recomendamos limpiar las cookies de tu navegador de forma regular, en especial si notas inconvenientes al ingresar y navegar por páginas web.\n\nChrome:\nAbre Google Chorme,\nHaz clic en el icono más en la esquina superior derecha,\nHaz clic en la configuración,\nEn la parte inferior de la página, haz clic en configuración avanzada,\nBajo Privacidad y Seguridad, haz clic en Configuración de Contenido,\nBajo Cookies, haz clic en ver todas las cookies,\nIngresa Fridays, en el buscar cookies,\nHaz clic en quitar,\nHacer clic en listo.";
	MessageBox::Show(mensaje, "Información sobre cookies", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {
	Login^ form2 = gcnew Login();
	form2->ShowDialog();
}
};
}
