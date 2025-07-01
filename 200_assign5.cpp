#include<iostream>
#include "Odometer.h"
using namespace std;

int main()
{
    cout << "(1)" << endl;
    FuelGauge fuelGauge(10);
    cout << "(2)" << endl;
    Odometer odometer(1, &fuelGauge);
    return 0;
}