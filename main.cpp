#include "hardware_emulator.h"

int main()
{

   NAND_Gate g1(0,0);
   NAND_Gate g2(0,1);
   NAND_Gate g3(1,0);
   NAND_Gate g4(1,1);

   LED l1(g1.getValue());
   LED l2(g2.getValue());
   LED l3(g3.getValue());
   LED l4(g4.getValue());



    // LED led4();
    // LED led5();
    // LED led6();
    // LED led7();

    return 0;
}
