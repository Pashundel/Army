//
// Created by GL502VM on 23.10.2020.
//
#include "Spellcaster.h"
#include "../unit/Unit.h"

SpellCaster::SpellCaster(const char* title) {
    this->isWarrior = false;
    this->isAttackedByWar = false;
}

SpellCaster::~SpellCaster() {
    delete(this->state);
    delete(this->ability);
}


std::string SpellCaster::getNameOfSpell() const {
    return this->ability->getNameOfSpell();
}

void SpellCaster::nextSpell() {
    this->ability->nextSpell();
}

void SpellCaster::useSpell(Unit *enemy) {
    this->ability->useSpell(enemy);
}

void SpellCaster::action(int action, Unit *&enemy) {
    if ( action == 0 ) {
        if ( enemy->getUnitIsDead() && enemy->getAttackedByWar() ) {
            enemy->cancelAttackByWar();
            auto it = enemy->listOfNecromancers.begin();
            for ( ; it != enemy->listOfNecromancers.end(); it++ ) {
                (*it)->action(5);
            }
        }
        this->useSpell(enemy);
    }
}

void SpellCaster::action(int action) {
    if ( action == 1 ) {
        SpellCaster::nextSpell();
    } else if ( action == 2 ) {
        this->getNameOfSpell();
    } else if ( action == 3 ) {
        this->createDemon();
    } else if ( action == 4 ) {
        this->deleteDemon();
    } else if ( action == 5 ) {
        this->notifyNecrom(25);
    }
}

void SpellCaster::print() {
    std::cout << "*************************************" << std::endl;
    if ( !this->getUnitIsDead() ) {
        std::cout << this->getNameOfType() << " " << this->getTitle() << std::endl;
        std::cout << "Hit Points: " << this->getHp() << std::endl;
        std::cout << "Magic Points: " << this->getMp() << std::endl;
        std::cout << "Using spell: " << this->getNameOfSpell() << std::endl;
        std::cout << "*************************************" << std::endl;
    } else {
        std::cout << this->getNameOfType() << " " << this->getTitle() << std::endl;
        std::cout << "Unit is dead" << std::endl;
    }
}

bool SpellCaster::getIsDemonExist() const {}

void SpellCaster::deleteDemon() {}

void SpellCaster::createDemon() {}

void SpellCaster::notifyNecrom(int hp) {}




