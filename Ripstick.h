#ifndef DRIVINGSIMULATOR_RIPSTICK_H
#define DRIVINGSIMULATOR_RIPSTICK_H

#include "Vehicle.h"

class Ripstick : public Vehicle {

public:
    Ripstick();
    explicit Ripstick(string brand, string model);

    virtual ~Ripstick();
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif

