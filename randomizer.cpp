#include "randomizer.h"

Randomizer::Randomizer(){}

int randomizer(){
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(0, 1);
    return distr(eng);
}

