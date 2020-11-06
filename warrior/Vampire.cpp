//
// Created by GL502VM on 12.10.2020.
//

#include "Vampire.h"

Vampire::Vampire(const char* title) : Warrior(title) {
    this->state = new State(title, 80, 0, 12, 1, false);
    this->ability = new VampireAbility(this);
    this->type = UNIT_VAMPIRE;
    this->nameOfType = "Vampire";
    this->isUndead = true;
}

void Vampire::attack(Unit* &enemy){
    this->ability->attack(enemy);

    if ( enemy->getType() != UNIT_WEREWOLF || enemy->getType() != UNIT_VAMPIRE ) {
        enemy = new Vampire(enemy->getTitle());
    }
}



Vampire::~Vampire() = default;
