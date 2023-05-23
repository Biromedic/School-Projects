//
// Created by birka on 28.04.2023.
//

#ifndef LABEXAM3_MOTORCYCLE_H
#define LABEXAM3_MOTORCYCLE_H
#include "RacingVehicle.h"

class Motorcycle : public RacingVehicle {
private:
    double aerodynamics{};
public:
    Motorcycle(string vType, double topSpeed1, double handling1, string manufacturer1, string model1,
               string driverName1);
    double race(Track track) override;
};
#endif //LABEXAM3_MOTORCYCLE_H
