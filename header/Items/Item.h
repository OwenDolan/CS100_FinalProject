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
    bool getUseable();
    bool getEquipable();
    bool getDeletable();
  protected:
    string itemName;
    string description;
    int price;
    bool useable;
    bool equipable;
    bool deletable;
};

class QuestItem : public Item {
public:
QuestItem(int p, string name) {
  price = p;
  itemName = name;
}
void display() {}
};
#endif
