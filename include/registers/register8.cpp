#include "register8.h"


Register8::Register8()
{

}

Register8::Register8(bool data, bool clk)
{
    
            d0 = D_FlipFlop(data, clk);
            d1 = D_FlipFlop(d0.getQ(), clk);
            d2 = D_FlipFlop(d1.getQ(), clk);
            d3 = D_FlipFlop(d2.getQ(), clk);
            d4 = D_FlipFlop(d3.getQ(), clk);
            d5 = D_FlipFlop(d4.getQ(), clk);
            d6 = D_FlipFlop(d5.getQ(), clk);
            d7 = D_FlipFlop(d6.getQ(), clk);

}

void Register8::setData(bool data)
{

}