#include <iostream>
#include <string>
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    Car Mersedess("", "jsbjhbvsjdbvjs");

    cout << Mersedess.GetModel();
    
    Mersedess.FuelType = "АИ-98";
    Mersedess.Id = "A777AA777";
    Mersedess.Mass = 1000;
    Mersedess.PassengersCount = 3;
    Mersedess.PassMass = 200;
    Mersedess.Power = 450;
    Mersedess.TankVolume = 120;


    Mersedess.Calculate();

    Truck tr = Truck("Ford", "GMC", 133);

    //tr.SetMaxLoad(123);
    cout << tr.GetMaxLoad() << endl;

    cout << tr.GetModel();


    return 0;
}