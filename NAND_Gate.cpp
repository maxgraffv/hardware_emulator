#include "NAND_Gate.h"

NAND_Gate::NAND_Gate(bool input_A, bool input_B):value(true)
{
    Transistor t1(input_A, input_A);
    Transistor t2(input_B, input_A);
    if(t2.getEmitter())
        this->value = value & false;
}

bool NAND_Gate::getValue()
{
    return this->value;
}