#pragma once
#include <vector>
#include "OAutorze.h"
#include "TCup.h"

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
	private:
		Generic::List<PictureBox^>^ cups = gcnew Generic::List<PictureBox^>();
		Generic::List<Label^>^ lbl_cups = gcnew Generic::List<Label^>();
	private: System::Windows::Forms::ComboBox^ subList;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
		   int cupID = -1;

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
	private: System::Windows::Forms::ToolStripMenuItem^ delCupMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ addSubMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ oAutorzeToolStripMenuItem;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
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
			this->delCupMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addSubMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oAutorzeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->subList = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->menuStrip1->Size = System::Drawing::Size(377, 24);
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
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(117, 22);
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
			this->substancjeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
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
					this->delCupMenuItem, this->addSubMenuItem
			});
			this->kubekToolStripMenuItem->Name = L"kubekToolStripMenuItem";
			this->kubekToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->kubekToolStripMenuItem->Text = L"Kubek";
			// 
			// dodajKubekToolStripMenuItem
			// 
			this->dodajKubekToolStripMenuItem->Name = L"dodajKubekToolStripMenuItem";
			this->dodajKubekToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->dodajKubekToolStripMenuItem->Text = L"Dodaj kubek";
			this->dodajKubekToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWin::dodajKubekToolStripMenuItem_Click);
			// 
			// delCupMenuItem
			// 
			this->delCupMenuItem->Enabled = false;
			this->delCupMenuItem->Name = L"delCupMenuItem";
			this->delCupMenuItem->Size = System::Drawing::Size(180, 22);
			this->delCupMenuItem->Text = L"Usuñ kubek";
			// 
			// addSubMenuItem
			// 
			this->addSubMenuItem->Enabled = false;
			this->addSubMenuItem->Name = L"addSubMenuItem";
			this->addSubMenuItem->Size = System::Drawing::Size(180, 22);
			this->addSubMenuItem->Text = L"Dodaj substancje";
			this->addSubMenuItem->Click += gcnew System::EventHandler(this, &MainWin::addSubMenuItem_Click);
			// 
			// oAutorzeToolStripMenuItem
			// 
			this->oAutorzeToolStripMenuItem->Name = L"oAutorzeToolStripMenuItem";
			this->oAutorzeToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->oAutorzeToolStripMenuItem->Text = L"O autorze";
			this->oAutorzeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWin::oAutorzeToolStripMenuItem_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"cup.png");
			// 
			// subList
			// 
			this->subList->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->subList->FormattingEnabled = true;
			this->subList->Location = System::Drawing::Point(12, 237);
			this->subList->Name = L"subList";
			this->subList->Size = System::Drawing::Size(199, 21);
			this->subList->TabIndex = 1;
			this->subList->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(277, 132);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 163);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(105, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(77, 96);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// MainWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->subList);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainWin";
			this->Text = L"Program kubeczki";
			this->Click += gcnew System::EventHandler(this, &MainWin::MainWin_Click);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Void addTCup() {
		TCup cup;
		cups_pnt.push_back(&cup);
	}
	private: Void addCup() {
		PictureBox^ pb = gcnew PictureBox();
		pb->Size = Drawing::Size(199, 319);
		pb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
		pb->Image = imageList1->Images[0];

		pb->Location = Point(12 + (10 + 199) * cups->Count, 41);
		pb->Name = L"cup" + Convert::ToString(cups->Count);

		this->Controls->Add(pb);
		cups->Add(pb);

	}

	private: Void addLblCup() {
		Label^ lbl = (gcnew System::Windows::Forms::Label());
		lbl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
		lbl->Size = Drawing::Size(199, 22);
		lbl->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

		lbl->Location = System::Drawing::Point(12 + (10 + 199) * lbl_cups->Count, 243);
		lbl->Name = L"lblCup" + Convert::ToString(lbl_cups->Count);
		lbl->Text = L"cup #" + Convert::ToString(lbl_cups->Count);
		
		lbl->Click += gcnew System::EventHandler(this, &MainWin::selectCup);

		this->Controls->Add(lbl);
		lbl_cups->Add(lbl);
	}

	private: Void cleanLblCup() {
		for each(Label ^ lbl in lbl_cups)
		{
			lbl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			lbl->ForeColor = System::Drawing::Color::FromArgb(0, 0, 0);
		}
		delCupMenuItem->Enabled = false;
		delCupMenuItem->Text = L"Usuñ kubek";
		addSubMenuItem->Enabled = false;
		addSubMenuItem->Text = L"Dodaj substancje";
		subList->Visible = false;
		cupID = -1;
		}

	private: Void getCupID(Label^ lbl) {
		int count = lbl_cups->Count;
		int _id = -1;
		bool run = true;

		while (run)
		{
			_id += 1;

			if (lbl == lbl_cups[_id]) run = false;
			else if ((_id + 1 == count) && (run == true))
			{
				_id = -1;
				run = false;
			}
		}
		cupID = _id;
	}

	private: Void fillSubList() {
		subList->Items->Clear();
		int count = substancje.size();

		for (int i = 0; i < count; i++) {
			std::string name = substancje[i].get_name();
			String^ name_cli = gcnew String(name.c_str());
			subList->Items->Add(name_cli);
		}
		{
			subList->Items->Add(gcnew String(substancje[i].get_name().c_str()));
		}
	}
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
private: System::Void dodajKubekToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	addTCup();
	addCup();
	addLblCup();
}
private: System::Void selectCup(System::Object^ sender, System::EventArgs^ e) {
	cleanLblCup();
	Label^ lbl = (Label^)sender;
	lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
	lbl->Font = gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238));
	lbl->ForeColor = System::Drawing::Color::FromArgb(255, 0, 0);

	getCupID(lbl);
	delCupMenuItem->Enabled = true;
	delCupMenuItem->Text = L"Usuñ kubek #" + Convert::ToString(cupID);
	addSubMenuItem->Enabled = true;
	addSubMenuItem->Text = L"Dodaj substancje do kubka #" + Convert::ToString(cupID);
}

private: System::Void MainWin_Click(System::Object^ sender, System::EventArgs^ e) {
	cleanLblCup();
}
private: System::Void addSubMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	fillSubList();
	subList->Location = System::Drawing::Point(12 + (10 + 199) * cupID, 273);
	subList->Visible = true;
}
};
}
