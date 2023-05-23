#include <iostream>
using namespace std;

inline float sphereArea(float radius)
{
    return 4 * 3.14 * radius * radius;
}

int main()
{
    const int sphere = 10;
    double radiius[sphere];
    int numSpheres = 0;
    double radius;

    cout << "Enter radius of sphere" << " " << numSpheres + 1 << ": ";
    cin >> radius;

    while (numSpheres < sphere) {
        if (radius<0){

            break;
        }
        else{
        radiius[numSpheres] = radius;
        numSpheres++;
        cout << "Enter radius of sphere " << numSpheres + 1 << ": ";
        cin >> radius;
        }
    }

    for (int i = 0; i < numSpheres; i++) {
        double area = sphereArea(radiius[i]);
        cout << "Area of sphere:" << i + 1 << ": " << area << endl;
    }
    return 0;
}

