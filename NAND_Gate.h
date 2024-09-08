#ifndef NAND_GATE_H
#define NAND_GATE_H

#include "Transistor.h"

class NAND_Gate
{
    private:
        bool value;

    public:
        NAND_Gate( bool input_A, bool input_B);
        bool getValue();




};

#endif