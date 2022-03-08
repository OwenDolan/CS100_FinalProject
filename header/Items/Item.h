#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>

using namespace std;

class Item {
  public:
    virtual void display() = 0;
    void printItemName();
    void printDescription();
    int getPrice();
  protected:
    string itemName;
    string description;
    int price;
    bool useable;
    bool equipable;
    bool deleteable;
};

#endif
