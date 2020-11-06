//
// Created by GL502VM on 10.10.2020.
//

#include "State.h"

State::State(const char* title, int hp, int mp, int dmg, int magicImmun, bool isUndead)
        : title(title), hp(hp), mp(mp), hpLimit(hp), dmg(dmg), magicImmun(magicImmun) {
    this->mpLimit = mp;
    this->isUndead = isUndead;
    this->unitIsDead = false;
}

State::~State() = default;

void State::ensureIsAlive() {
    if ( this->hp == 0 ) {
        this->unitIsDead = true;
    }
}

void State::incHpLimit(int value) {
    this->hpLimit += value;
}

void State::incDmg(int value) {
    this->dmg += value;
}

void State::decHpLimit(int value) {
    this->hpLimit -= value;
}

void State::decDmg(int value) {
    this->dmg -= value;
}

const char* State::getTitle() const {
    return this->title;
}

int State::getHp() const {
    return this->hp;
}

int State::getMp() const {
    return this->mp;
}

int State::getHpLimit() const {
    return this->hpLimit;
}

int State::getDmg() const {
    return this->dmg;
}

int State::getMagicImmun() const {
    return this->magicImmun;
}

bool State::getIsUndead() const {
    return this->isUndead;
}

bool State::getIsUnitDead() const {
    return this->unitIsDead;
}

void State::addHp(int hitPoints) {
    this->ensureIsAlive();

    if ( !unitIsDead ) {
        int total = this->hp + hitPoints;

        if (total > this->hpLimit) {
            this->hp = this->hpLimit;
            return;
        }
        this->hp = total;
    } else {
        std::cout << this->title << " " << "is dead" << std::endl;
    }
}

void State::takeDmg(int damage) {
    this->ensureIsAlive();

    if ( !unitIsDead ) {
        if (damage > this->hp) {
            this->hp = 0;
            return;
        }
        this->hp -= damage;
        if ( hp == 0 ) {
            this->unitIsDead = true;
        }
    } else {
        std::cout << this->title << " " << "is dead" << std::endl;
    }
}

void State::addMp(int hitPoints) {
    this->ensureIsAlive();

    if ( !unitIsDead ) {
        int total = this->mp + hitPoints;

        if (total > this->mpLimit) {
            this->mp = this->mpLimit;
            return;
        }
        this->mp = total;
    } else {
        std::cout << this->title << " " << "is dead" << std::endl;
    }
}

void State::takeMpDmg(int damage) {
    this->ensureIsAlive();

    if ( !unitIsDead ) {
        if ( damage > this->mp ) {
            damage -= mp;
            mp = 0;
            this->takeDmg(damage);
        } else {
            this->mp -= damage;
        }
    } else {
        std::cout << this->title << " " << "is dead" << std::endl;
    }
}