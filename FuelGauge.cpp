#include<iostream>
#include "FuelGauge.h"
using namespace std;

FuelGauge::FuelGauge(int fuel)
{
    // Comment: The car can only hold a maximum of 15 gallons, and when the car isn't full
    //          with the maximum amount initially, invoke incrementFuel() to fill it up.
    if (fuel < 15)
        incrementFuel(fuel);
    else
        fuelNum = fuel;
    print();
}

void FuelGauge::print() const
{
    cout << "Fuel level: " << fuelNum <<  " gallons" << endl;
    cout << "----------------------------" << endl << endl;
}

int FuelGauge::getCurrentFuel() const
{
    return fuelNum;
}
void FuelGauge::incrementFuel(int fuelNotFull)
{
    // Comment: The car will increase 1 gallon of fuel each time
    //          until the car fills up with 15 gallons eventually.
    while (fuelNotFull < 15)
        fuelNotFull++;
    fuelNum = fuelNotFull;
}
void FuelGauge::decrementFuel()
{
    // Comment: The car can decrease 1 gallon of fuel each time until
    //          the car reach 0 gallon eventually.
    if (fuelNum > 0)
        fuelNum--;
    else
    {
        cout << "END..." << endl;
    }
}