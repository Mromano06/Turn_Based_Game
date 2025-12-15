#pragma once
#include <iostream>

// Matthew Romano - December 14th, 2025 - Turn Based Game
// Unit header file declaration

class Unit {
    int unitID;
    int playerID; 
    int health;
    int x, y;         // Unit position on the grid
    bool hasAttacked; // A unit can attack only once per turn

public:
    // Construtctor
    Unit(int unitID, int playerID, int health, int x, int y);

    // Getters and Setters
    int getUnitID() const;
    void setUnitID(int id);
    int getPlayerID() const;
    void setPlayerID(int pID);
    int getHealth() const;
    void setHealth(int hp);
    int getX() const;
    void setX(int posX);
    int getY() const;
    void setY(int posY);
    bool getAttackState() const;
    void setAttackState(bool attacked);

    // Other member functions
    void move(int newX, int newY);
    void attack(Unit &target);
    bool canMove() const;   // Validates if the unit can move to a specified space
    bool canAttack() const; // Checks if the unit has already attacked this turn
};