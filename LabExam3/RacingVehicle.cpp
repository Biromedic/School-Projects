//
// Created by birka on 28.04.2023.
//

#include "RacingVehicle.h"
#include "iostream"
using namespace std;


RacingVehicle::RacingVehicle(string vType, double topSpeed, double handling, string manufacturer, string model,
                             string driverName) {
    this->vehicleType = vType;
    this->topSpeed = topSpeed;
    this->handling = handling;
    this->manufacturer = manufacturer;
    this->model = model;
    this->driverName = driverName;
}

void RacingVehicle::display() {
    cout << "Vehicle Type: " << vehicleType << endl;
    cout << "Top Speed: " << topSpeed << endl;
    cout << "Handling: " << handling << endl;
    cout << "Manufacturer: " << manufacturer<< endl;
    cout << "Model: " << model << endl;
    cout << "Driver Name: " << driverName << endl;
    cout << endl;
}

void RacingVehicle::tuning(double topSpeedPct, double handlingPct) {
    topSpeed += (topSpeedPct/100) * topSpeed;
    handling += (handlingPct / 100) * handling;
}

double RacingVehicle::race(Track t) {
    double time = t.getLength() / (topSpeed * handling);
    return time;
}