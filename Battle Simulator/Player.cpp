#include "player.h"
#include "monster.h"
#include <cstdlib>

Player::Player(){

    health = rand() % 151 + 100;
    attackPower = rand() % 41 + 10;
    defense = rand() % 21 + 10;
}

void Player::attack(Monster &monster){

    int damage = attackPower - monster.getDefense();
    if (damage <= 0 )
    {
        damage = 1;
    }
    monster.tookDamage(damage);
}

int Player::getHealth(){
    return health;
}

int Player::getDefense(){
    return defense;
}

int Player::getAttackPower(){
    return attackPower;
}

void Player::tookDamage(int damage) {
    health = health - damage;
}


