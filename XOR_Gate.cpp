#include "XOR_Gate.h"
#include "AND_Gate.h"
#include "OR_Gate.h"
#include "NAND_Gate.h"

XOR_Gate::XOR_Gate(bool input_A, bool input_B):value(false)
{
    OR_Gate or_gate(input_A, input_B);
    NAND_Gate nand_gate(input_A, input_B);

    AND_Gate and_gate(or_gate.getValue(), nand_gate.getValue());

    this->value = and_gate.getValue();
}

bool XOR_Gate::getValue()
{
    return this->value;
}