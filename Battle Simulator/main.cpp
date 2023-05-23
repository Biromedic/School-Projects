#include <iostream>
#include "player.h"
#include "monster.h"

using namespace std;

int main(){

    srand(time(nullptr));

    Player player;
    Monster monster;
    int turn =1;


    while (player.getHealth() > 0 && monster.getHealth() > 0) {
        cout << "round:" << turn << endl;
        player.attack(monster);
        cout << "Player hit the monster with attack point: " << (player.getAttackPower() - monster.getDefense()) << ". Monster remaining health: " << monster.getHealth() << endl;

        if (monster.getHealth() <= 0) {
            break;
        }

        monster.attack(player);
        cout << "Monster hit the player with attack point: " << monster.getAttackPower() - player.getDefense() << ". Player remaining health: " << player.getHealth() << endl;
        cout << "-*-*-*--*--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*--*--*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<< endl;

        turn++;

    }

    if (monster.getHealth() > 0) {
        cout << "Monster wins." << endl;
    }
    else {
        cout << "Player wins." << endl;
    }
    return 0;
}
