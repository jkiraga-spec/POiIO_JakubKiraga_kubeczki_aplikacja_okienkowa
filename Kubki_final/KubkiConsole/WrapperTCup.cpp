#include "WrapperTCup.h"
#include <iostream>
#include <vector>

using namespace std;

WrapperTCup::~WrapperTCup()
{
	delete cup;
	cup = nullptr;
}

void WrapperTCup::add(TSubstance substance, double volume_in_ml)
{
	int status = cup->add(substance, volume_in_ml);

	string name = substance.get_name();
	this->print_add_status(name, status, volume_in_ml);
}
void WrapperTCup::add(std::string name, double volume_in_ml)
{
	int status = cup->add(name, volume_in_ml);
	this->print_add_status(name, status, volume_in_ml);
}
void WrapperTCup::print_add_status(string name, int status, double vol)
{
	switch (status)
	{
	case -1:
		cout << "Nieznana substanca: " << name << endl;
		break;
	case 1:
		cout << "Dodano nowa substancje do kubka \"" << name << "\"";
		cout << " w ilosci " << vol << " ml.\n";
		break;
	case 2:
		cout << "Dolano \"" << name << "\" do kubka";
		cout << " w ilosci " << vol << " ml.\n";
		break;
	default:
		cout << "Nieznany status funkcji add: " << status << endl;
		break;
	}
}
void WrapperTCup::show()
{
	std::vector<TSubstance> substances = cup->get_cup_substances();
	std::vector<double> volumes = cup->get_cup_volumes();
	int count = substances.size();

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

void WrapperTCup::print_coe_vol()
{
	std::vector<TSubstance> substances = cup->get_cup_substances();
	std::vector<double> volumes = cup->get_cup_volumes();
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


void WrapperTCup::print_coe_mass()
{
	std::vector<TSubstance> substances = cup->get_cup_substances();
	std::vector<double> volumes = cup->get_cup_volumes();
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