#include "Item.h"

#include <iostream>
#include <string>

using namespace std;

void Item::printItemName() {
  cout << itemName << endl;
}

void Item::printDescription() {
  cout << description << endl;
}

int Item::getPrice() {
  return price;
}
