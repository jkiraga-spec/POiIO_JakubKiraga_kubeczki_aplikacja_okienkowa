#pragma once

namespace POiIOkubeczki {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o OAutorze
	/// </summary>
	public ref class OAutorze : public System::Windows::Forms::Form
	{
	public:
		OAutorze(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~OAutorze()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ autor_info;
	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->autor_info = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// autor_info
			// 
			this->autor_info->Location = System::Drawing::Point(1, 1);
			this->autor_info->Multiline = true;
			this->autor_info->Name = L"autor_info";
			this->autor_info->ReadOnly = true;
			this->autor_info->Size = System::Drawing::Size(285, 261);
			this->autor_info->TabIndex = 0;
			this->autor_info->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->autor_info->TextChanged += gcnew System::EventHandler(this, &OAutorze::autor_info_TextChanged);
			// 
			// OAutorze
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->autor_info);
			this->Name = L"OAutorze";
			this->Text = L"OAutorze";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void autor_info_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		autor_info->Text = "\r\n\r\nProgram Kubeczki\r\n=====\r\nAutor: Jakub Kiraga\r\n=====\r\n2026";
	}
	};
}
