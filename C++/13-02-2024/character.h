//Garibay Ochoa Osvaldo Samuel - 23310130
#ifndef RPG_CHARACTER_H
#define RPG_CHARACTER_H
#include <iostream>
#include <string>

using namespace std;

class Character {
protected:
    string name;
    int health;
    int attack;
    int defense;
    int speed;
    
public:
    //Constructor
    virtual void doAttack(Character *target) = 0;
    Character(string, int, int, int, int);
    
    void getName(string);
    string getname();

    void setHealth(int);
    int getHealth();

    void setDefense(int);
    int getDefense();

    void setSpeed(int);
    int getSpeed();

};


#endif //RPG_PLAYER_H