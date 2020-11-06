//
// Created by GL502VM on 28.10.2020.
//

#include "SpellCasterAbility.h"

#include "../spell/FireBall.h"
#include "../spell/IceSpire.h"
#include "../spell/LowerHeal.h"
#include "../spell/MasterHeal.h"

enum {
    FIREBALL,
    ICESPIRE,
    LOWERHEAL,
    MASTERHEAL
};

SpellCasterAbility::SpellCasterAbility(Unit *owner) {
    this->owner = owner;
    this->spellBook.insert(std::make_pair(FIREBALL, new FireBall(owner)));
    this->spellBook.insert(std::make_pair(ICESPIRE, new IceSpire(owner)));
    this->spellBook.insert(std::make_pair(LOWERHEAL, new LowerHeal(owner)));
    this->spellBook.insert(std::make_pair(MASTERHEAL, new MasterHeal(owner)));
    this->it = spellBook.begin();
    this->spell = it->second;
}

SpellCasterAbility::~SpellCasterAbility() {}

std::string SpellCasterAbility::getNameOfSpell() {
    return this->spell->getName();
}

void SpellCasterAbility::nextSpell() {
    this->it++;
    if ( this->it == spellBook.end() ) {
        this->it = spellBook.begin();
    }
    this->spell = it->second;
}

void SpellCasterAbility::useSpell(Unit *enemy) {
    this->spell->use(enemy);
}

void SpellCasterAbility::createDemon() {}

void SpellCasterAbility::deleteDemon() {}

bool SpellCasterAbility::getIsDemonExist() const {}
