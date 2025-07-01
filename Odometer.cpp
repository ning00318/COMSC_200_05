#include<iostream>
#include "Odometer.h"
#include "FuelGauge.h"
using namespace std;

Odometer::Odometer(int mileage, FuelGauge *fuel)
    : currentMileage(mileage), currentFuel(fuel)
{
    print();
    incrementMileage();
}

void Odometer::incrementMileage()
{
    // Comment: If the car runs over 999,999 miles, the odometer resets the
    //          current mileage to 0, otherwise, increase 1 mile each time.
    while (currentMileage < 5)
    {
        currentMileage++;
        if (currentMileage % 24 == 0)
            currentFuel->decrementFuel();
        print();
    }
    currentMileage = 0;
    currentFuel->decrementFuel();
}

void Odometer::print() const
{
    cout << "Mileage: " << currentMileage << endl;
    currentFuel->print();
}