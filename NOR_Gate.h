#ifndef NOR_GATE_H
#define NOR_GATE_H

#include "Transistor.h"

class NOR_Gate
{
    private:
        bool value;

    public:
        NOR_Gate( bool input_A, bool input_B);
        bool getValue();




};

#endif