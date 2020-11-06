//
// Created by GL502VM on 12.10.2020.
//

#ifndef ARMY_WEREWOLFABILITY_H
#define ARMY_WEREWOLFABILITY_H

#include "Ability.h"

class WerewolfAbility : public Ability {
public:
    WerewolfAbility(Unit *owner);

    virtual ~WerewolfAbility();

    virtual void attack(Unit* enemy);

    virtual void turnWolf();

};

#endif //ARMY_WEREWOLFABILITY_H
