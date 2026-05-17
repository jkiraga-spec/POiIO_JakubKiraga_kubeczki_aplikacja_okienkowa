#pragma once
//#include <iostream>
#include <vector>
#include <string>

#include "WrapperTCup.h"
using namespace std;


	//cout<<"Hello World!\n";
int main() {
	WrapperTCup kubek1;
	//WrapperTCup kubek2;
	kubek1.add(substancje[0], 100);
	kubek1.add("woda", 30);
	kubek1.add("mleko", 50);
	kubek1.add(substancje[1], 100);
	kubek1.add("kwas", 1);
	kubek1.add("oliwa", 100);
	kubek1.show();
	//kubek1.desired_mass_percentage("woda", 30);
	//kubek2.desired_mass_percentage("woda", -30);
	//kubek2.set_volume(500);
	//kubek2.spill(&kubek1);
	//kubek2.add("woda", 100);
	//kubek2.show();
	//kubek1.show();
	//kubek2.desired_vol_percentage("oliwa", 30);
}
