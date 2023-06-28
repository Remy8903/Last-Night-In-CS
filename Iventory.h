#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>

struct Item {
    std::string name;
    int quantity;
    Item* next;
};

class Inventory {
private:
    Item* head;

public:
    Inventory();
    ~Inventory();

    void appendItem(const std::string& name);
    void displayInventory();
};

#endif

