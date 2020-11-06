//
// Created by GL502VM on 04.11.2020.
//

#include "WarlockAbility.h"

WarlockAbility::WarlockAbility(SpellCaster *owner) : SpellCasterAbility(owner) {
    this->isDemonExist = false;
}

WarlockAbility::~WarlockAbility() = default;

void WarlockAbility::createDemon() {
    if ( !isDemonExist ) {
        this->isDemonExist = true;
    }
}

void WarlockAbility::deleteDemon() {
    if ( isDemonExist ) {
        this->isDemonExist = false;
    }
}

bool WarlockAbility::getIsDemonExist() const {
    return this->isDemonExist;
}
