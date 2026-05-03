#include"TSubstance.h"
using namespace std;

TSubstance::TSubstance(string name, double ro, int red, int green, int blue)
{
	this->name = name;
	this->ro = ro;
	this->color[0] = red;
	this->color[1] = green;
	this->color[2] = blue;
}

string TSubstance::get_name()
{
	return name;
}

double TSubstance::get_ro()
{
	return ro;
}

std::vector<int> TSubstance::get_color()
{
	return color;
}

vector<TSubstance> substancje =
{
	TSubstance{"woda",997.8, 95, 165, 250},
	TSubstance{"mleko", 1030.0, 192, 230, 238},
	TSubstance{"oliwa", 920.0, 55, 115, 78},
	TSubstance{"krew", 1050.0, 241, 87, 87},
	TSubstance{"ocet", 1050.0, 235, 243, 156}
};