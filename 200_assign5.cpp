#include<iostream>
#include "Odometer.h"
using namespace std;

int main()
{
    cout << "(1)" << endl;
    FuelGauge fuelGauge(15);
    cout << "(2)" << endl;
    Odometer odometer(0, &fuelGauge);
    cout << "(3)" << endl;
    odometer.incrementMileage();
    return 0;
}