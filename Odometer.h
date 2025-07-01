#ifndef ODOMETER_H
#define ODOMETER_H
#include "FuelGauge.h"

class Odometer
{
public:
    Odometer(int, FuelGauge*);
    void incrementMileage();
    void print() const;
private:
    int currentMileage;
    FuelGauge *currentFuel;
};

#endif