//
// Created by GL502VM on 10.10.2020.
//

#ifndef ARMY_SOLDIERABILITY_H
#define ARMY_SOLDIERABILITY_H

#include "Ability.h"

class SoldierAbility : public Ability {
public:
    explicit SoldierAbility(Unit* owner);
    virtual ~SoldierAbility();

    virtual void attack(Unit* enemy);
};

#endif //ARMY_SOLDIERABILITY_H
