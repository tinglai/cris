#include <iostream>
#include "quack.h"

void NormalQuack::quack(){
    std::cout << "this is normal quack: QUACK QUACK QUACK" << std::endl;
}

void MuteQuack::quack(){
    std::cout << "I cannot quack beacause I'm muted!" << std::endl;
}
