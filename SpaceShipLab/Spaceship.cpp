//
// Created by birka on 16.04.2023.
//

#include "Spaceship.h"

Spaceship::Spaceship(string name, double fuel) {
    Name = name;
    fuel_ship = fuel;
    currentLocation = nullptr;
}

Spaceship::~Spaceship()
{
    delete currentLocation;
}

void Spaceship::displayInfo() {
    cout << "Spaceship name:  " << Name << endl;
    cout << "Spaceship remaining fuel:  " << fuel_ship << endl;

    if (currentLocation != nullptr)
    {
        std::cout << "Current location: " << currentLocation->getName() << std::endl;
    }
    else
    {
        std::cout << "Current location: Unknown" << std::endl;
    }
}

Planet* Spaceship::getCurrentLocation() {
    return currentLocation;
}

double Spaceship::getFuel() {
    return fuel_ship;
}

string Spaceship::getName() {
    return Name;
}

void Spaceship::travel(Planet &destination, double fuelPerDistance) {

    if (currentLocation != nullptr) {
        if (fuelPerDistance * destination.distanceTo(*currentLocation) > fuel_ship) {
            cout << "Not enough fuel to travel to " << destination.getName() << endl;
        }
        else {
            fuel_ship = fuel_ship - fuelPerDistance * destination.distanceTo(*currentLocation);
            currentLocation = &destination;
        }
    }
    else {
        fuel_ship = fuel_ship - fuelPerDistance * destination.getDistanceFromTheSun();
        currentLocation = &destination;
        cout << "travelled ->  " << destination.getName() << endl;

    }
}
