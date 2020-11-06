//
// Created by GL502VM on 12.10.2020.
//

#include "RogueAbility.h"


RogueAbility::RogueAbility(Unit* owner) : Ability(owner) {}
RogueAbility::~RogueAbility() {}

void RogueAbility::attack(Unit* enemy) {
    enemy->takeDmg(this->owner->getDmg());
}