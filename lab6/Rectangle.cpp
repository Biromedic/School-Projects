//
// Created by birka on 24.03.2023.
//

#include <string>
#include "Rectangle.h"
#include "iostream"
using namespace std;

double Rectangle::getWidth() {
        return width;
    }

    void Rectangle::setWidth(double width) {
        this->width = width;
    }

double Rectangle::getHeight() {
        return height;
    }

void Rectangle::setHeight(double height) {
        this->height = height;
    }

double Rectangle::getArea() {
        return width * height;
    }

double Rectangle::getPerimeter(){
        return 2 * (width + height);
    }

Rectangle::Rectangle(string name, double width, double height) : Shape(name) {
    this->height = height;
    this->width = width;
}
