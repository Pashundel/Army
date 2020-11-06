//
// Created by GL502VM on 28.10.2020.
//

#ifndef ARMY_WIZARDABILITY_H
#define ARMY_WIZARDABILITY_H

#include "../spellCasterAbility/SpellCasterAbility.h"


class WizardAbility : public SpellCasterAbility {
public:
    WizardAbility(SpellCaster* owner);
    ~WizardAbility();
};


#endif //ARMY_WIZARDABILITY_H
