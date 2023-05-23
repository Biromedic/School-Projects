//
// Created by birka on 15.04.2023.
//

#include "Planet.h"
#include "cmath"

Planet::Planet(std::string name, double distance, double diameter_in){
    Name = name;
    distanceFromTheSun = distance;
    diameter = diameter_in;
}

double Planet::distanceTo(const Planet& destination) const{

    double 	interval = distanceFromTheSun - destination.distanceFromTheSun;
    return abs(interval);
}

double Planet::getDiameter() {
    return diameter;
}

double Planet::getDistanceFromTheSun() {
    return distanceFromTheSun;
}

string Planet::getName() {
    return Name;
}
