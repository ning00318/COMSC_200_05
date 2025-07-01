#include<iostream>
#include "Odometer.h"
#include "FuelGauge.h"
using namespace std;

Odometer::Odometer(int mileage, FuelGauge *fuel)
    : currentMileage(mileage), currentFuel(fuel)
{
    print();
}

void Odometer::incrementMileage()
{
    // Comment: If the car runs over 999,999 miles, the odometer resets the
    //          current mileage to 0, otherwise, increase 1 mile each time.
    int milesCount = 0;
    while (currentFuel->getCurrentFuel() > 0 && currentMileage <= 999999)
    {
        currentMileage++;
        milesCount++;
        if (milesCount == 24)
        {
            currentFuel->decrementFuel();
            milesCount = 0;
        }
        print();
    }
    currentMileage = 0;
}

void Odometer::print() const
{
    cout << "Mileage: " << currentMileage << endl;
    currentFuel->print();
}