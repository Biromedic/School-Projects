#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

void swap_with_file(int& n, int values[], int num_values){

    srand(time(0));
    int index = rand() % num_values;
    n = values[index];
}

int main() {
    const int MAX_VALUES = 10;
    ifstream file("integers.txt");
    int values[MAX_VALUES];
    int num_values = 0;
    int num;
    
    while (file >> num && num_values < MAX_VALUES) {
        if (num > 0) {
            values[num_values] = num;
            num_values++;
        }
    }
    
    int x = 31;
    int y = x;
    
    cout << "Original values: x = " << x << ", y = " << y << endl;

    swap_with_file(y, values, num_values);

    cout << "New values: x = " << x << ", y = " << y << endl;
    
    return 0;
}
