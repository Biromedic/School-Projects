//
// Created by birka on 28.04.2023.
//

#ifndef LABEXAM3_FORMULACAR_H
#define LABEXAM3_FORMULACAR_H
#include "RacingVehicle.h"

class FormulaCar : public RacingVehicle {
public:
    FormulaCar(string vType, double topSpeed1, double handling1, string manufacturer, string model,
               string driverName);

    double race(Track track) override;

private:
    double aerodynamics{};
};
#endif //LABEXAM3_FORMULACAR_H
