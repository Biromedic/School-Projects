#include <iostream>
#include <ctime>

using namespace std;


int calculateVolumeCuboid(int length = 5, int width = 6, int height = 7) {
    int volume = length * width * height;
    return volume;
}

int* generate_values() {

    srand(time(NULL));
    int* arr = new int[30];

    for (int i = 0; i < 30; i++) {
        arr[i] = rand() % 90 + 10;
    }
    return arr;
}

int main() {

    int* values = generate_values();

    cout << "Cuboid volume with default parameters: " << calculateVolumeCuboid() << endl;
   
    int parameter1 = values[15];
    cout << "Cuboid volume with first parameter: " << calculateVolumeCuboid(parameter1) << endl;

    int parameter2 = values[29];
    cout << "Cuboid volume with two parameters: " << calculateVolumeCuboid(parameter1, parameter2) << endl;

    int parameter3 = values[9];
    cout << "Cuboid volume with all parameters: " << calculateVolumeCuboid(parameter1, parameter2, parameter3) << endl;

    delete[] values;

    return 0;
}

