#ifndef FUELGAUGE_H
#define FUELGAUGE_H

class FuelGauge
{
public:
    FuelGauge(int);
    void print() const;
    void incrementFuel(int);
    void decrementFuel();
    int getCurrentFuel() const;
private:
    int fuelNum;
};

#endif