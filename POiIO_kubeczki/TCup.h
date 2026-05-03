#pragma once
#include <iostream>
#include <vector>
#include "TSubstance.h"
class TCup
{
	std::vector<TSubstance> substances;
	std::vector<double> volumes;
	double cup_volume = 250 / 1e6;

public:
	void add(TSubstance substance, double volume_in_ml);
	void add(std::string name, double volume_in_ml);
	void show();
	std::string info(int cupID);
	void desired_vol_percentage(std::string name, double vol_percentage);
	void desired_mass_percentage(std::string name, double mass_percentage);
	void spill(TCup* cup);
	void set_volume(double new_cup_volume);

	std::vector<TSubstance> get_cup_substacnes() { 
		return substances; 
	}
	std::vector<double> get_cup_volumes() {
		return volumes;
	}

private:
	void print_coe_vol();
	void print_coe_mass();
	int reduce_repeatitons(TSubstance substance);
	int get_substance_id(std::string name);
};
extern std::vector<TCup*> cups_pnt;

