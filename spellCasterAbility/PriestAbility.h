//
// Created by GL502VM on 31.10.2020.
//

#ifndef ARMY_PRIESTABILITY_H
#define ARMY_PRIESTABILITY_H

#include "SpellCasterAbility.h"


class PriestAbility : public SpellCasterAbility {
public:
    PriestAbility(SpellCaster* owner);
    ~PriestAbility();
};


#endif //ARMY_PRIESTABILITY_H
