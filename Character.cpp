#include "Character.h"
#include <iostream>

using namespace std;
//character class "home"


//Character:: assigns class
//everything else is constructed
//constructor = where the object is created within the class
Character::Character(string n, int h, int a) {
    name = n;
    health = h;
    attack = a;
}

// Adds an item to the inventory vector
//Vector is a dynamic array
void Character::addItem(Item item) {
    inventory.push_back(item);
}

// Displays all items the character has
void Character::showInventory() {
    cout << name << "'s Inventory:\n";

    for (int i = 0; i < inventory.size(); i++) {
        inventory[i].displayItem();
    }
}

// Displays character stats
void Character::showStats() {
    cout << "Name: " << name << endl;
    cout << "Health: " << health << endl;
    cout << "Attack: " << attack << endl;
}