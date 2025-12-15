#include "../header/GameState.h"

#define POWER_LIMIT     100

// Matthew Romano - December 14th, 2025 - Turn Based Game
// GameState class implementation

// Constructor
GameState::GameState(int width, int height) : width(width), height(height), turnNumber(1), currentPlayerID(0) {
    for (int i = 0; i < MAX_PLAYERS; ++i) { // Initial energy for each player
        playerEnergy[i] = POWER_LIMIT; 
    }

    // Initialize power squares and home squares as needed
    // TODO: Set actual positions based on game design
    powerSquares[0] = {7, 0};
    powerSquares[1] = {0, 7};  
    homeSquares[0] = {0, 0};
    homeSquares[1] = {7, 7};
}

// Game Functions
// TODO: Implement actual game logic
bool GameState::activateUnit(int unitID) { return true; }
bool GameState::moveUnit(int unitID, int newX, int newY) { return true; }
bool GameState::attackUnit(int attackerID, int targetID) { return true; }
void GameState::endTurn() { }
bool GameState::checkWinCondition() const { return false; }