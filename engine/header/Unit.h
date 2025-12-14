#pragma once

// Matthew Romano - December 14th, 2025 - Turn Based Game
// Unit header file declaration

class Unit {
    int unitID;
    int playerID; 
    int health;
    int x, y;         // Unit position on the grid
    bool hasAttacked; // A unit can attack only once per turn

public: // Constructor and Getters/Setters
    Unit();
    Unit(int id, int pID, int hp, int posX, int posY);
    
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
};