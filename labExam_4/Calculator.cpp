//
// Created by birka on 5.05.2023.
//

#include "iostream"
#include "fstream"
#include <unistd.h>
#include "Operation.h"
using namespace std;

int main(){
    chdir(R"(C:\Users\birka\Desktop\labExam_4)");
    const string INPUT_FILE = "InputFile.txt";
    const string OUTPUT_FILE = "OutputFile.txt";

    ifstream fInput(INPUT_FILE);
    ofstream fOutput(OUTPUT_FILE);

    const unsigned short MAX_OPERATIONS = 20;

    Operation* oper_ary[MAX_OPERATIONS];

    int num_opers = 0;
    char operation_type;
    double left,right;

    while (fInput >> operation_type) {
        fInput >> left >> right;
        switch (operation_type) {
            case '+':
                oper_ary[num_opers] = new Add(left,right);
                break;
            case '-':
                oper_ary[num_opers] = new Subtract(left,right);
            case '*':
                oper_ary[num_opers] = new Multiply(left,right);
                break;
            case '/':
                oper_ary[num_opers] = new Divide(left,right);
                break;
            default:
                cout << "Invalid Input" << endl;
                return 1;
        }
        num_opers++;
    }

    for (int i = 0; i < num_opers; i++)
    {
        double result = oper_ary[i]->Result();
        fOutput << result << endl;
        cout << "result of " << i+1 << " operation is: " << result <<endl;
    }


    fInput.close();
    fOutput.close();
    cout << "made by Birkan Cemil Abacı 20070001048";
    return 0;
}
