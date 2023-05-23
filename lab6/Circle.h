//
// Created by birka on 24.03.2023.
//

#ifndef LAB6_CIRCLE_H
#define LAB6_CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
private:
    double radius;
public:
    Circle(std::string name, double radius);
    double getArea() override;
    double getPerimeter() override;
    double getRadius();
    void setRadius(double radius);
};

#endif //LAB6_CIRCLE_H
