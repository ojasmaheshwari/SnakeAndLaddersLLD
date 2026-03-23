//
// Created by epicman on 3/19/26.
//

#include "Dice.h"
#include <cstdlib>

int Dice::roll() {
    return rand() % 6 + 1;
}