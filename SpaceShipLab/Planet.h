//
// Created by birka on 15.04.2023.
//

#ifndef NEW_FOLDER_PLANET_H
#define NEW_FOLDER_PLANET_H

#include "iostream"
using namespace std;

class Planet {
public:
    Planet(string name="Unknown", double distance = 0.0, double diameter_in = 0.0);
    string getName();
    double getDistanceFromTheSun();
    double getDiameter();
    double distanceTo(const Planet& destination) const;
private:
    string Name;
    double distanceFromTheSun;
    double diameter;
};

#endif //NEW_FOLDER_PLANET_H
