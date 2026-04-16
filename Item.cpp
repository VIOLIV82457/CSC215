#include "Item.h"
#include <iostream>

using namespace std;

// Constructor sets item name and power
//constructor = where the object is created within the class

//Item:: assigns class
//everything else is constructed
Item::Item(string n, int p) {
    itemName = n;
    power = p;
}

// Displays item info
void Item::displayItem() {
    cout << itemName << " (Power: " << power << ")" << endl;
}