//
// Created by GL502VM on 04.11.2020.
//

#include "Necromancer.h"
#include "../spellCasterAbility/NecromancerAbility.h"

Necromancer::Necromancer(const char *title) : SpellCaster(title) {
    this->state = new State(title, 120, 50, 1, 1, true);
    this->ability = new NecromancerAbility(this);
    this->type = NECROMANCER;
    this->nameOfType = "Necromancer";
    this->isUndead = true;
}

Necromancer::~Necromancer() {}

void Necromancer::useSpell(Unit *enemy) {
    enemy->attackedByWar(this);

    this->ability->useSpell(enemy);
}

void Necromancer::notifyNecrom(int hp) {
    this->state->addHp(hp);
}
