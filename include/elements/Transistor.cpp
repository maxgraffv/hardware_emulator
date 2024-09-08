#include "Transistor.h"

Transistor::Transistor( bool base, bool collector ) : base(base), collector(collector), emitter(false)
{
    emitter = base ? collector : false;
} 

bool Transistor::getEmitter()
{
    return emitter;
}