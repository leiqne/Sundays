#pragma once

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
		Carritodecompras(void)
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
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_productos = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbl_productos
			// 
			this->lbl_productos->AutoSize = true;
			this->lbl_productos->Location = System::Drawing::Point(53, 50);
			this->lbl_productos->Name = L"lbl_productos";
			this->lbl_productos->Size = System::Drawing::Size(0, 13);
			this->lbl_productos->TabIndex = 0;
			// 
			// Carritodecompras
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(495, 281);
			this->Controls->Add(this->lbl_productos);
			this->Name = L"Carritodecompras";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Carritodecompras";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
