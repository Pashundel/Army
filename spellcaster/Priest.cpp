//
// Created by GL502VM on 31.10.2020.
//

#include "Priest.h"
#include "../spellCasterAbility/PriestAbility.h"

Priest::Priest(const char *title) : SpellCaster(title) {
    this->state = new State(title, 120, 60, 0, 1, false);
    this->ability = new PriestAbility(this);
    this->type = PRIEST;
    this->nameOfType = "Priest";
    this->isUndead = false;
}

Priest::~Priest() = default;
