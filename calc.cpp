#include <iostream>
#include "calc.h"


int  Calculator::add(int operand1, int operand2)
    {
        return operand1 + operand2;
    }
    int Calculator::subtract(int operand1, int operand2)
    {
        return operand1 - operand2;
    }
    int  Calculator::multiply(int operand1, int operand2)
    {
        return operand1 * operand2;
    }
    int  Calculator::divide(int operand1, int operand2)
    {
        return operand1 / operand2;
    }
    int  Calculator::mod(int operand1, int operand2)
    {
        return operand1 % operand2;
    }