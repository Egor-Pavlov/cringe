#include "Car.h"
#include <string>
using namespace std;

string Car::GetModel()
{
	return Model;
}

bool Car::SetModel(string model)
{
	if(model == "")
		return false;

	else
	{
		Model = model;
		return true;
	}
}


Car::Car(string model, string manuf)
{

	if (model == "")
		return;
	Model = model;
	Manufacturer = manuf;
}
Car::Car()
{

}

void Car::Calculate()
{
	ActualVolume = TankVolume / Power;
}
