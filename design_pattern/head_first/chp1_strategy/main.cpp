#include <iostream>
#include <vector>
#include "iduck.h"
#include "cduck.h"
#include "quack.h"

int main(){
    IDuck* normal_duck = new NormalDuck();
    normal_duck->make_quack();
    std::cout << "NOW MUTE" << std::endl;
    MuteQuack mute_mode;
    normal_duck->set_quack(&mute_mode);
    normal_duck->make_quack();
}
