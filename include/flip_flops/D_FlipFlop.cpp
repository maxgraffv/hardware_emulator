#include "D_FlipFlop.h"


D_FlipFlop::D_FlipFlop()
{
    D_FlipFlop(false, false);
}

D_FlipFlop::D_FlipFlop( bool input_D, bool input_CLK)
    :D(false), CLK(false), Q(false), notQ(true)
{
    NOT_Gate not_gate(input_D);
    
    NAND_Gate nand_gate1(input_D, input_CLK);
    NAND_Gate nand_gate4(CLK, D);
    NAND_Gate nand_gate2(nand_gate1.getValue(), nand_gate4.getValue());
    NAND_Gate nand_gate3(input_CLK, not_gate.getValue());

    this->Q = nand_gate2.getValue();
    this->notQ = nand_gate4.getValue();
}

bool D_FlipFlop::getQ()
{
    return Q;
}

bool D_FlipFlop::getNotQ()
{
    return notQ;
}

void D_FlipFlop::recalculate()
{
    NOT_Gate not_gate(D);
    
    NAND_Gate nand_gate1(D, CLK);
    NAND_Gate nand_gate4(CLK, D);
    NAND_Gate nand_gate2(nand_gate1.getValue(), nand_gate4.getValue());
    NAND_Gate nand_gate3(CLK, not_gate.getValue());

    this->Q = nand_gate2.getValue();
    this->notQ = nand_gate4.getValue();

}