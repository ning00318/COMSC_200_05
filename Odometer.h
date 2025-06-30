#ifndef ODOMETER_H
#define ODOMETER_H
#include "FuelGauge.h"

class Odometer
{
public:
    Odometer();
    void setCurrentMileage();
    int getCurrentMileage();
    void incrementMileage();
private:

};

#endif