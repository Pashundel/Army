//
// Created by GL502VM on 29.10.2020.
//

#include "Healer.h"
#include "../spellCasterAbility/HealerAbility.h"

Healer::Healer(const char *title) : SpellCaster(title) {
    this->state = new State(title, 80, 80, 0, 1, false);
    this->ability = new HealerAbility(this);
    this->type = HEALER;
    this->nameOfType = "Healer";
    this->isUndead = false;
}

Healer::~Healer() {}