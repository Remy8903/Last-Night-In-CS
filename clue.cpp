#include "clue.h"
#include <iostream>

Clue::Clue() {
    head = nullptr;
}

Clue::~Clue() {
    ClueItem* current = head;
    while (current != nullptr) {
        ClueItem* next = current->next;
        delete current;
        current = next;
    }
}

void Clue::appendClue(const std::string& description) {
    ClueItem* newClue = new ClueItem;
    newClue->description = description;
    newClue->next = nullptr;

    if (head == nullptr) {
        head = newClue;
    } else {
        ClueItem* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newClue;
    }
}

void Clue::displayClues() {
    if (head == nullptr) {
        std::cout << "No clues found." << std::endl;
    } else {
        std::cout << "Clues:" << std::endl;
        ClueItem* current = head;
        while (current != nullptr) {
            std::cout << "- " << current->description << std::endl;
            current = current->next;
        }
    }
}


