#include "../header/Unit.h"

// Matthew Romano - December 14th, 2025 - Turn Based Game
// Unit class implementation

// Constructors
Unit::Unit(int unitID, int playerID, int health, int x, int y) {
    this->unitID = unitID;
    this->playerID = playerID;
    this->health = health;
    this->x = x;
    this->y = y;
    this->hasAttacked = false;
}

// Getters and Setters
int Unit::getUnitID() const {
    return unitID;
}

void Unit::setUnitID(int id) {
    unitID = id;
}

int Unit::getPlayerID() const {
    return playerID;
}

void Unit::setPlayerID(int pID) {
    playerID = pID;
}

int Unit::getHealth() const {
    return health;
}

void Unit::setHealth(int hp) {
    health = hp;
}

int Unit::getX() const {
    return x;
}

void Unit::setX(int posX) {
    x = posX;
}

int Unit::getY() const {
    return y;
}

void Unit::setY(int posY) {
    y = posY;
}

bool Unit::getAttackState() const {
    return hasAttacked;
}

void Unit::setAttackState(bool attacked) {
    hasAttacked = attacked;
}

// Other member functions 
// TODO: Implement movement and attack logic

void Unit::move(int newX, int newY) {
    x = newX;
    y = newY;
}

void Unit::attack(Unit &target) {
    if (canAttack()) {
        target.setHealth(target.getHealth() - 1); // Example damage value
        this->setAttackState(true);
    }
}

bool Unit::canMove() const {
    return !hasAttacked && health > 0;
} 

bool Unit::canAttack() const {
    return !hasAttacked && health > 0; 
}