#ifndef REGISTER8_H
#define REGISTER8_H

#include "../flip_flops/flip_flops.h"

class Register8
{

    private:

        D_FlipFlop d0;
        D_FlipFlop d1;
        D_FlipFlop d2;
        D_FlipFlop d3;
        D_FlipFlop d4;
        D_FlipFlop d5;
        D_FlipFlop d6;
        D_FlipFlop d7;


    public:
        Register8();
        Register8(bool, bool);
        void setData(bool);
        void setCLK(bool);
        bool getLSB();
        void printBinary();




};




#endif