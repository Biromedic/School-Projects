//
// Created by birka on 16.04.2023.
//

#ifndef NEW_FOLDER_SPACESHIP_H
#define NEW_FOLDER_SPACESHIP_H

#include "Planet.h"
#include "iostream"
using namespace std;

class Spaceship {
public:
    Spaceship(string name, double fuel);
    ~Spaceship();

    string getName();
    double getFuel();
    Planet* getCurrentLocation();
    void displayInfo();
    void travel(Planet& destination, double fuelPerDistance);

private:
    string Name;
    double fuel_ship;
    Planet* currentLocation;
};


#endif //NEW_FOLDER_SPACESHIP_H
