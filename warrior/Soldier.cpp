//
// Created by GL502VM on 10.10.2020.
//

#include "Soldier.h"

#include "../ability/SoldierAbility.h"

Soldier::Soldier(const char* title) : Warrior(title) {
    this->state = new State(title, 100, 0, 20, 1, false);
    this->ability = new SoldierAbility(this);
    this->type = UNIT_SOLDIER;
    this->nameOfType = "Soldier";
    this->isUndead = false;
}

void Soldier::attack(Unit*& enemy) {
    this->ability->attack(enemy);
}

Soldier::~Soldier() = default;