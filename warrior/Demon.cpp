//
// Created by GL502VM on 04.11.2020.
//

#include "Demon.h"
#include "../ability/DemonAbility.h"

Demon::Demon(const char *title) : Warrior(title) {
    this->state = new State(title, 50, 0, 12, 1, true);
    this->ability = new DemonAbility(this);
    this->type = UNIT_DEMON;
    this->nameOfType = "Demon";
    this->isUndead = true;
}

Demon::~Demon() {}

void Demon::attack(Unit *&enemy) {
    this->ability->attack(enemy);
}
