//
// Created by birka on 28.04.2023.
//


#include <iostream>
#include "RacingVehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "FormulaCar.h"
#include "Track.h"
using namespace std;

int main() {
    // create instances of Car, Motorcycle, and FormulaCar classes
    Car car("Car", 200, 0.7, "Toyota", "Supra", "John Doe");
    Motorcycle motorcycle("Motorcycle", 363, 0.9, "Yamaha","YZF-R1", "Marc Márquez");
    FormulaCar formulaCar("Formula1 Car", 360, 0.95, "Mercedes-AMG Petronas", "W14", "Lewis Hamilton");

    // display their initial attributes
    car.display();
    motorcycle.display();
    formulaCar.display();

    Track track(10000,0.4,0.2,0.2,0.2);
    cout << "Race Starts" << endl;
    double carTime = car.race(track);
    double motorTime = motorcycle.race(track);
    double formulaTime= formulaCar.race(track);

    cout << "Racing times on the track:" << endl;
    cout << "Car Time: " << carTime << " seconds" << endl;
    cout << "Motorcycle Time: " << motorTime << " seconds" << endl;
    cout << "Formula Car Time: " << formulaTime << " seconds" << endl;

    cout << endl;

    // Apply tuning to each vehicle

    car.tuning(220,1);
    motorcycle.tuning(370,1);
    formulaCar.tuning(385,1);


    // updated attributes for each vehicle
    cout << "After Tuning" << endl;
    car.display();
    motorcycle.display();
    formulaCar.display();

    cout << endl;


    cout << "After Tuning" << endl;
    car.display();
    motorcycle.display();
    formulaCar.display();

    cout << endl;

    cout << "Race Starts after tuning" << endl;
    double carTimeTuned = car.race(track);
    double motorTimeTuned = motorcycle.race(track);
    double formulaTimeTuned = formulaCar.race(track);

    // print the results
    cout << "Racing times on the track after tuning:" << endl;
    cout << "Car Time: " << carTimeTuned << " seconds" << endl;
    cout << "Motorcycle Time: " << motorTimeTuned << " seconds" << endl;
    cout << "Formula Car Time: " << formulaTimeTuned << " seconds" << endl;

    return 0;
}