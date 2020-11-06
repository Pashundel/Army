//
// Created by GL502VM on 10.10.2020.
//

#include "Warrior.h"

Warrior::Warrior(const char* title) {
    this->isWarrior = true;
    this->isAttackedByWar = false;

}

Warrior::~Warrior() {
    delete(this->state);
    delete(this->ability);
}

void Warrior::action(int action, Unit *&enemy) {
    if ( action == 0 ) {
        this->attack(enemy);
    } else if ( action == 1 ) {
        this->counterAttack(enemy);
    }
}

void Warrior::action(int action) {
    if ( action == 2 ) {
        this->turnWolf();
    }
}


void Warrior::counterAttack(Unit *enemy) {
    this->ability->counterAttack(enemy);
}


void Warrior::turnWolf() {}

void Warrior::print() {
    std::cout << "************************" << std::endl;
    if ( !this->getUnitIsDead() ) {
        std::cout << this->getNameOfType() << " " << this->getTitle() << std::endl;
        std::cout << "Hit Points: " << this->getHp() << std::endl;
        std::cout << "Damage: " << this->getDmg() << std::endl;
        std::cout << "***********************" << std::endl;
    } else {
        std::cout << this->getNameOfType() << " " << this->getTitle() << std::endl;
        std::cout << "Unit is dead" << std::endl;
    }
}