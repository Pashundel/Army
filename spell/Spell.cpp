//
// Created by GL502VM on 28.10.2020.
//

#include "Spell.h"

Spell::Spell(Unit* owner) {
    this->owner = owner;
}
Spell::~Spell() {}

std::string Spell::getName() const {
    return this->name;
}

void Spell::use(Unit *enemy) {}
