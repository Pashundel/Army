//
// Created by GL502VM on 04.11.2020.
//

#ifndef ARMY_DEMONABILITY_H
#define ARMY_DEMONABILITY_H

#include "Ability.h"

class DemonAbility : public Ability {
public:
    DemonAbility(Warrior* owner);
    ~DemonAbility();

    virtual void attack(Unit* enemy);
};


#endif //ARMY_DEMONABILITY_H
