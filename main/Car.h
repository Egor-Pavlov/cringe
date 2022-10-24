#pragma once
#include <string>

using namespace std;

class Car
{
private:
	string Manufacturer;
	string Model;
public:
	string FuelType;
	string Id;
	double Mass;
	double PassMass;
	double TankVolume;
	int PassengersCount;
	int Power;
	double ActualVolume;

	string GetModel();
	bool SetModel(string model);
	Car(string model, string manuf);
	Car();
	void Calculate();

};

