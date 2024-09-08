#include "XNOR_Gate.h"
#include "NAND_Gate.h"
#include "OR_Gate.h"

XNOR_Gate::XNOR_Gate(bool input_A, bool input_B):value(true)
{
    NAND_Gate nand_gate1(input_A, input_B);
    OR_Gate or_gate(input_A, input_B);

    NAND_Gate nand_gate2( nand_gate1.getValue(), or_gate.getValue() );


    this->value = nand_gate2.getValue();
}

bool XNOR_Gate::getValue()
{
    return this->value;
}