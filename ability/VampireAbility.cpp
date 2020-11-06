//
// Created by GL502VM on 12.10.2020.
//

#include "VampireAbility.h"

VampireAbility::VampireAbility(Unit *owner) : Ability(owner) {}
VampireAbility::~VampireAbility() = default;

void VampireAbility::attack(Unit* enemy) {
    int damage = this->owner->getDmg();
    Ability::attack(enemy);
    this->owner->addHp(damage/2);
}

void VampireAbility::counterAttack(Unit *enemy) {
    int damage = this->owner->getDmg();
    Ability::counterAttack(enemy);
    this->owner->addHp(damage/4);
}