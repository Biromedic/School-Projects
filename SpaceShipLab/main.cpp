//
// Created by birka on 16.04.2023.
//

#include "Spaceship.h"
#include "Planet.h"
#include "iostream"
using namespace std;

int main(){

    Planet planets[9] = {
            Planet("Mercury", 5.791e+07, 4879),
            Planet("Venus", 1.082e+08, 12104),
            Planet("Earth", 1.496e+08, 12742),
            Planet("Mars", 2.279e+08, 6779),
            Planet("Jupiter", 7.783e+08, 139822),
            Planet("Saturn", 1.42e+09, 116460),
            Planet("Uranus", 2.87e+09, 50724),
            Planet("Neptune", 4.5e+09, 49244),
            Planet("Pluto", 5.91e+09, 2370)
    };



    string shipName;
    double initialFuel;
    cout << "Enter the ship name: ";
    //cin >> shipName;
    getline(cin, shipName);
    cout << "Enter the initial Fuel: ";
    cin >> initialFuel;

    Spaceship spaceship(shipName, initialFuel);
    spaceship.displayInfo();

    bool flag = false;

    while (!flag){
        cout << "List Of Planets:" <<endl;
        for (int i = 0; i < 9; ++i) {
            cout << i+1 << " " << planets[i].getName() << endl;
        }

        int planetIndex;
        std::cout << "Select the number of the planet you want to travel to (0 to exit): ";
        std::cin >> planetIndex;
        if (planetIndex == 0) {
            flag = true;
            break;
        }

        if (planetIndex < 1 || planetIndex > 9) {
            std::cout << "Invalid planet number!\n";
            continue;
        }

        double fuelPerDistance;
        std::cout << "Enter the fuel per distance value: ";
        std::cin >> fuelPerDistance;

        spaceship.travel(planets[planetIndex-1], fuelPerDistance);
        spaceship.displayInfo();
    }
    return 0 ;
}
