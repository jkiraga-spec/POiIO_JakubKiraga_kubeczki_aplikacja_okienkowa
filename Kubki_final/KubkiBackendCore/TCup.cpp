#include "pch.h"
#include "TCup.h"

using namespace std;
vector<TCup*> cups_pnt;

int TCup::add(TSubstance substance, double  volume_in_ml)
{
	int status = 0;

	string new_name = substance.get_name();
	int substance_pos_in_cup = get_substance_id(&substances, new_name);

	if (substance_pos_in_cup == -1)
	{
		substances.push_back(substance);
		volumes.push_back(volume_in_ml / 1e6);
		status = 1;
	}
	else{
		this->volumes[substance_pos_in_cup] += volume_in_ml / 1e6;
		status = 2;
	}
	return status;
}
int TCup::add(std::string name, double volume_in_ml)
{
	int status = 0;

	int _id = get_substance_id(&substancje ,name);

	if (_id >= 0)
	{
		status = this->add(substancje[_id], volume_in_ml);
	}
	else {
		status = -1;
	}
	return status;
}

int TCup::get_substance_id(std::vector<TSubstance>* substances, string name)
{
	int count = substances->size();

	if (count == 0) return -1;

	int _id = -1;
	bool run = true;

	while (run)
	{
		_id += 1;

		string sub_name = (*substances)[_id].get_name();

		if (sub_name == name) run = false;

		if ((_id + 1 == count) && (run == true))
		{
			run = false;
			_id = -1;
		}
	}
	return _id;
}