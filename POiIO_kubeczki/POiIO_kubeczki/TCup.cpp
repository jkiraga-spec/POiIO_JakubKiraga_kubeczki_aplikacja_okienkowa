//#include "pch.h"
#include "TCup.h"

using namespace std;
vector<TCup*> cups_pnt;
int TCup::add(TSubstance substance, double  volume_in_ml)
{
	int status = 0;

	string new_name = substance.get_name();
	int substance_pos_in_cup = get_substance_id(new_name);

	if (substance_pos_in_cup == -1)
	{
		substances.push_back(substance);
		volumes.push_back(volume_in_ml / 1e6);
		status = 1;
	}
	else {
		this->volumes[substance_pos_in_cup] += volume_in_ml / 1e6;
		status = 2;
	}
	return status;
}

int TCup::add(std::string name, double volume_in_ml)
{
	int status = 0;

	int _id = get_substance_id(name);

	if (_id >= 0)
	{
		status = this->add(substancje[_id], volume_in_ml);
	}
	else {
		status = -1;
	}
	return status;
}


int TCup::get_substance_id(string name)
{
	int count = substancje.size();
	int _id = -1;
	bool run = true;

	while (run)
	{
		_id += 1;
		string sub_name = substancje[_id].get_name();

		if (sub_name == name) run = false;
		/*
		if ((_id + 1 == count) && (run == true))
		{
			cout << "Nie znaleziono plynu o podanej nazwie: \"" << name << "\"!\n";
			run = false;
			_id = -1;
		}
		*/
	}
	return _id;
}
std::vector<TSubstance> TCup::get_cup_substances()
{
	return substances;
}
std::vector<double> TCup::get_cup_volumes()
{
	return volumes;
}
/*
void TCup::show()
{
	int count = substances.size();

	if (count == 0)
	{
		cout << "Kubek jest pusty\n" << endl;
	}
	else
	{
		double volume_total = 0;
		for (int i = 0; i < count; i++)
		{
			volume_total = volume_total + volumes[i];
		}
		if (volume_total > cup_volume)
		{
			cout << "Kubek zostal przelany\n" << endl;
		}
		else
		{
			for (int i = 0; i < count; i++)
			{
				double mass = substances[i].get_ro() * volumes[i] * 1000;
				cout << substances[i].get_name()
					<< "; volume: " << volumes[i] * 1e6 << " ml"
					<< "; mass: " << mass << " g" << endl;
			}
			print_coe_vol();
			print_coe_mass();

			cout << endl;
		}
	}
}

*/
/*
void TCup::print_coe_vol()
{
	int count = substances.size();
	cout << "Volume coe: ";
	double volume_total = 0;
	for (int i = 0; i < count; i++)
	{
		volume_total = volume_total + volumes[i];
	}
	for (int i = 0; i < count; i++)
	{
		int j = i + 1;

		cout << 100 * volumes[i] / volume_total << " - ";
	}
	cout << endl;
}


void TCup::print_coe_mass()
{
	int count = substances.size();
	cout << "Mass coe: ";
	double mass_total = 0;
	for (int i = 0; i < count; i++)
	{
		mass_total = mass_total + volumes[i] * substances[i].get_ro() * 1000;
	}
	for (int i = 0; i < count; i++)
	{

		cout << 100 * volumes[i] * substances[i].get_ro() * 1000 / mass_total << " - ";

	}
	cout << "\n";
}
*/
/*
int TCup::reduce_repeatitons(TSubstance substance)
{
	int count = substances.size();
	int id_rep = -1;
	for (int i = 0; i < count; i++)
	{
		if (substance.get_name() == substances[i].get_name())
		{
			id_rep = i;
		}
	}
	return id_rep;
}

void TCup::desired_vol_percentage(std::string name, double vol_percentage)
{
	int count = substances.size();
	double volume_total = 0;
	for (int i = 0; i < count; i++)
	{
		volume_total = volume_total + volumes[i];
	}
	if ((volume_total > 0) && (volume_total < cup_volume))
	{
		double water_volume = volumes[get_substance_id(name)];
		cout << "\nAktualnie kubek zawiera objetosciowo " << water_volume / volume_total * 100 << " % substancji" << endl;
		double add_water = (vol_percentage / 100 * volume_total - water_volume) / (1 - vol_percentage / 100);

		if ((vol_percentage >= 100) || (vol_percentage <= 0))
		{
			cout << "Wartosc procentowa musi zawierac sie w przedziale od 0 do 100\n" << endl;
		}
		else
		{
			if (add_water > 0)
			{
				cout << "Aby uzyskac " << vol_percentage << " % substancji, nalezy dolac " << add_water * 1e6 << " ml\n" << endl;
			}
			else if (add_water == 0)
			{
				cout << "Osiągnieto zadana wartosc\n" << endl;
			}
			else
			{
				cout << "Nie da sie osiągnac zadanej wartosci\n" << endl;
			}
		}
	}
	else if (volume_total > cup_volume)
	{
		cout << "Nie da sie okreslic stosunku dla przelanego kubka\n" << endl;
	}
	else
	{
		cout << "Kubek jest pusty nalezy cos do niego nalac by skorzystac z tej funkcji!!\n" << endl;
	}
}


void TCup::desired_mass_percentage(std::string name, double mass_percentage)
{
	int count = substances.size();
	double mass_total = 0;
	double volume_total = 0;
	for (int i = 0; i < count; i++)
	{
		mass_total = mass_total + volumes[i] * substances[i].get_ro() * 1000;
	}
	for (int i = 0; i < count; i++)
	{
		volume_total = volume_total + volumes[i];
	}
	if ((mass_total > 0) && (volume_total < cup_volume))
	{
		double water_mass = volumes[get_substance_id(name)] * substances[get_substance_id(name)].get_ro() * 1000;
		cout << "Aktualnie kubek zawiera masowo " << water_mass / mass_total * 100 << " % substancji\n";

		if ((mass_percentage >= 100) || (mass_percentage <= 0))
		{
			cout << "Wartosc procentowa musi zawierac sie w przedziale od 0 do 100!!\n" << endl;
		}
		else
		{
			double add_water = (mass_percentage / 100 * mass_total - water_mass) / ((1 - mass_percentage / 100) * substances[get_substance_id(name)].get_ro() * 1000);
			if (add_water > 0)
			{
				cout << "Aby uzyskac " << mass_percentage << " % substancji, nalezy dolac " << add_water * 1e6 << " ml\n" << endl;
			}
			else if (add_water == 0)
			{
				cout << "Osiagnieto zadana wartosc\n" << endl;
			}
			else
			{
				cout << "Nie da sie osiagnac zadanej wartosci\n" << endl;
			}
		}
	}
	else if (volume_total > cup_volume)
	{
		cout << "Nie da sie okreslic stosunku dla przelanego kubka\n" << endl;
	}
	else
	{
		cout << "Kubek jest pusty nalezy cos do niego nalac by skorzystac z tej funkcji!!\n" << endl;
	}
}


void TCup::spill(TCup* cup)
{
	int count = cup->substances.size();
	for (int i = 0; i < count; i++)
	{
		add(cup->substances[i], cup->volumes[i] * 1e6);
	}
	cup->substances.clear();
	cup->volumes.clear();
}

void TCup::set_volume(double new_cup_volume)
{
	if (substances.size() > 0)
	{
		cout << "Nie mozna zmienic objetosci dla napelnionego kubka\n" << endl;
	}
	else
	{
		cup_volume = new_cup_volume;
	}
}
*/