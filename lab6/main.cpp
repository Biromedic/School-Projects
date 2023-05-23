//
// Created by birka on 24.03.2023.
//
#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

int main() {

    Rectangle rectangle("Rectangle ", 5.0, 4.0);
    Circle circle("Circle ", 4.0);
    Triangle triangle("Triangle ", 3.0, 4.0, 5.0);

    //  rectangle
    cout << "Name: " << rectangle.getName() << endl;
    cout << "Width: " << rectangle.getWidth() << endl;
    cout << "Height: " << rectangle.getHeight() << endl;
    cout << "Area: " << rectangle.getArea() << endl;
    cout << "Perimeter: " << rectangle.getPerimeter() << endl;

    //  Circle
    cout << "Name: " << circle.getName() << endl;
    cout << "Radius: " << circle.getRadius() << endl;
    cout << "Area: " << circle.getArea() << endl;
    cout << "Perimeter: " << circle.getPerimeter() << endl;

    // Triangle
    cout << "Name: " << triangle.getName() << endl;
    cout << "Side A: " << triangle.getSideA() << endl;
    cout << "Side B: " << triangle.getSideB() << endl;
    cout << "Side C: " << triangle.getSideC() << endl;
    cout << "Area: " << triangle.getArea() << endl;
    cout << "Perimeter: " << triangle.getPerimeter() << endl;

    return 0;
}