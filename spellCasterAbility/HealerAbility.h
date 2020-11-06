//
// Created by GL502VM on 29.10.2020.
//

#ifndef ARMY_HEALERABILITY_H
#define ARMY_HEALERABILITY_H

#include "SpellCasterAbility.h"

class HealerAbility : public SpellCasterAbility {
public:
    HealerAbility(SpellCaster* owner);
    ~HealerAbility();
};


#endif //ARMY_HEALERABILITY_H
