#ifndef D_FLIPFLOP_H
#define D_FLIPFLOP_H

#include "../logic_gates/logic_gates.h"

class D_FlipFlop
{
    private:
        bool D;
        bool CLK;

        bool Q;
        bool notQ;

    public:
        D_FlipFlop( bool input_D, bool input_CLK);
        bool getQ();
        bool getNotQ();
        void recalculate();

};

#endif