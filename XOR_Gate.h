#ifndef XOR_GATE_H
#define XOR_GATE_H

#include "Transistor.h"

class XOR_Gate
{
    private:
        bool value;

    public:
        XOR_Gate( bool input_A, bool input_B);
        bool getValue();




};

#endif