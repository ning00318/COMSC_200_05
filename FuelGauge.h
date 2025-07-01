#ifndef FUELGAUGE_H
#define FUELGAUGE_H

class FuelGauge
{
public:
    FuelGauge(int);
    void print() const;
    // void setCurrentFuel(int);
    void incrementFuel(int);
    void decrementFuel();
private:
    int fuelNum;
};

#endif