#ifndef OR_GATE_H
#define OR_GATE_H

#include "Transistor.h"

class OR_Gate
{
    private:
        bool value;
        Transistor* t1_ptr;
        Transistor* t2_ptr;

    public:
        OR_Gate( bool input_A, bool input_B);
        bool getValue();




};

#endif