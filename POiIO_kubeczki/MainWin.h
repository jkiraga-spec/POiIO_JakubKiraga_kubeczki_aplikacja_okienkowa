#pragma once
#include "OAutorze.h"

namespace POiIOkubeczki {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MainWin
	/// </summary>
	public ref class MainWin : public System::Windows::Forms::Form
	{
	public:
		MainWin(void)
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
		~MainWin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ edytacjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ substancjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dodajDoMenuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ statystykaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ kubekToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dodajKubekToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuñKubekToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dodajSubstancjeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oAutorzeToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWin::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->edytacjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->substancjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dodajDoMenuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statystykaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kubekToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dodajKubekToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuñKubekToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dodajSubstancjeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->edytacjaToolStripMenuItem, this->oAutorzeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MainWin::menuStrip1_ItemClicked);
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->zamknijToolStripMenuItem });
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWin::zamknijToolStripMenuItem_Click);
			// 
			// edytacjaToolStripMenuItem
			// 
			this->edytacjaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->substancjeToolStripMenuItem,
					this->kubekToolStripMenuItem
			});
			this->edytacjaToolStripMenuItem->Name = L"edytacjaToolStripMenuItem";
			this->edytacjaToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->edytacjaToolStripMenuItem->Text = L"Edytacja";
			// 
			// substancjeToolStripMenuItem
			// 
			this->substancjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->dodajDoMenuToolStripMenuItem,
					this->statystykaToolStripMenuItem
			});
			this->substancjeToolStripMenuItem->Name = L"substancjeToolStripMenuItem";
			this->substancjeToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->substancjeToolStripMenuItem->Text = L"Substancje";
			// 
			// dodajDoMenuToolStripMenuItem
			// 
			this->dodajDoMenuToolStripMenuItem->Name = L"dodajDoMenuToolStripMenuItem";
			this->dodajDoMenuToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->dodajDoMenuToolStripMenuItem->Text = L"Dodaj do menu";
			// 
			// statystykaToolStripMenuItem
			// 
			this->statystykaToolStripMenuItem->Name = L"statystykaToolStripMenuItem";
			this->statystykaToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->statystykaToolStripMenuItem->Text = L"Statystyka";
			// 
			// kubekToolStripMenuItem
			// 
			this->kubekToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->dodajKubekToolStripMenuItem,
					this->usuñKubekToolStripMenuItem, this->dodajSubstancjeToolStripMenuItem
			});
			this->kubekToolStripMenuItem->Name = L"kubekToolStripMenuItem";
			this->kubekToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->kubekToolStripMenuItem->Text = L"Kubek";
			// 
			// dodajKubekToolStripMenuItem
			// 
			this->dodajKubekToolStripMenuItem->Name = L"dodajKubekToolStripMenuItem";
			this->dodajKubekToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->dodajKubekToolStripMenuItem->Text = L"Dodaj kubek";
			// 
			// usuñKubekToolStripMenuItem
			// 
			this->usuñKubekToolStripMenuItem->Name = L"usuñKubekToolStripMenuItem";
			this->usuñKubekToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->usuñKubekToolStripMenuItem->Text = L"Usuñ kubek";
			// 
			// dodajSubstancjeToolStripMenuItem
			// 
			this->dodajSubstancjeToolStripMenuItem->Name = L"dodajSubstancjeToolStripMenuItem";
			this->dodajSubstancjeToolStripMenuItem->Size = System::Drawing::Size(164, 22);
			this->dodajSubstancjeToolStripMenuItem->Text = L"Dodaj substancje";
			// 
			// oAutorzeToolStripMenuItem
			// 
			this->oAutorzeToolStripMenuItem->Name = L"oAutorzeToolStripMenuItem";
			this->oAutorzeToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->oAutorzeToolStripMenuItem->Text = L"O autorze";
			this->oAutorzeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWin::oAutorzeToolStripMenuItem_Click);
			// 
			// MainWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainWin";
			this->Text = L"Program kubeczki";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult answer;
		answer = MessageBox::Show("Czy napewno chcesz zamkn¹æ aplikacjê?", "Program kubeczki", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (answer == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
	}
private: System::Void oAutorzeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OAutorze^ autor_info = gcnew OAutorze();
	autor_info->Show();
}
};
}
