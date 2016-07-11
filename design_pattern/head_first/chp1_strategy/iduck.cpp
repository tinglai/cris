#include "iduck.h"

void IDuck::set_quack(IQuackBehavior* input_quack){
    quack_mode = input_quack;
}

void IDuck::make_quack(){
    quack_mode->quack();
}

IDuck::~IDuck() {}
