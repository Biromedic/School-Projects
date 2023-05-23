//
// Created by birka on 24.03.2023.
//

#ifndef LAB6_TRIANGLE_H
#define LAB6_TRIANGLE_H
#include "Shape.h"
#include "iostream"
using namespace std;

class Triangle : public Shape{
private:
    double sideA;
    double sideB;
    double sideC;
public:
    Triangle(string name, double sideA, double sideB, double sideC);
    double getArea() override;
    double getPerimeter() override;
    void setSideA(double sideA);
    void setSideB(double sideB);
    void setSideC(double sideC);
    double getSideA() const;
    double getSideB() const;
    double getSideC() const;
};


#endif //LAB6_TRIANGLE_H
