#include<iostream>
#include "Odometer.h"
using namespace std;

int main()
{
    // Comment 9: Invoke the class FuelGauge only to print out the initial fuel
    //            amount before the car starts, and fill it up if not full.
    FuelGauge fuelGauge(10);

    // Comment 10: Print out the amount of fuel before the car start driving
    //             (it means the mileage is 0).
    Odometer odometer(0, &fuelGauge);

    // Comment 11: Output the car's every mileage and amount of
    //             fuel when driving until it runs out of it.
    odometer.incrementMileage();
    return 0;
}