#include "hardware_emulator.h"

int main()
{

   NOR_Gate g1(0,0);
   NOR_Gate g2(0,1);
   NOR_Gate g3(1,0);
   NOR_Gate g4(1,1);

   LED l1(g1.getValue());
   LED l2(g2.getValue());
   LED l3(g3.getValue());
   LED l4(g4.getValue());

    return 0;
}
