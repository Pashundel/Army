//
// Created by GL502VM on 30.10.2020.
//

#include "Berserk.h"
#include "../ability/Ability.h"
#include "../ability/BerserkAbility.h"

Berserk::Berserk(const char *title) : Warrior(title) {
    this->state = new State(title, 100, 0, 25, 0, false);
    this->ability = new BerserkAbility(this);
    this->type = UNIT_BERSERK;
    this->nameOfType = "Berserk";
    this->isUndead = false;
}

Berserk::~Berserk() = default;

void Berserk::attack(Unit *&enemy) {

}
