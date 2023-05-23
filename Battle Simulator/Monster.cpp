#include "monster.h"
#include "player.h"

Monster::Monster() {
    health = rand() % 151 + 100;
    attackPower = rand() % 41 + 10; 
    defense = rand() % 21 + 10;
}

void Monster::attack(Player& player) {
    int damage = attackPower - player.getDefense();
    if (damage < 1) {
        damage = 1;
    }
    player.tookDamage(damage);
}

int Monster::getHealth(){
    if (health <= 0){
        return 0;
    }
    return health;
}

int Monster::getDefense(){
    return defense;
}

void Monster::tookDamage(int damage) {
    health = health - damage;
}

int Monster::getAttackPower(){
    return attackPower;
}