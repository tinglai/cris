#include <iostream>
#include "iduck.h"
#include "cduck.h"

NormalDuck::NormalDuck(){
    quack_mode = new NormalQuack;
}

NormalDuck::~NormalDuck(){
    delete quack_mode;
}
