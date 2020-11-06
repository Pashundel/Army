//
// Created by GL502VM on 30.10.2020.
//

#ifndef ARMY_BERSERKABILITY_H
#define ARMY_BERSERKABILITY_H

#include "Ability.h"

class BerserkAbility : public Ability {
public:
    explicit BerserkAbility(Warrior* owner);
    virtual ~BerserkAbility();

    virtual void attack(Unit* enemy);
};


#endif //ARMY_BERSERKABILITY_H
