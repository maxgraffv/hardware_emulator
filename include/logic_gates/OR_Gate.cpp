#include "OR_Gate.h"

OR_Gate::OR_Gate(bool input_A, bool input_B):value(false), t1_ptr(nullptr), t2_ptr(nullptr)
{
    Transistor t1(input_A, input_A);
    Transistor t2(input_B, input_B);

    t1_ptr = &t1;
    t2_ptr = &t2;

    this->value = t1.getEmitter() || t2.getEmitter();
}

bool OR_Gate::getValue()
{
    return this->value;
}