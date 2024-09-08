#include "include/hardware_emulator.h"
#include <iostream>

int main()
{


    D_FlipFlop d1(false, false);
    D_FlipFlop d2(false, false);
    D_FlipFlop d3(false, false);
    D_FlipFlop d4(false, false);

    bool clk = false;
    bool data = false;

    for(int i = 0; i < 8; i++)
    {
            d1 = D_FlipFlop(data, clk);
            d2 = D_FlipFlop(d1.getQ(), clk);
            d3 = D_FlipFlop(d2.getQ(), clk);
            d4 = D_FlipFlop(d3.getQ(), clk);

            if(clk)
                clk = false;
            else
                clk = true;
    }

    std::cout << "4b binary: " << 
        d1.getQ() << d2.getQ() << d3.getQ() << d4.getQ() 
    << std::endl;

    return 0;
}
