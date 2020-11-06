//
// Created by GL502VM on 28.10.2020.
//

#include "FireBall.h"
#include "../spellcaster/Spellcaster.h"

FireBall::FireBall(Unit* owner) : Spell(owner) {
    this->name = "FireBall";
}
FireBall::~FireBall() {}

void FireBall::use(Unit *enemy) {
    if ( enemy->getIsWarrior() ) {
        if (owner->getType() == WIZARD) {
            enemy->takeDmg(80 * enemy->getMagicImmun());
        } else if (owner->getType() == PRIEST && enemy->getIsUndead()) {
            enemy->takeDmg(80 * enemy->getMagicImmun());
        } else {
            enemy->takeDmg(40 * enemy->getMagicImmun());
        }
    } else {
        if (owner->getType() == WIZARD) {
            enemy->takeMpDmg(80 * enemy->getMagicImmun());
        } else if (owner->getType() == PRIEST && enemy->getIsUndead()) {
            enemy->takeMpDmg(80 * enemy->getMagicImmun());
        } else {
            enemy->takeMpDmg(40 * enemy->getMagicImmun());
        }
    }
}

