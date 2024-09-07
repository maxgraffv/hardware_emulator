#ifndef LED_H
#define LED_H

class LED
{
    bool state;

    public:
        LED( bool input );
        bool getState();

};

#endif