#include <iostream>
#include "Enemy/Enemy.h"
#include "Player/Player.h"

using namespace std;

void Combate(Player *player, Enemy *enemy){
    cout << "\t-- Un combate contra " <<enemy->getName()<<" inicia --" << endl << endl;
  while(player->getHealth() > 0 && enemy->getHealth() > 0) {
      cout << "> Para atacar presione cualquier tecla:" << endl;
      getchar();
    player->doAttack(enemy);
    if (enemy->getHealth() <= 0) break;
    enemy->doAttack(player);
    cout<<"------------------------------------------"<< endl << endl;
  }
}

int main() {

    Player *player = new Player("Jugador", 100, 10, 5, 5);
    Enemy *enemy = new Enemy("Arsene Lupin", 100, 6, 4, 3);

    Combate(player, enemy);

    cout << "\t-- Para continuar presione cualquier tecla..." << endl << endl;
    getchar();
  
    cout<< player->toString()<< endl << endl;
    cout<< enemy->toString()<< endl;
  
    return 0;
}
