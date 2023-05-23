//
// Created by birka on 28.04.2023.
//

#ifndef LABEXAM3_CAR_H
#define LABEXAM3_CAR_H
#include "RacingVehicle.h"

class Car : public RacingVehicle{
private:
    double aerodynamics{};
public:
    Car(string vType, double topSpeed1, double handling1, string manufacturer1, string model1, string driverName1);
    void tuning(double topSpeedPct = 0, double handlingPct = 0, double aeroPct = 0);
    double race(Track track) override;

};



#endif //LABEXAM3_CAR_H
