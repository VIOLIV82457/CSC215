#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>
#include "Item.h"

using namespace std;
//<string> for string name
//<vector> for vector<Item>
//<int> for integers
//"Character.h" using character objects

class Character {
private:
    string name;
    int health;
    int attack;
    vector<Item> inventory; // holds items

public:
    Character(string n, int h, int a);

    void addItem(Item item);
    void showInventory();
    void showStats();
};

#endif