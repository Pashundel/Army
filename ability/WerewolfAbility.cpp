//
// Created by GL502VM on 12.10.2020.
//

#include "WerewolfAbility.h"

WerewolfAbility::WerewolfAbility(Unit *owner) : Ability(owner) {}
WerewolfAbility::~WerewolfAbility() = default;

void WerewolfAbility::attack(Unit *enemy) {
    Ability::attack(enemy);
}

void WerewolfAbility::turnWolf() {
    if ( this->owner->getType() == UNIT_WOLF ) {
        this->owner->decHpLimit(100);
        this->owner->takeDmg(100);
        this->owner->decDmg(50);
        this->owner->setType(UNIT_WEREWOLF);
    } else {
        this->owner->incHpLimit(100);
        this->owner->addHp(100);
        this->owner->incDmg(50);
        this->owner->setType(UNIT_WOLF);
    }
}

