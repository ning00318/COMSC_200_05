#ifndef FUELGAUGE_H
#define FUELGAUGE_H

class FuelGauge
{
public:
    FuelGauge(int);
    void setCurrentFuel(int);
    int getCurrentFuel() const;
    void incrementFuel(int);
    void decrementFuel();
private:
    int fuelNum;
};

#endif