//
// Created by GL502VM on 04.11.2020.
//

#include "Warlock.h"
#include "../spellCasterAbility/WarlockAbility.h"

Warlock::Warlock(const char *title) : SpellCaster(title) {
    this->state = new State(title, 90, 40, 1, 1, false);
    this->ability = new WarlockAbility(this);
    this->type = WARLOCK;
    this->nameOfType = "Warlock";
    this->isUndead = false;
}

Warlock::~Warlock() {}

bool Warlock::getIsDemonExist() {
    this->ability->getIsDemonExist();
}

void Warlock::createDemon() {
    this->ability->createDemon();
}

void Warlock::deleteDemon() {
    this->ability->deleteDemon();
}