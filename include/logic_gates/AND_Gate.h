#ifndef AND_GATE_H
#define AND_GATE_H

#include "../elements/Transistor.h"

class AND_Gate
{
    private:
        bool value;

    public:
        AND_Gate( bool input_A, bool input_B);
        bool getValue();




};

#endif