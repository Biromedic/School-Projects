#ifndef MONSTER_H
#define MONSTER_H

#include <cstdlib>

class Player;

class Monster
{
private:
    int health;
    int attackPower;
    int defense;
public:
    Monster();
    int getHealth();
    int getDefense();
    void attack(Player& player);
    int getAttackPower();
    void tookDamage(int damage);
};

#endif // MONSTER_H