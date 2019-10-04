#include "Jet.h"
#include <stdlib.h>
#include <time.h>
#include <cmath>
Jet::Jet() {setBrand("Custom"), setModel("VTx"), setFuelType("Unknown"), setNumEngines(1) }

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumEngines(numberOfEngines);
}

Jet::~Jet() = default;

string Jet::getNumEngines() {
    return numberOfEngines;
}

void Jet::setNumEngines(int numEngines) {
    if (numEngines > 0){
	numberOfEngines = numEngines;
    }

}

double Jet::mileageEstimate(double time) {
    srand (time(NULL));
    double mileage = rand() % 60 + 40 * time;
    if (fuelType == "Rocket" && numberOfEngines > 2) {
        mileage += mileage * (0.05 * numberOfEngines);
    }
    return floor(mileage);
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber Of Engines: " +
           getNumEngines();
}


