//
// Created by GL502VM on 23.10.2020.
//

#ifndef ARMY_SPELLCASTER_H
#define ARMY_SPELLCASTER_H

#include <iostream>
#include <map>
#include "../spellCasterAbility/SpellCasterAbility.h"
#include "../unit/Unit.h"

enum SpellCasters {
    WIZARD = 0,
    HEALER = 1,
    PRIEST = 2,
    WARLOCK = 3,
    NECROMANCER = 4
};

class SpellCasterAbility;


class SpellCaster : public Unit {
protected:
    SpellCasterAbility* ability;
    bool isUndead;

public:
    SpellCaster(const char* title);
    virtual ~SpellCaster();

    std::string getNameOfSpell() const;

    void nextSpell();
    virtual void useSpell(Unit* enemy);

    virtual void action(int action, Unit* &enemy);
    virtual void action(int action);

    virtual void print();

    virtual void createDemon();
    virtual void deleteDemon();

    virtual void notifyNecrom(int hp);

    bool getIsDemonExist() const;
};

#endif //ARMY_SPELLCASTER_H
