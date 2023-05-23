//
// Created by birka on 5.05.2023.
//

#ifndef LABEXAM_4_OPERATION_H
#define LABEXAM_4_OPERATION_H

class Operation{
public:
    Operation(double left, double right) : left(left), right(right){}
    virtual double Result(void) = 0;
    virtual ~Operation() {}
protected:
    double left;
    double right;
};

class Add: public Operation
{
public:
    Add(double left, double right) : Operation(left, right) {}
    double Result(void);
    ~Add() {}
};


class Subtract: public Operation
{
public:
    Subtract(double left, double right) : Operation(left, right) {}
    double Result(void);
    ~Subtract() {}
};



class Multiply: public Operation
{
public:
    Multiply(double left, double right) : Operation(left, right) {}
    double Result(void);
    ~Multiply() {}
};



class Divide: public Operation
{
public:
    Divide(double left, double right) : Operation(left, right) {}
    double Result(void);
    ~Divide() {}
};


#endif //LABEXAM_4_OPERATION_H
