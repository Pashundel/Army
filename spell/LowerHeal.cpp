//
// Created by GL502VM on 28.10.2020.
//

#include "LowerHeal.h"
#include "../spellcaster/Spellcaster.h"

LowerHeal::LowerHeal(Unit *owner) : Spell(owner) {
    this->name = "LowerHeal";
}
LowerHeal::~LowerHeal() {}

void LowerHeal::use(Unit *enemy) {
    if ( enemy->getIsWarrior() ) {
        if (owner->getType() == WIZARD) {
            enemy->addHp(15 * enemy->getMagicImmun());
        } else if (owner->getType() == PRIEST && enemy->getIsUndead()) {
            enemy->takeDmg(30 * enemy->getMagicImmun());
        } else {
            enemy->addHp(30 * enemy->getMagicImmun());
        }
    } else {
        if (owner->getType() == WIZARD) {
            enemy->addHp(15 * enemy->getMagicImmun());
        } else if (owner->getType() == PRIEST && enemy->getIsUndead()) {
            enemy->takeDmg(30 * enemy->getMagicImmun());
        } else {
            enemy->addHp(30 * enemy->getMagicImmun());
        }
    }
}