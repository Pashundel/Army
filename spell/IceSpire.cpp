//
// Created by GL502VM on 28.10.2020.
//

#include "IceSpire.h"
#include "../spellcaster/Spellcaster.h"

IceSpire::IceSpire(Unit *owner) : Spell(owner) {
    this->name = "IceSpire";
}
IceSpire::~IceSpire() {}

void IceSpire::use(Unit *enemy) {
    if ( enemy->getIsWarrior() ) {
        if (owner->getType() == WIZARD) {
            enemy->takeDmg(40 * enemy->getMagicImmun());
        } else if (owner->getType() == PRIEST && enemy->getIsUndead()) {
            enemy->takeDmg(40 * enemy->getMagicImmun());
        } else {
            enemy->takeDmg(20 * enemy->getMagicImmun());
        }
    } else {
        if (owner->getType() == WIZARD) {
            enemy->takeMpDmg(40 * enemy->getMagicImmun());
        } else if (owner->getType() == PRIEST && enemy->getIsUndead()) {
            enemy->takeMpDmg(40 * enemy->getMagicImmun());
        } else {
            enemy->takeMpDmg(20 * enemy->getMagicImmun());
        }
    }
}
