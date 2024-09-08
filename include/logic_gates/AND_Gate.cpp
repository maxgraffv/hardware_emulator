#include "AND_Gate.h"

AND_Gate::AND_Gate(bool input_A, bool input_B):value(false)
{
    Transistor t1(input_A, input_A);
    Transistor t2(input_B, input_A);
    this->value = t2.getEmitter();
}

bool AND_Gate::getValue()
{
    return this->value;
}