//
// Created by Victor Navarro on 13/02/24.
//

#include "Enemy.h"
#include <iostream>

using namespace std;

Enemy::Enemy(string name, int health, int attack, int defense, int speed) : Character(name, health, attack, defense, speed) {
}

void Enemy::doAttack(Character *target) {
    int trueDamage = getAttack() - target->getDefense();
    target->takeDamage(trueDamage);
}

void Enemy::takeDamage(int damage) {
    setHealth(getHealth() - damage);
    if(getHealth() <= 0) {
        cout<<getName()<<" MURIO"<<endl << endl;
    }
    else {
        cout<<getName()<<" recibio golpe de -" << damage << " HP, Ouch!!" << endl;
        cout<<" Vida restante de enemigo: " << getHealth() << endl << endl;
    }
}

