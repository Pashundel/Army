//
// Created by GL502VM on 12.10.2020.
//

#ifndef ARMY_VAMPIREABILITY_H
#define ARMY_VAMPIREABILITY_H

#include "Ability.h"

class VampireAbility : public Ability {
public:
    VampireAbility(Unit* owner);
    virtual ~VampireAbility();

    virtual void attack(Unit* enemy);
    virtual void counterAttack(Unit* enemy);
};

#endif //ARMY_VAMPIREABILITY_H
