//
// Created by GL502VM on 10.10.2020.
//

#ifndef ARMY_SOLDIER_H
#define ARMY_SOLDIER_H

#include "Warrior.h"

class Soldier : public Warrior {
public:
    Soldier(const char* title);
    virtual ~Soldier();

    virtual void attack(Unit*& enemy);
};

#endif //ARMY_SOLDIER_H
