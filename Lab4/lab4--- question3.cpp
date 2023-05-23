#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void swap(int& n){
    srand(time(0));
    n = rand() % 100 + 1;
}

int main(){

    int x = 31;
    int y = x;

    cout << "Original values: x = " << x << ", y = " << y << endl;
    swap(y);
    
    cout << "New values: x = " << x << ", y = " << y << endl;
    return 0;
}
