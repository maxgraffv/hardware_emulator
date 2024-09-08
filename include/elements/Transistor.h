#ifndef TRANSISTOR_H
#define TRANSISTOR_H

class Transistor
{
    
    private:
        bool base;
        bool collector;
        bool emitter;

    public:
        Transistor( bool base, bool collector );
        bool getEmitter();


    

};

#endif

