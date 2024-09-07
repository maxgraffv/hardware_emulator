#ifndef AND_GATE_H
#define AND_GATE_H

#include "Transistor.h"

class AND_Gate
{
    private:
        bool value;
        Transistor* t1_ptr;
        Transistor* t2_ptr;

    public:
        AND_Gate( bool input_A, bool input_B);
        bool getValue();




};

#endif