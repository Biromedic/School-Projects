//
// Created by birka on 24.03.2023.
//

#ifndef LAB6_SHAPE_H
#define LAB6_SHAPE_H

#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string name;

public:
    Shape(string name);
    virtual double getArea();
    virtual double getPerimeter();
    string getName();
    void setName(string name);
};
#endif //LAB6_SHAPE_H
