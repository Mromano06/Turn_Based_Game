#include <iostream>
#include "header/Unit.h"
#include "header/GameState.h"

// Matthew Romano - December 14th, 2025 - Turn Based Game
// main engine file implementation

int main(void) {
    GameState game (8, 8); // Initialize an 8x8 game grid

    // Create a units for player 0
    Unit pUnit1(1, 0, 100, 0, 1);
    Unit pUnit2(2, 1, 100, 1, 0);
    Unit pUnit3(3, 0, 100, 1, 1);

    // Create a units for player 1
    Unit eUnit1(4, 1, 100, 7, 6); // Position 
    Unit eUnit2(5, 1, 100, 6, 7); 
    Unit eUnit3(6, 0, 100, 6, 6);

    return 0;
    
}