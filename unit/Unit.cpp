//
// Created by GL502VM on 31.10.2020.
//

#include "Unit.h"
Unit::Unit() {}
Unit::~Unit() {};


void Unit::incHpLimit(int value) {
    this->state->incHpLimit(value);
}

void Unit::incDmg(int value) {
    this->state->incDmg(value);
}

void Unit::decHpLimit(int value) {
    this->state->decHpLimit(value);
}

void Unit::decDmg(int value) {
    this->state->decDmg(value);
}

void Unit::setType(int name) {
    this->type = name;
}

const char* Unit::getTitle() const {
    return this->state->getTitle();
}

int Unit::getType() const {
    return this->type;
}

bool Unit::getIsUndead() const {
    return this->state->getIsUndead();
}

std::string Unit::getNameOfType() const {
    return this->nameOfType;
}

int Unit::getHp() const {
    return this->state->getHp();
}

int Unit::getMp() const {
    return this->state->getMp();
}

int Unit::getHpLimit() const {
    return this->state->getHpLimit();
}

int Unit::getMagicImmun() const {
    return this->state->getMagicImmun();
}

int Unit::getDmg() const {
    return this->state->getDmg();
}


bool Unit::getIsWarrior() const {
    return this->isWarrior;
}

bool Unit::getUnitIsDead() const {
    return this->state->getIsUnitDead();
}

bool Unit::getAttackedByWar() const {
    return this->isAttackedByWar;
}

void Unit::takeDmg(int dmg) {
    if ( this->getUnitIsDead() && this->isAttackedByWar ) {
        this->isAttackedByWar = false;
        auto it = listOfNecromancers.begin();
        for ( ; it != listOfNecromancers.end(); it++ ) {
            (*it)->action(5);
        }
    }
    this->state->takeDmg(dmg);
}

void Unit::takeMpDmg(int dmg) {
    if ( this->getUnitIsDead() && this->isAttackedByWar ) {
        std::cout << "p" << std::endl;
        this->isAttackedByWar = false;
        auto it = listOfNecromancers.begin();
        for ( ; it == listOfNecromancers.end(); it++ ) {
            (*it)->action(5);
        }
    }
    this->state->takeMpDmg(dmg);
}

void Unit::addHp(int hp) {
    if ( this->getUnitIsDead() && this->isAttackedByWar ) {
        this->isAttackedByWar = false;
        auto it = listOfNecromancers.begin();
        for ( ; it != listOfNecromancers.end(); it++ ) {
            (*it)->action(5);
        }
    }
    this->state->addHp(hp);
}

void Unit::attackedByWar(Unit* necromancer) {

    if ( !this->getUnitIsDead() ) {

        this->isAttackedByWar = true;
        this->listOfNecromancers.insert(necromancer);
    }
}

void Unit::cancelAttackByWar() {
    this->isAttackedByWar = false;
}

bool Unit::getIsDemonExist() {}
