//
// Created by GL502VM on 12.10.2020.
//

#include "Rogue.h"

Rogue::Rogue(const char* title) : Warrior(title) {
    this->state = new State(title, 100, 0, 25, 1, false);
    this->ability = new RogueAbility(this);
    this->type = UNIT_ROGUE;
    this->nameOfType = "Rogue";
    this->isUndead = false;
}

Rogue::~Rogue() = default;

void Rogue::attack(Unit *&enemy) {
    this->ability->attack(enemy);
}
