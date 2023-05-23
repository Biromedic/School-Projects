#ifndef PLAYER_H
#define PLAYER_H
#include <cstdlib>
#include "Monster.h"

class Player
{
private:
    int health;
    int attackPower;
    int defense;
public:
    Player();
    int getHealth();
    void attack(Monster& monster);
    int getAttackPower();
    int getDefense();
    void tookDamage(int damage);
};
#endif // PLAYER_H