#pragma once
#include "Car.h"
class Truck : public Car
{
private:
	double MaxLoad;
public:
	double GetMaxLoad();
	bool SetMaxLoad(double maxload);
	Truck(string model, string manuf, double maxLoad);
};

