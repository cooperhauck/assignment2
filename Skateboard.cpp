#include "Skateboard.h"
#include <stdlib.h>
#include <time.h>
#include <cmath.h>

Skateboard::Skateboard() {setBrand("Unknown"), setModel("Unknown")}

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time) {
    srand (time(NULL));
    double mileage = rand() % .5 + .1 * time;
    if(time > 25 && time < 250)
    {
      double range = time / 3;
      mileage = mileage + rand() % range + 1;
    }
    return floor(mileage);
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}

