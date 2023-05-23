//
// Created by birka on 28.04.2023.
//

#include "FormulaCar.h"

FormulaCar::FormulaCar(string vType, double topSpeed1, double handling1, string manufacturer, string model,
                       string driverName) :
                       RacingVehicle(vType, topSpeed1, handling1, manufacturer, model, driverName) {
}

double FormulaCar::race(Track track) {
    double totalTime = 0.0;
    double speed = 0.0;
    double timeTaken = 0.0;

    timeTaken = track.getLength() * track.getTopSpeedPct();
    speed = (aerodynamics * topSpeed * 1.3) + ((1 - aerodynamics) * topSpeed * handling * 1.3);
    totalTime += timeTaken / speed;

    timeTaken = track.getLength() * track.getHighHandlingPct();
    speed = (aerodynamics * topSpeed * 1.3) + ((1 - aerodynamics) * topSpeed * handling * 1.3);
    totalTime += timeTaken / speed;

    timeTaken = track.getLength() * track.getMediumHandlingPct();
    speed = (aerodynamics * topSpeed * 1.3) + ((1 - aerodynamics) * topSpeed * handling * 1.3);
    totalTime += timeTaken / speed;

    timeTaken = track.getLength() * track.getCruiseSpeedPct();
    speed = 0.5 * ((aerodynamics * topSpeed * 1.3) + ((1 - aerodynamics) * topSpeed * handling * 1.3));
    totalTime += timeTaken / speed;

    return totalTime;
}
