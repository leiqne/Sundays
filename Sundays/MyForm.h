#pragma once
#include "Carrito.h"
#include "Cliente.h"
#include "funciones.h"
#include "TipoPago.h"
#include <string>
#include "Inicio sesion1.h"

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
			productos = Funciones::CargarProductos("productos.csv");
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			gr = this->CreateGraphics();
			this->SetStyle(ControlStyles::AllPaintingInWmPaint | ControlStyles::UserPaint | ControlStyles::Opaque, true);
			this->UpdateStyles();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
		/// Variable del dise�ador necesaria.
		/// </summary>
		/// 
		MiVector<Producto>* productos = new MiVector<Producto>();
		CarritoDeCompras* carritoCompras = new CarritoDeCompras();
		Cliente* cliente = new Cliente();
		Graphics^ gr;
		Color SelectedColor = Color::FromArgb(250, 250, 250);
		


	private: System::Windows::Forms::TextBox^ cookies;
	private: System::Windows::Forms::Button^ aceptar_c;
	private: System::Windows::Forms::Button^ carta;
	private: System::Windows::Forms::Button^ infocookies;
	private: System::Windows::Forms::Button^ btn_login;
	private: System::Windows::Forms::Button^ btnPerfil;
	private: System::Windows::Forms::Panel^ pnl_contenedor;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ prueba;

		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// M�todo necesario para admitir el Dise�ador. No se puede modificar
		   /// el contenido de este m�todo con el editor de c�digo.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->cookies = (gcnew System::Windows::Forms::TextBox());
			   this->aceptar_c = (gcnew System::Windows::Forms::Button());
			   this->carta = (gcnew System::Windows::Forms::Button());
			   this->infocookies = (gcnew System::Windows::Forms::Button());
			   this->btn_login = (gcnew System::Windows::Forms::Button());
			   this->btnPerfil = (gcnew System::Windows::Forms::Button());
			   this->pnl_contenedor = (gcnew System::Windows::Forms::Panel());
			   this->prueba = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   this->pnl_contenedor->SuspendLayout();
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
			   // btnPerfil
			   // 
			   this->btnPerfil->BackColor = System::Drawing::Color::White;
			   this->btnPerfil->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->btnPerfil->Font = (gcnew System::Drawing::Font(L"Impact", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnPerfil->Location = System::Drawing::Point(1122, 30);
			   this->btnPerfil->Name = L"btnPerfil";
			   this->btnPerfil->Size = System::Drawing::Size(232, 37);
			   this->btnPerfil->TabIndex = 11;
			   this->btnPerfil->UseVisualStyleBackColor = false;
			   this->btnPerfil->Visible = false;
			   // 
			   // pnl_contenedor
			   // 
			   this->pnl_contenedor->AutoScroll = true;
			   this->pnl_contenedor->BackColor = System::Drawing::Color::Transparent;
			   this->pnl_contenedor->Controls->Add(this->prueba);
			   this->pnl_contenedor->Controls->Add(this->pictureBox1);
			   this->pnl_contenedor->Location = System::Drawing::Point(12, 154);
			   this->pnl_contenedor->Name = L"pnl_contenedor";
			   this->pnl_contenedor->Size = System::Drawing::Size(1348, 604);
			   this->pnl_contenedor->TabIndex = 12;
			   this->pnl_contenedor->SizeChanged += gcnew System::EventHandler(this, &MyForm::pnl_contenedor_SizeChanged);
			   this->pnl_contenedor->Resize += gcnew System::EventHandler(this, &MyForm::pnl_contenedor_Resize);
			   // 
			   // prueba
			   // 
			   this->prueba->AutoSize = true;
			   this->prueba->Location = System::Drawing::Point(53, 282);
			   this->prueba->Name = L"prueba";
			   this->prueba->Size = System::Drawing::Size(0, 13);
			   this->prueba->TabIndex = 1;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			   this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->pictureBox1->Location = System::Drawing::Point(44, 12);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(1262, 239);
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(250)),
				   static_cast<System::Int32>(static_cast<System::Byte>(250)));
			   this->ClientSize = System::Drawing::Size(1372, 850);
			   this->Controls->Add(this->cookies);
			   this->Controls->Add(this->btnPerfil);
			   this->Controls->Add(this->btn_login);
			   this->Controls->Add(this->infocookies);
			   this->Controls->Add(this->carta);
			   this->Controls->Add(this->aceptar_c);
			   this->Controls->Add(this->pictureBox3);
			   this->Controls->Add(this->pictureBox2);
			   this->Controls->Add(this->pnl_contenedor);
			   this->MaximizeBox = false;
			   this->MinimizeBox = false;
			   this->Name = L"MyForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"MyForm";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   this->pnl_contenedor->ResumeLayout(false);
			   this->pnl_contenedor->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		int x = 90; int y = 350, cont = 0, dx=250 , dy=240;
		pnl_contenedor->BackColor = Color::Transparent;
		cookies->BorderStyle = System::Windows::Forms::BorderStyle::None;
		aceptar_c->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		aceptar_c->FlatAppearance->BorderSize = 0;//quitar el borde
		infocookies->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		infocookies->FlatAppearance->BorderSize = 0;//quitar el borde
		carta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		carta->FlatAppearance->BorderSize = 0;
		btn_login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		btn_login->FlatAppearance->BorderSize = 0;

		for (int i = 0; i < 10; ++i) {
			Producto producto = productos->at(i);

			Button^ newbtn = gcnew Button();
			newbtn->Size = System::Drawing::Size(190, 190);
			newbtn->Text =gcnew String(productos->at(i).getNombre().c_str())+"\n"+"Precio: S/ " + gcnew String(System::Convert::ToString(productos->at(i).getPrecio()));
			newbtn->Font = gcnew System::Drawing::Font(newbtn->Font->FontFamily, 14, System::Drawing::FontStyle::Bold);
			newbtn->ForeColor = System::Drawing::Color::White;
			newbtn->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			newbtn->Location = Point(x,y);
			newbtn->Name = gcnew String(producto.getCodigo().c_str());

			String^ filename = gcnew String(( "imagenes\\" + producto.getFilename()).c_str());
			newbtn->Image = Drawing::Image::FromFile(filename);
			
			newbtn->Click += gcnew EventHandler(this, &MyForm::agregarCarrito);

			pnl_contenedor->Controls->Add(newbtn);

			if (i <= 3) {
				x += dx;
			} else {
				cont++;
				if (cont==1) {
					y += dy;
					x = 90;
				} else {
					x += dx;
				}
			}
		}
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private:
		void MyForm::agregarCarrito(Object^ sneder, EventArgs^ e) {
			//carritoCompras->agregar();
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
	this->ClientSize = System::Drawing::Size(1372, 770);
}
private: System::Void infocookies_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ mensaje = "Cuando ingresas a un sitio online, es comun que se genere y almacene un archivo llamado cookie en tu navegador. Las cookies almacenan informaci�n especifica de un usuario, como datos de autentificaci�n que te ayudan a mantener registrado en tus p�ginas web favoritas.\n\nTe recomendamos limpiar las cookies de tu navegador de forma regular, en especial si notas inconvenientes al ingresar y navegar por p�ginas web.\n\nChrome:\nAbre Google Chorme,\nHaz clic en el icono m�s en la esquina superior derecha,\nHaz clic en la configuraci�n,\nEn la parte inferior de la p�gina, haz clic en configuraci�n avanzada,\nBajo Privacidad y Seguridad, haz clic en Configuraci�n de Contenido,\nBajo Cookies, haz clic en ver todas las cookies,\nIngresa Fridays, en el buscar cookies,\nHaz clic en quitar,\nHacer clic en listo.";
	MessageBox::Show(mensaje, "Informacion sobre cookies", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void btn_login_Click(System::Object^ sender, System::EventArgs^ e) {
	InicioS^ form2 = gcnew InicioS(cliente);
	if (form2->ShowDialog() == Windows::Forms::DialogResult::Yes) {
		btnPerfil->Visible = true;
		btnPerfil->Text = gcnew String(cliente->getNombre().c_str());
	}
}
private: System::Void pnl_contenedor_SizeChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pnl_contenedor_Resize(System::Object^ sender, System::EventArgs^ e) {
	this->Invalidate();
}
};
}
