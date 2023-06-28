#include "Inventory.h"
#include <iostream>

Inventory::Inventory() {
    head = nullptr;
}

Inventory::~Inventory() {
    Item* current = head;
    while (current != nullptr) {
        Item* next = current->next;
        delete current;
        current = next;
    }
}

void Inventory::appendItem(const std::string& name) {
    Item* newItem = new Item;
    newItem->name = name;
    newItem->next = nullptr;

    if (head == nullptr) {
        head = newItem;
    } else {
        Item* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newItem;
    }
}

void Inventory::displayInventory() {
    if (head == nullptr) {
        std::cout << "Inventory is empty." << std::endl;
    } else {
        std::cout << "Inventory:" << std::endl;
        Item* current = head;
        while (current != nullptr) {
            std::cout << "Item: " << current->name << ", Quantity: " << current->quantity << std::endl;
            current = current->next;
        }
    }
}


