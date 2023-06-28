#ifndef CLUE_H
#define CLUE_H

#include <string>

struct ClueItem {
    std::string description;
    ClueItem* next;
};

class Clue {
private:
    ClueItem* head;

public:
    Clue();
    ~Clue();

    void appendClue(const std::string& description);
    void displayClues();
};

#endif // CLUE_H


