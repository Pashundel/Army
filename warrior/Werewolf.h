//
// Created by GL502VM on 12.10.2020.
//

#ifndef ARMY_WEREWOLF_H
#define ARMY_WEREWOLF_H

#include "Warrior.h"
#include "../ability/WerewolfAbility.h"
#include "../exeptions/WerewolfConvertException.h"

class Werewolf : public Warrior {
public:
    Werewolf(const char* title);
    virtual ~Werewolf();

    void turnWolf();

    virtual void attack(Unit* &enemy);
};
#endif //ARMY_WEREWOLF_H
