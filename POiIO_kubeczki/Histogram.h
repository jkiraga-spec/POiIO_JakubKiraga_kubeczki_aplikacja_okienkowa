#pragma once
#include <vector>
#include "TCup.h"
//#include "MainWin.h"
//#include "Tsubstance.h"
namespace POiIOkubeczki {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Podsumowanie informacji o Histogram
	/// </summary>
	public ref class Histogram : public System::Windows::Forms::Form
	{
	private:
		Chart^ chart1;
		ChartArea^ area;
		Series^ series;
	public:
		Histogram(void)
		{
			InitializeComponent();
			init_chart();
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Histogram()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// Histogram
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"Histogram";
			this->Text = L"Histogram";
			this->Load += gcnew System::EventHandler(this, &Histogram::Histogram_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: Void init_chart()
		{
			//create chart
			chart1 = gcnew Chart();
			chart1->Dock = DockStyle::Fill;
			this->Controls->Add(chart1);

			//create chart area
			area = gcnew ChartArea("MainArea");
			area->AxisX->Title = "Substancje [-]";
			area->AxisY->Title = "Zu¿yta objêtoœæ w kubkach [ml]";
			chart1->ChartAreas->Add(area);

			//create data series
			series = gcnew Series("Dane");
			series->ChartType = SeriesChartType::Column;
			series->ChartArea = "MainArea";

			chart1->Series->Add(series);
		}
		private: System::Void Histogram_Load(System::Object^ sender, System::EventArgs^ e) {
			update_subs_hist();
		}
		private: Void test()
		{
			chart1->Series["Dane"]->Points->Clear();

			series->Points->AddXY(0, 1);
			series->Points->AddXY(1, 3);
			series->Points->AddXY(2, 2);
			series->Points->AddXY(3, 5);

			chart1->Invalidate();
		}
			   
		private: Void update_subs_hist()
		{
			chart1->Series["Dane"]->Points->Clear();

			std::vector<std::string> subs_name;
			std::vector<int> vols;
			std::vector<std::vector<int>> colors;
			get_hist_data(&subs_name, &vols, &colors);


			for (int i = 0; i < vols.size(); i++)
			{
				String^ name_cli = gcnew String(subs_name[i].c_str());
				series->Points->AddXY(name_cli, vols[i]);
				series->Points[i]->Color = Color::FromArgb(colors[i][0], colors[i][1], colors[i][2]);
			}
			chart1->Invalidate();
		}
			   private: void get_hist_data(std::vector<std::string>* subs_name, std::vector<int>* vols, std::vector<std::vector<int>>* colors)
			   {
				   int cup_count = cups_pnt.size();
					int subs_count = substancje.size();

				   for (int i_sub = 0; i_sub < subs_count; i_sub++)
				   {
					   std::string name = substancje[i_sub].get_name();
					   std::vector<int> color = substancje[i_sub].get_color();
					   (*subs_name).push_back(name);
					   (*vols).push_back(0);
					   (*colors).push_back(color);

					   
					   for (int i_cup = 0; i_cup < cup_count; i_cup++)
					   {
						   std::vector<TSubstance> subs_in_cup = cups_pnt[i_cup]->get_cup_substacnes();
						   int subs_in_cup_count = subs_in_cup.size();

							   for (int i_sc=0; i_sc < subs_in_cup_count; i_sc++)
							   {
								   
								   if (name == subs_in_cup[i_sc].get_name())
								   {
									   std::vector<double> cup_vols = cups_pnt[i_cup]->get_cup_volumes();
									   (*vols)[i_sub] +=  cup_vols[i_sc] * 1e6;
								   }
							   }
					   }
					   
				   }
			   }
			   
	};
}
