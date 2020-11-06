//
// Created by GL502VM on 28.10.2020.
//

#include "MasterHeal.h"
#include "../spellcaster/Spellcaster.h"

MasterHeal::MasterHeal(Unit *owner) : Spell(owner) {
    this->name = "MasterHeal";
}
MasterHeal::~MasterHeal() {}

void MasterHeal::use(Unit *enemy) {
    if (enemy->getIsWarrior()) {
        if (owner->getType() == WIZARD) {
            enemy->addHp(50 * enemy->getMagicImmun());
        } else if (owner->getType() == PRIEST && enemy->getIsUndead()) {
            enemy->takeDmg(100 * enemy->getMagicImmun());
        } else {
            enemy->addHp(100 * enemy->getMagicImmun());
        }
    } else {
        if (owner->getType() == WIZARD) {
            enemy->addHp(50 * enemy->getMagicImmun());
        } else if (owner->getType() == PRIEST && enemy->getIsUndead()) {
            enemy->takeDmg(100 * enemy->getMagicImmun());
        } else {
            enemy->addHp(100 * enemy->getMagicImmun());
        }
    }
}
