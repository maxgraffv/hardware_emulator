#include "NOR_Gate.h"

NOR_Gate::NOR_Gate(bool input_A, bool input_B):value(true)
{
    Transistor t1(input_A, input_A);
    Transistor t2(input_B, input_B);

    if(t1.getEmitter() || t2.getEmitter())
        this->value = value & false;
}

bool NOR_Gate::getValue()
{
    return this->value;
}