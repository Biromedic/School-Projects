#include <iostream>
using namespace std;

int squareByValue(int n);
void squareByReference(int *n);

int squareByValue(int n)
{
    return n * n;
}


void squareByReference(int *n)
{
    *n = (*n) * (*n);
}

int main()
{
    int number1, number2;

    cout << "Enter a positive integer: ";
    cin >> number1;
    cout << "Enter another positive integer: ";
    cin >> number2;

    int result1 = squareByValue(number1);
    cout << "Result of squareByValue function: " << result1 << endl;

    squareByReference(&number2);
    cout << "Result of squareByReference function: " << number2 << endl;

    return 0;
}