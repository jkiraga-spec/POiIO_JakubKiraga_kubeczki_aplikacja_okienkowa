#pragma once
#include "TCup.h"
class WrapperTCup
{
	TCup* cup = new TCup;
public:
	~WrapperTCup();

	void add(TSubstance substance, double volume_in_ml);
	void add(std::string name, double volume_in_ml);
	void show();
	//void desired_vol_percentage(std::string name, double vol_percentage);
	//void desired_mass_percentage(std::string name, double mass_percentage);
	//void spill(WrapperTCup* cup);

private:
	void print_coe_vol();
	void print_coe_mass();
	void print_add_status(std::string name, int status, double volume);
};

