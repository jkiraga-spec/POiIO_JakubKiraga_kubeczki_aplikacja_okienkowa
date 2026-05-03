#pragma once
#include <iostream>
#include <vector>

class TSubstance
{
	std::string name;
	double 		ro; //[kg/m3]
	std::vector<int> color = { 0,0,0 };

public:
	TSubstance(std::string name, double ro, int red, int green, int blue);

	std::string get_name();
	double 		get_ro();
	std::vector<int>get_color();
};

extern std::vector<TSubstance> substancje;