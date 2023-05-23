//
// Created by birka on 24.03.2023.
//
#include "Shape.h"
#include <iostream>
using namespace std;

Shape::Shape(string name) {
this->name = name;
}

double Shape::getArea() {
    return 0.0;
}

double Shape::getPerimeter() {
    return 0.0;
}

string Shape::getName() {
    return name;
}

void Shape::setName(string name) {
    this->name = name;
}