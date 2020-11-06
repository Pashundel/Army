//
// Created by GL502VM on 12.10.2020.
//

#include "Werewolf.h"

Werewolf::Werewolf(const char* title) : Warrior(title) {
    this->state = new State(title, 120, 0, 25, 1, false);
    this->ability = new WerewolfAbility(this);
    this->type = UNIT_WEREWOLF;
    this->nameOfType = "WereWolf";
    this->isUndead = false;
}

Werewolf::~Werewolf() = default;

void Werewolf::turnWolf() {
    this->ability->turnWolf();
}

void Werewolf::attack(Unit* &enemy){
    this->ability->attack(enemy);
    if ( enemy->getType() != UNIT_WEREWOLF && enemy->getType() != UNIT_VAMPIRE ) {
        enemy = new Werewolf(enemy->getTitle());
    }
}
