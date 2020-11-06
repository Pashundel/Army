//
// Created by GL502VM on 30.10.2020.
//

#include "BerserkAbility.h"

BerserkAbility::BerserkAbility(Warrior *owner) : Ability(owner) {}
BerserkAbility::~BerserkAbility() = default;

void BerserkAbility::attack(Unit *enemy) {
    Ability::attack(enemy);
}