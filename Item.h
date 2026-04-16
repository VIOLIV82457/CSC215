#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;
//<string> for string name
//<vector> for vector<Item>
//"Item.h" using Item objects

class Item {
//These variables belong to the object and can't be accessed directly from main.cpp
// [insert stars] this is encapsulation [insert more stars]

private:
    string itemName;
    int power;

public:
    Item(string n, int p);

    void displayItem();
};

#endif