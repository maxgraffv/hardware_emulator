#ifndef XNOR_GATE_H
#define XNOR_GATE_H

#include "../elements/Transistor.h"

class XNOR_Gate
{
    private:
        bool value;

    public:
        XNOR_Gate( bool input_A, bool input_B);
        bool getValue();




};

#endif