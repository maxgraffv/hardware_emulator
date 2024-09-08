#include "LED.h"
#include <iostream>

LED::LED( bool state ):state(false)
{
    if(state)
        std::cout << "LED ON" << std::endl;
    else
        std::cout << "LED OFF" << std::endl;
}

bool LED::getState()
{
    return this->state;
}