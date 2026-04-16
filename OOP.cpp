#include <iostream>
#include "Character.h"
#include "Item.h"

using namespace std;

int main() {
    // Program description
    cout << "Welcome to the RPG Character Manager!\n";
    cout << "You can view characters and their items.\n\n";

    // Create at least 10 objects objective:
    
    //2 objects - character class
    //character is class
    //c1 and c2 are objects
    Character c1("Knight", 100, 20);
    Character c2("Mage", 70, 30);

    //8 separate items - class items
    //Item is class
    //individual items are objects
    Item i1("Sword", 10);
    Item i2("Shield", 5);
    Item i3("Potion", 15);
    Item i4("Axe", 12);
    Item i5("Bow", 8);
    Item i6("Dagger", 6);
    Item i7("Staff", 14);
    Item i8("Helmet", 4);

    // assigns items to characters
    c1.addItem(i1);
    c1.addItem(i2);
    c1.addItem(i3);

    c2.addItem(i4);
    c2.addItem(i5);
    c2.addItem(i6);
    c2.addItem(i7);
    c2.addItem(i8);

    // Display info
    c1.showStats();
    cout << endl;
    c1.showInventory();

    cout << endl;
    cout << endl;
    cout << endl;

    c2.showStats();
    cout << endl;
    c2.showInventory();

    return 0;
}