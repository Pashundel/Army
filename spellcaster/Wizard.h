//
// Created by GL502VM on 28.10.2020.
//

#ifndef ARMY_WIZARD_H
#define ARMY_WIZARD_H
#include "Spellcaster.h"
#include "../spellCasterAbility/WizardAbility.h"

class Wizard : public SpellCaster {
public:
    Wizard(const char* title);
    ~Wizard();
};
#endif //ARMY_WIZARD_H
