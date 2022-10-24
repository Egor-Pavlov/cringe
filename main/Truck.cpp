#include "Truck.h"
double Truck::GetMaxLoad()
{
	return MaxLoad;
}

bool Truck::SetMaxLoad(double maxload)
{
	if (maxload <= 0)
		return false;

	else
	{
		MaxLoad = maxload;
		return true;
	}
}
Truck::Truck(string model, string manuf, double maxLoad)
	: Car(model, manuf)
{
	MaxLoad = maxLoad;
}