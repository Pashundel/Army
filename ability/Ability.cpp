//
// Created by GL502VM on 10.10.2020.
//

#include "Ability.h"

Ability::Ability(Unit* owner) {
    this->owner = owner;
}

Ability::~Ability() = default;

void Ability::counterAttack(Unit* enemy) {
    enemy->takeDmg(this->owner->getDmg()/2);
}

void Ability::attack(Unit* enemy) {
    enemy->takeDmg(this->owner->getDmg());
    if ( enemy->getIsWarrior() ) {
        enemy->action(1, this->owner);
    }
}


void Ability::turnWolf() {}
