//
// Created by birka on 24.03.2023.
//

#include "iostream"
#include "Circle.h"
#include "cmath"
using namespace std;

Circle::Circle(string name, double radius) : Shape(name) {
    this->radius = radius;
}

double Circle::getArea() {
    return M_PI * radius * radius;
}

double Circle::getPerimeter() {
    return 2 * M_PI * radius;
}

double Circle::getRadius() {
    return radius;
}

void Circle::setRadius(double radius) {
    this->radius = radius;
}