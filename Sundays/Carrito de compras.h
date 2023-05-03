#pragma once
#include "Carrito.h"
#include "HistorialCompras.h"
namespace Sundays {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Carritodecompras
	/// </summary>
	public ref class Carritodecompras : public System::Windows::Forms::Form
	{
	public:
		Carritodecompras(CarritoDeCompras* ccarro, Cliente* cliente) :carro(ccarro), client(cliente)
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
		~Carritodecompras()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbl_productos;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Panel^ pnl_carro;
	private: System::Windows::Forms::Label^ lbl_name;
	private: System::Windows::Forms::Label^ lbl_precio;
	private: System::Windows::Forms::Label^ lbl_cantidad;
	private: System::Windows::Forms::Label^ lbl_anscant;
	private: System::Windows::Forms::Label^ lbl_ansprecio;
	private: System::Windows::Forms::Label^ lbl_total;
	private: System::Windows::Forms::Button^ btn_pagar;
		   CarritoDeCompras* carro;
		   Cliente* client;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_productos = (gcnew System::Windows::Forms::Label());
			this->pnl_carro = (gcnew System::Windows::Forms::Panel());
			this->lbl_name = (gcnew System::Windows::Forms::Label());
			this->lbl_precio = (gcnew System::Windows::Forms::Label());
			this->lbl_cantidad = (gcnew System::Windows::Forms::Label());
			this->lbl_anscant = (gcnew System::Windows::Forms::Label());
			this->lbl_ansprecio = (gcnew System::Windows::Forms::Label());
			this->lbl_total = (gcnew System::Windows::Forms::Label());
			this->btn_pagar = (gcnew System::Windows::Forms::Button());
			this->pnl_carro->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbl_productos
			// 
			this->lbl_productos->AutoSize = true;
			this->lbl_productos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_productos->Location = System::Drawing::Point(3, 0);
			this->lbl_productos->Name = L"lbl_productos";
			this->lbl_productos->Size = System::Drawing::Size(0, 18);
			this->lbl_productos->TabIndex = 0;
			// 
			// pnl_carro
			// 
			this->pnl_carro->AutoScroll = true;
			this->pnl_carro->Controls->Add(this->lbl_productos);
			this->pnl_carro->Location = System::Drawing::Point(32, 45);
			this->pnl_carro->Name = L"pnl_carro";
			this->pnl_carro->Size = System::Drawing::Size(258, 193);
			this->pnl_carro->TabIndex = 1;
			// 
			// lbl_name
			// 
			this->lbl_name->AutoSize = true;
			this->lbl_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_name->Location = System::Drawing::Point(28, 18);
			this->lbl_name->Name = L"lbl_name";
			this->lbl_name->Size = System::Drawing::Size(190, 20);
			this->lbl_name->TabIndex = 2;
			this->lbl_name->Text = L"Nombre de los productos:";
			// 
			// lbl_precio
			// 
			this->lbl_precio->AutoSize = true;
			this->lbl_precio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_precio->Location = System::Drawing::Point(437, 18);
			this->lbl_precio->Name = L"lbl_precio";
			this->lbl_precio->Size = System::Drawing::Size(57, 20);
			this->lbl_precio->TabIndex = 3;
			this->lbl_precio->Text = L"Precio:";
			// 
			// lbl_cantidad
			// 
			this->lbl_cantidad->AutoSize = true;
			this->lbl_cantidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_cantidad->Location = System::Drawing::Point(315, 18);
			this->lbl_cantidad->Name = L"lbl_cantidad";
			this->lbl_cantidad->Size = System::Drawing::Size(77, 20);
			this->lbl_cantidad->TabIndex = 4;
			this->lbl_cantidad->Text = L"Cantidad:";
			// 
			// lbl_anscant
			// 
			this->lbl_anscant->AutoSize = true;
			this->lbl_anscant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_anscant->Location = System::Drawing::Point(320, 46);
			this->lbl_anscant->Name = L"lbl_anscant";
			this->lbl_anscant->Size = System::Drawing::Size(0, 18);
			this->lbl_anscant->TabIndex = 5;
			// 
			// lbl_ansprecio
			// 
			this->lbl_ansprecio->AutoSize = true;
			this->lbl_ansprecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_ansprecio->Location = System::Drawing::Point(444, 46);
			this->lbl_ansprecio->Name = L"lbl_ansprecio";
			this->lbl_ansprecio->Size = System::Drawing::Size(0, 18);
			this->lbl_ansprecio->TabIndex = 6;
			// 
			// lbl_total
			// 
			this->lbl_total->AutoSize = true;
			this->lbl_total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_total->Location = System::Drawing::Point(396, 250);
			this->lbl_total->Name = L"lbl_total";
			this->lbl_total->Size = System::Drawing::Size(48, 20);
			this->lbl_total->TabIndex = 7;
			this->lbl_total->Text = L"Total:";
			// 
			// btn_pagar
			// 
			this->btn_pagar->BackColor = System::Drawing::Color::Maroon;
			this->btn_pagar->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pagar->ForeColor = System::Drawing::Color::White;
			this->btn_pagar->Location = System::Drawing::Point(115, 244);
			this->btn_pagar->Name = L"btn_pagar";
			this->btn_pagar->Size = System::Drawing::Size(83, 34);
			this->btn_pagar->TabIndex = 8;
			this->btn_pagar->Text = L"Pagar";
			this->btn_pagar->UseVisualStyleBackColor = false;
			this->btn_pagar->Click += gcnew System::EventHandler(this, &Carritodecompras::btn_pagar_Click);
			// 
			// Carritodecompras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(545, 295);
			this->Controls->Add(this->btn_pagar);
			this->Controls->Add(this->lbl_total);
			this->Controls->Add(this->lbl_ansprecio);
			this->Controls->Add(this->lbl_anscant);
			this->Controls->Add(this->lbl_cantidad);
			this->Controls->Add(this->lbl_precio);
			this->Controls->Add(this->lbl_name);
			this->Controls->Add(this->pnl_carro);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Carritodecompras";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Carritodecompras";
			this->Load += gcnew System::EventHandler(this, &Carritodecompras::Carritodecompras_Load);
			this->pnl_carro->ResumeLayout(false);
			this->pnl_carro->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Carritodecompras_Load(System::Object^ sender, System::EventArgs^ e) {
		MiVector<Item> prod=carro->operator MiVector<Item>();//de tipo de ccarrito de compras a un mivector
		float tot = 0.00;
		for (int i = 0; i < prod.size(); i++)
		{
			lbl_productos->Text += gcnew String(prod.at(i).producto.getNombre().c_str()) + "\n";
			lbl_anscant->Text += gcnew String(std::to_string(prod.at(i).cant).c_str()) + "\n";
			lbl_ansprecio->Text +=(prod.at(i).producto.getPrecio() * prod.at(i).cant).ToString("F2") + "\n";//f2 formatea a 2 decimales
			tot += (prod.at(i).producto.getPrecio() * prod.at(i).cant);
		}
		lbl_total->Text = "Total: " + tot.ToString("F2");
	}
	private: System::Void btn_pagar_Click(System::Object^ sender, System::EventArgs^ e) {
		HistorialCompras historial=HistorialCompras(*client, *carro);
		historial.Guardar();
		MessageBox::Show("Su compra se ha realizado con exito");
	}
};
}
