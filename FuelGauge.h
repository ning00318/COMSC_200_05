#ifndef FUELGAUGE_H
#define FUELGAUGE_H

class FuelGauge
{
public:
    FuelGauge();
    void setCurrentFuel();
    int getCurrentFuel();
    void incrementFuel();
    void decrementFuel();
private:
    int fuelNum;
};

#endif