//
// Created by birka on 24.03.2023.
//

#ifndef LAB6_RECTANGLE_H
#define LAB6_RECTANGLE_H
#include "Shape.h"


class Rectangle : public Shape {
private:
    double width{};
    double height{};
public:
    Rectangle(string name, double width, double height);

    double getArea() override;

    double getPerimeter() override;

    double getWidth();

    void setWidth(double width);

    double getHeight();

    void setHeight(double height);
};
#endif //LAB6_RECTANGLE_H
