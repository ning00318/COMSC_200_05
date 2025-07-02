#ifndef ODOMETER_H
#define ODOMETER_H
#include "FuelGauge.h"

class Odometer
{
public:
    Odometer(int, FuelGauge*);
    void print() const;
    void incrementMileage();
private:
    int currentMileage;
    FuelGauge* currentFuel; // Comment 5: A member variable that is a pointer to a FuelGauge object.
};

#endif