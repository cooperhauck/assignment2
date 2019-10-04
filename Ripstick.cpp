#include "Ripstick.h"
#include <stdlib.h>
#include <time.h>
#include <cmath.h>

Ripstick::Ripstick() {setBrand("Unknown"), setModel("Unknown")}

Ripstick::Ripstick(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Ripstick::~Ripstick() = default;

double Ripstick::mileageEstimate(double time) {
    srand (time(NULL));
    double mileage = rand() % .3 + .1 * time;
    if(time > 30 && time < 300)
    {
      double range =  time / 10
      mileage = mileage + rand() % range + 1;
    }
    return floor(mileage);
}

string Ripstick::toString() {
    string s = "-> Ripstick\n\t";
    return "-> Ripstick\n" + Vehicle::toString();
}



