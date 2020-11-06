//
// Created by GL502VM on 12.10.2020.
//

#ifndef ARMY_ROGUE_H
#define ARMY_ROGUE_H

#include "../ability/RogueAbility.h"
#include "Warrior.h"

class Rogue : public Warrior {
public:
    Rogue(const char* title);
    virtual ~Rogue();

    void attack(Unit*& enemy);
};

#endif //ARMY_ROGUE_H
