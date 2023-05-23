//
// Created by birka on 28.04.2023.
//

#ifndef LABEXAM3_RACINGVEHICLE_H
#define LABEXAM3_RACINGVEHICLE_H
#include "iostream"
#include "Track.h"
using namespace std;

class RacingVehicle {
protected:
    string vehicleType;
    double topSpeed;
    double handling;
    string manufacturer;
    string model;
    string driverName;
public:
    RacingVehicle(string vType, double topSpeed, double handling, string manufacturer, string model, string driverName);

    virtual double race(Track t) = 0;

    void display();

    void tuning(double topSpeedPct = 0, double handlingPct = 0);
};


#endif //LABEXAM3_RACINGVEHICLE_H
