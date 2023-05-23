//
// Created by birka on 5.05.2023.
//
#include <iostream>
#include <fstream>
#include "Operation.h"

using namespace std;

int main() {
    const int ARRAY_SIZE = 4;
    Operation* oper_ary[ARRAY_SIZE];
    ifstream inputFile("InputFile.txt");
    ofstream outputFile("OutputFile.txt");

    if (inputFile.is_open() && outputFile.is_open()) {
        for (int i = 0; i < ARRAY_SIZE; i++) {
            char oper_type;
            double operand1, operand2;
            inputFile >> oper_type >> operand1 >> operand2;

            switch (oper_type) {
                case '+':
                    oper_ary[i] = new Addition(operand1, operand2);
                    break;
                case '-':
                    oper_ary[i] = new Subtraction(operand1, operand2);
                    break;
                case '*':
                    oper_ary[i] = new Multiplication(operand1, operand2);
                    break;
                case '/':
                    oper_ary[i] = new Division(operand1, operand2);
                    break;
                default:
                    cout << "Invalid operation type" << endl;
                    return 1;
            }
        }

        for (int i = 0; i < ARRAY_SIZE; i++) {
            outputFile << oper_ary[i]->Result() << endl;
        }

        for (int i = 0; i < ARRAY_SIZE; i++) {
            delete oper_ary[i];
        }

        inputFile.close();
        outputFile.close();
    } else {
        cout << "Failed to open file" << endl;
        return 1;
    }

    return 0;
}
