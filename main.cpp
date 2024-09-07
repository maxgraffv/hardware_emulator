#include "hardware_emulator.h"

int main()
{

    AND_Gate and_gate1( 1, 1);
	LED led1(and_gate1.getValue() );

	OR_Gate or_gate(0, 1);
	LED led2(or_gate.getValue() );

    return 0;
}
