#include<iostream>
#include "Odometer.h"
#include "FuelGauge.h"
using namespace std;

// Comment 6: The constructor initialize and print the mileage and amount of fuel before driving.
Odometer::Odometer(int mileage, FuelGauge* fuel)
    : currentMileage(mileage), currentFuel(fuel)
{
    print();
}

void Odometer::print() const
{
    cout << "Mileage: " << currentMileage << endl;
    currentFuel->print();
}

void Odometer::incrementMileage()
{
    // Comment 7: If the car runs over 999,999 miles, the odometer resets the current mileage to 0,
    //            or if the car runs out of fuel and stop, otherwise, increase 1 mileage each time and decrease 1 fuel every 24 mileages.
    int mileageCount = 0;
    while (currentFuel->getCurrentFuel() > 0 && currentMileage <= 999999)
    {
        currentMileage++;
        mileageCount++;
        if (mileageCount == 24)
        {
            currentFuel->decrementFuel();
            mileageCount = 0;     // Comment 8: Reset the mileage count every 24 times.
        }
        print();
    }
    
    if (currentFuel->getCurrentFuel() == 0)
        cout << "The car ran out of fuel!" << endl;
    currentMileage = 0;
}