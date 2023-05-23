//
// Created by birka on 28.04.2023.
//

#include "Car.h"

Car::Car(string vType, double topSpeed1, double handling1, string manufacturer1, string model1, string driverName1) :
         RacingVehicle(vType, topSpeed1, handling1, manufacturer1, model1, driverName1) {
}

void Car::tuning(double topSpeedPct, double handlingPct, double aeroPct) {
    RacingVehicle::tuning(topSpeedPct, handlingPct);
    aerodynamics += (aeroPct / 100) * aerodynamics;
}

double Car::race(Track track) {
    double time = 0.0;
    double currentSpeed = 0;

    for (int i = 0; i < track.getLength() ; ++i) {

        if (i < ( track.getTopSpeedPct() * track.getLength() )){ // adjust top speed based on aerodynamics
            double adjustedTopSpeed = topSpeed;
            if (i > track.getCruiseSpeedPct() * track.getLength()){
                adjustedTopSpeed *= (1 + min(aerodynamics, 0.1));
            }
            else if (i >= (track.getMediumHandlingPct() * track.getLength() )){
                if (handling >= 0.6){
                    currentSpeed = adjustedTopSpeed;
                } else{
                    currentSpeed = 0.9 * adjustedTopSpeed;
                }
            }
            else if (i >= track.getHighHandlingPct() * track.getLength()){ // check if car has high enough handling for full speed
                if (handling >= 0.8){
                    currentSpeed = adjustedTopSpeed;
                }
                else{
                    currentSpeed = 0.8 * adjustedTopSpeed;
                }
            }
            else{
                currentSpeed = adjustedTopSpeed;
            }
        }
        else{
            currentSpeed = 0.5 * topSpeed;
        }
        time += 1 / currentSpeed;
    }
    return time;
}