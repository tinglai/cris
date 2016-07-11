#ifndef GUARD_iduck_h
#define GUARD_iduck_h

#include "quack.h"

class IDuck {
public:
    void set_quack(IQuackBehavior*);
    void make_quack();
    virtual ~IDuck();
    IQuackBehavior* quack_mode;
};

#endif
