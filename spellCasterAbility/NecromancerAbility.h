//
// Created by GL502VM on 04.11.2020.
//

#ifndef ARMY_NECROMANCERABILITY_H
#define ARMY_NECROMANCERABILITY_H

#include "SpellCasterAbility.h"

class NecromancerAbility : public SpellCasterAbility {
public:
    NecromancerAbility(SpellCaster* owner);
    ~NecromancerAbility();
};


#endif //ARMY_NECROMANCERABILITY_H
