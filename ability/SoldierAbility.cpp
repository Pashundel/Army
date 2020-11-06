//
// Created by GL502VM on 10.10.2020.
//


#include "SoldierAbility.h"

SoldierAbility::SoldierAbility(Unit* owner) : Ability(owner) {}
SoldierAbility::~SoldierAbility() = default;

void SoldierAbility::attack(Unit* enemy) {
    Ability::attack(enemy);
}
