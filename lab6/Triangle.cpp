//
// Created by birka on 24.03.2023.
//
#include "Triangle.h"
#include "iostream"
#include "cmath"
using namespace std;


#include "Triangle.h"

Triangle::Triangle(string name, double sideA, double sideB, double sideC) : Shape(name), sideA(sideA), sideB(sideB), sideC(sideC) {}

double Triangle::getArea() {
    double s = (sideA + sideB + sideC) / 2.0;
    return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}

double Triangle::getPerimeter() {
    return sideA + sideB + sideC;
}

void Triangle::setSideA(double sideA) {
    this->sideA = sideA;
}

void Triangle::setSideB(double sideB) {
    this->sideB = sideB;
}

void Triangle::setSideC(double sideC) {
    this->sideC = sideC;
}

double Triangle::getSideA() const {
    return sideA;
}

double Triangle::getSideB() const {
    return sideB;
}

double Triangle::getSideC() const {
    return sideC;
}