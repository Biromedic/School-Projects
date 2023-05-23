//
// Created by birka on 28.04.2023.
//

#include "Motorcycle.h"

Motorcycle::Motorcycle(string vType, double topSpeed1, double handling1, string manufacturer1, string model1,
                       string driverName1) :
                       RacingVehicle(vType, topSpeed1, handling1, manufacturer1, model1, driverName1) {
}

double Motorcycle::race(Track track) {
    double totalTime = 0.0;
    double speed = 0.0;
    double timeTaken = 0.0;

    // Calculate time taken for top speed segments
    timeTaken = track.getLength() * track.getHighHandlingPct();
    if (handling >= 0.8){
        speed = (aerodynamics * topSpeed) + ((1 - aerodynamics) * topSpeed* handling);
    }
    else{
        speed = 0.8 * ( (aerodynamics * topSpeed) + ((1 - aerodynamics) * topSpeed* handling) );
    }
    totalTime += timeTaken / speed;

    timeTaken = track.getLength() * track.getMediumHandlingPct();
    if (handling >= 0.6){
        speed = (aerodynamics * topSpeed) + ((1 - aerodynamics) * topSpeed* handling);
    }
    else{
        speed = 0.9 * ( (aerodynamics * topSpeed) + ((1 - aerodynamics) * topSpeed* handling) );
    }
    totalTime += timeTaken / speed;

    // Calculate time taken for cruise speed segment
    timeTaken = track.getLength() * track.getCruiseSpeedPct();
    speed = 0.5 * topSpeed;
    totalTime += timeTaken / speed;

    return totalTime;
}
