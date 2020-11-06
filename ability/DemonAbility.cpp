//
// Created by GL502VM on 04.11.2020.
//

#include "DemonAbility.h"

DemonAbility::DemonAbility(Warrior *owner) : Ability(owner) {}

DemonAbility::~DemonAbility() {}

void DemonAbility::attack(Unit *enemy) {
    Ability::attack(enemy);
}
