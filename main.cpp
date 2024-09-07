#include "hardware_emulator.h"

int main()
{

    AND_Gate and_gate1( 1, 1);
	LED led1(and_gate1.getValue() );

	OR_Gate or_gate(0, 1);
	LED led2(or_gate.getValue() );

	NOT_Gate not_gate(1);
	LED led3(not_gate.getValue() );

    // LED led4();
    // LED led5();
    // LED led6();
    // LED led7();

    return 0;
}
