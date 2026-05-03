#pragma once
#include <msclr/marshal_cppstd.h>
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
		Generic::List<Label^>^ lbl_subs = gcnew Generic::List<Label^>();
		int cupID = -1;
		bool add_substance_active = false;
	private: System::Windows::Forms::ComboBox^ subList;

	private: System::Windows::Forms::Button^ wlej;
	private: System::Windows::Forms::Button^ anuluj;
	private: System::Windows::Forms::TextBox^ subMl;


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
			this->wlej = (gcnew System::Windows::Forms::Button());
			this->anuluj = (gcnew System::Windows::Forms::Button());
			this->subMl = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->edytacjaToolStripMenuItem, this->oAutorzeToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(571, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MainWin::menuStrip1_ItemClicked);
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->zamknijToolStripMenuItem });
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(145, 26);
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
			this->edytacjaToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->edytacjaToolStripMenuItem->Text = L"Edytacja";
			// 
			// substancjeToolStripMenuItem
			// 
			this->substancjeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->dodajDoMenuToolStripMenuItem,
					this->statystykaToolStripMenuItem
			});
			this->substancjeToolStripMenuItem->Name = L"substancjeToolStripMenuItem";
			this->substancjeToolStripMenuItem->Size = System::Drawing::Size(163, 26);
			this->substancjeToolStripMenuItem->Text = L"Substancje";
			// 
			// dodajDoMenuToolStripMenuItem
			// 
			this->dodajDoMenuToolStripMenuItem->Name = L"dodajDoMenuToolStripMenuItem";
			this->dodajDoMenuToolStripMenuItem->Size = System::Drawing::Size(196, 26);
			this->dodajDoMenuToolStripMenuItem->Text = L"Dodaj do menu";
			// 
			// statystykaToolStripMenuItem
			// 
			this->statystykaToolStripMenuItem->Name = L"statystykaToolStripMenuItem";
			this->statystykaToolStripMenuItem->Size = System::Drawing::Size(196, 26);
			this->statystykaToolStripMenuItem->Text = L"Statystyka";
			// 
			// kubekToolStripMenuItem
			// 
			this->kubekToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->dodajKubekToolStripMenuItem,
					this->delCupMenuItem, this->addSubMenuItem
			});
			this->kubekToolStripMenuItem->Name = L"kubekToolStripMenuItem";
			this->kubekToolStripMenuItem->Size = System::Drawing::Size(163, 26);
			this->kubekToolStripMenuItem->Text = L"Kubek";
			// 
			// dodajKubekToolStripMenuItem
			// 
			this->dodajKubekToolStripMenuItem->Name = L"dodajKubekToolStripMenuItem";
			this->dodajKubekToolStripMenuItem->Size = System::Drawing::Size(206, 26);
			this->dodajKubekToolStripMenuItem->Text = L"Dodaj kubek";
			this->dodajKubekToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWin::dodajKubekToolStripMenuItem_Click);
			// 
			// delCupMenuItem
			// 
			this->delCupMenuItem->Enabled = false;
			this->delCupMenuItem->Name = L"delCupMenuItem";
			this->delCupMenuItem->Size = System::Drawing::Size(206, 26);
			this->delCupMenuItem->Text = L"Usuñ kubek";
			// 
			// addSubMenuItem
			// 
			this->addSubMenuItem->Enabled = false;
			this->addSubMenuItem->Name = L"addSubMenuItem";
			this->addSubMenuItem->Size = System::Drawing::Size(206, 26);
			this->addSubMenuItem->Text = L"Dodaj substancje";
			this->addSubMenuItem->Click += gcnew System::EventHandler(this, &MainWin::addSubMenuItem_Click);
			// 
			// oAutorzeToolStripMenuItem
			// 
			this->oAutorzeToolStripMenuItem->Name = L"oAutorzeToolStripMenuItem";
			this->oAutorzeToolStripMenuItem->Size = System::Drawing::Size(88, 24);
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
			this->subList->Location = System::Drawing::Point(12, 273);
			this->subList->Margin = System::Windows::Forms::Padding(4);
			this->subList->Name = L"subList";
			this->subList->Size = System::Drawing::Size(199, 24);
			this->subList->TabIndex = 1;
			this->subList->Visible = false;
			// 
			// wlej
			// 
			this->wlej->Location = System::Drawing::Point(12, 330);
			this->wlej->Margin = System::Windows::Forms::Padding(4);
			this->wlej->Name = L"wlej";
			this->wlej->Size = System::Drawing::Size(76, 28);
			this->wlej->TabIndex = 3;
			this->wlej->Text = L"Wlej";
			this->wlej->UseVisualStyleBackColor = true;
			this->wlej->Visible = false;
			this->wlej->Click += gcnew System::EventHandler(this, &MainWin::wlej_Click);
			// 
			// anuluj
			// 
			this->anuluj->Location = System::Drawing::Point(135, 330);
			this->anuluj->Margin = System::Windows::Forms::Padding(4);
			this->anuluj->Name = L"anuluj";
			this->anuluj->Size = System::Drawing::Size(76, 28);
			this->anuluj->TabIndex = 4;
			this->anuluj->Text = L"Anuluj";
			this->anuluj->UseVisualStyleBackColor = true;
			this->anuluj->Visible = false;
			this->anuluj->Click += gcnew System::EventHandler(this, &MainWin::anuluj_Click);
			// 
			// subMl
			// 
			this->subMl->Location = System::Drawing::Point(12, 302);
			this->subMl->Margin = System::Windows::Forms::Padding(4);
			this->subMl->Name = L"subMl";
			this->subMl->Size = System::Drawing::Size(199, 22);
			this->subMl->TabIndex = 5;
			this->subMl->Text = L"Wpisz iloœæ w [ml]";
			this->subMl->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->subMl->Visible = false;
			this->subMl->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MainWin::subMl_KeyUp);
			this->subMl->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainWin::subMl_MouseDown);
			// 
			// MainWin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(571, 471);
			this->Controls->Add(this->subMl);
			this->Controls->Add(this->anuluj);
			this->Controls->Add(this->wlej);
			this->Controls->Add(this->subList);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainWin";
			this->Text = L"Program kubeczki";
			this->Load += gcnew System::EventHandler(this, &MainWin::MainWin_Load);
			this->Click += gcnew System::EventHandler(this, &MainWin::MainWin_Click);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: Void addTCup() {
		TCup* cup = new TCup();
		cups_pnt.push_back(cup);
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
		subMl->Visible = false;
		wlej->Visible = false;
		anuluj->Visible = false;

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
	}
	void add_substance_to_cup(int vol) {
		String^ selected = subList->SelectedItem->ToString();
		std::string name = msclr::interop::marshal_as<std::string>(selected);

		TCup* cup_pnt = cups_pnt[cupID];
		cup_pnt->add(name, vol);
		show_cup_info();
	}
	void show_cup_info() {
		TCup* cup_pnt = cups_pnt[cupID];
		std::string info = cup_pnt->info(cupID);

		String^ info_cli = gcnew String(info.c_str());
		MessageBox::Show(info_cli, "Program kalkulator", MessageBoxButtons::OK, MessageBoxIcon::Information);

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
		if (add_substance_active == false)
		{
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
			//cups[cupID]->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
		}
	}

private: System::Void MainWin_Click(System::Object^ sender, System::EventArgs^ e) {
	if (add_substance_active == false) cleanLblCup();
}
private: System::Void addSubMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	add_substance_active = true;
	menuStrip1->Enabled = false;
	fillSubList();
	subList->Location = System::Drawing::Point(12 + (10 + 199) * cupID, 273);
	subMl->Location = System::Drawing::Point(12 + (10 + 199) * cupID, 302);
	wlej->Location = System::Drawing::Point(12 + (10 + 199) * cupID, 330);
	anuluj->Location = System::Drawing::Point(135 + (10 + 199) * cupID, 330);

	subMl->Text = L"Wpisz iloœæ w [ml]";

	subList->Visible = true;
	subMl->Visible = true;
	wlej->Visible = true;
	anuluj->Visible = true;
}
private: System::Void MainWin_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void subMl_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	subMl->Text = "";
}
private: System::Void subMl_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	String^ text = subMl->Text;

	try {
		int num = Convert::ToInt32(text);

		if (num <= 0){
			MessageBox::Show("WprowadŸ liczbê ca³kowit¹ dodatni¹", "Program kalkulator", MessageBoxButtons::OK, MessageBoxIcon::Error);
			subMl->Text = "";
		}
	}
	catch (...){
		MessageBox::Show("WprowadŸ liczbê", "Program kalkulator", MessageBoxButtons::OK, MessageBoxIcon::Error);

		if(text->Length > 0) subMl->Text = text ->Substring(0, text->Length - 1);
		else subMl->Text = "";
	}
}
private: System::Void anuluj_Click(System::Object^ sender, System::EventArgs^ e) {
	cleanLblCup();
	add_substance_active = false;
	menuStrip1->Enabled = true;
}
	private: System::Void wlej_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = subMl->Text;
		int vol = 0;
		try {
			vol = Convert::ToInt32(text);
			//int num = Convert::ToInt32(text);
			int index = subList->SelectedIndex;

			if (index >= 0){
				add_substance_to_cup(vol);
				erase_cup_substances();
				draw_cup_substances();

				cleanLblCup();
				add_substance_active = false;
				menuStrip1->Enabled = true;
				//MessageBox::Show("Poprawne dane", "Program kalkulator", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Wybierz ciecz do dolania!", "Program kalkulator", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (...) {
			MessageBox::Show("WprowadŸ liczbê","Program kalkulator", MessageBoxButtons::OK, MessageBoxIcon::Error);
			subMl->Text = "";
		}
	}

		   void draw_cup_substances()
		   {
			   TCup* cup_pnt = cups_pnt[cupID];
			   std::vector<TSubstance> subs = cup_pnt->get_cup_substacnes();
			   std::vector<double> vols = cup_pnt->get_cup_volumes();

			   int vol_in_cup = 0;

			   for (int i = 0; i < vols.size(); i++) {
				   TSubstance sub = subs[i];
				   std::string name = sub.get_name();
				   int vol = vols[i] * 1e6;
				   std::vector<int>color_rgb = sub.get_color();
				   String^ name_cli = gcnew String(name.c_str());
				   name_cli += L": " + Convert::ToString(vol) + L" ml";

				   Label^ cup_substance = (gcnew System::Windows::Forms::Label());
				   cup_substance->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				   cup_substance->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

				   cup_substance->Size = System::Drawing::Size(199-12, vol);
				   cup_substance->Location = System::Drawing::Point(12+6 + (10 + 199) * cupID, 238 - vol_in_cup - vol);
				   cup_substance->Tag = Convert::ToString(cupID);
				   cup_substance->Text = name_cli;
				   cup_substance->BackColor = Color::FromArgb(color_rgb[0], color_rgb[1], color_rgb[2]);
				   cup_substance->ForeColor = Color::FromArgb(255 - color_rgb[0], 255 - color_rgb[1], 255 - color_rgb[2]);

				   cup_substance->BringToFront();
				   this->Controls->Add(cup_substance);
				   lbl_subs->Add(cup_substance);
				   vol_in_cup += vol;
			   }

			   cups[cupID]->SendToBack();

	}

		   void erase_cup_substances() {
			   for each (Label ^ sub in lbl_subs) {
				   if (sub && (Convert::ToInt16(sub->Tag) == cupID))
				   {
					   Controls->Remove(sub);
					   sub = nullptr;
					   delete sub;
				   }
			   }
		   }
};
}
