//
// Created by GL502VM on 12.10.2020.
//

#ifndef ARMY_VAMPIRE_H
#define ARMY_VAMPIRE_H

#include "../ability/VampireAbility.h"
#include "Warrior.h"
#include "../exeptions/VampireConvertException.h"

class Vampire : public Warrior {
public:
    Vampire(const char* title);
    virtual ~Vampire();

    virtual void attack(Unit* &enemy);
};


#endif //ARMY_VAMPIRE_H
