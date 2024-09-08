#include "NOT_Gate.h"

NOT_Gate::NOT_Gate( bool input) : value(true)
{
    Transistor t( input, true );

    if(input)
        this->value = value & false;
}

bool NOT_Gate::getValue()
{
    return value;
}