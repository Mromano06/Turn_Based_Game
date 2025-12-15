#pragma once
#include <iostream> 
#include <vector>

#define MAX_PLAYERS     2   // Two for now, can be expanded later
#define POWER_SQUARES   2   // Number of power squares on the grid
#define HOME_SQUARES    2   // Number of home squares on the grid


// Matthew Romano - December 14th, 2025 - Turn Based Game
// GameState header file declaration

class GameState {
    int turnNumber;
    int currentPlayerID;
    int playerEnergy[MAX_PLAYERS];
    int width, height;  // Dimensions of the game grid
    std::vector<Unit> units;    // Vector of all units in the game 
    std::pair <int, int> powerSquares[POWER_SQUARES];   // Power square positions
    std::pair<int, int> homeSquares[HOME_SQUARES];      // Home square positions

public:
    // Constructor
    GameState(int width, int height);

    // Game Functions 
    bool activateUnit(int unitID);
    bool moveUnit(int unitID, int newX, int newY);
    bool attackUnit(int attackerID, int targetID);
    void endTurn();
    bool checkWinCondition() const;
};