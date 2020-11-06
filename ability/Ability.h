//
// Created by GL502VM on 10.10.2020.
//

#ifndef ARMY_ABILITY_H
#define ARMY_ABILITY_H

//#include "../warrior/Warrior.h"
#include "../spellcaster/Spellcaster.h"
#include "../unit/Unit.h"

class Unit;

class Ability {
protected:
    Unit* owner;

public:
    Ability(Unit* owner);
    virtual ~Ability();

//    std::string getNameOfSpell() const;

    virtual void attack(Unit* enemy) = 0;
    virtual void counterAttack(Unit* enemy);

    virtual void turnWolf();
};

#endif //ARMY_ABILITY_H
