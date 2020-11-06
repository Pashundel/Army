//
// Created by GL502VM on 28.10.2020.
//

#ifndef ARMY_SPELL_H
#define ARMY_SPELL_H

#include "../unit/Unit.h"

class Unit;

class Spell {
protected:
    Unit* owner;
    std::string name;
public:


    Spell(Unit* owner);
    ~Spell();

    std::string getName() const;

    virtual void use(Unit* enemy);
};

#endif //ARMY_SPELL_H