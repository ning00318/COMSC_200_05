#include<iostream>
#include "FuelGauge.h"
using namespace std;

// Comment 1: The constructor check if the initial fuel of the car has filled up
//            with the maximum amount, 15 gallons.
FuelGauge::FuelGauge(int initialFuel)
{
    // Comment 2: The car can only hold a maximum of 15 gallons, and when the car isn't full
    //            with the maximum amount initially, invoke incrementFuel() to fill it up.
    if (initialFuel < 15)
    {
        cout << "Your current amount of fuel is " << initialFuel << " gallon(s)." << endl;
        incrementFuel(initialFuel);
        cout << "After filling up..." << endl;
    }
    else
        fuelNum = initialFuel;
    print();
}

void FuelGauge::print() const
{
    cout << "Fuel level: " << fuelNum <<  " gallons" << endl;
    cout << "----------------------------" << endl << endl;
}

// Comment 3: The car will increase 1 gallon of fuel each time
//            until the car fills up with 15 gallons eventually.
void FuelGauge::incrementFuel(int startingFuel)
{
    while (startingFuel < 15)
        startingFuel++;
    fuelNum = startingFuel;
}

// Comment 4: The car will decrease 1 gallon of fuel each time until
//            the car reach 0 gallon eventually (run out of fuel).
void FuelGauge::decrementFuel()
{
    if (fuelNum > 0)
        fuelNum--;
}

int FuelGauge::getCurrentFuel() const
{
    return fuelNum;
}