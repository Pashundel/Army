//
// Created by GL502VM on 30.10.2020.
//

#ifndef ARMY_BERSERK_H
#define ARMY_BERSERK_H

#include "Warrior.h"

class Unit;

class Berserk : public Warrior {
public:
    Berserk(const char* title);
    virtual ~Berserk();
    virtual void attack(Unit* &enemy);
};


#endif //ARMY_BERSERK_H
