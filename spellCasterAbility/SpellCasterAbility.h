//
// Created by GL502VM on 28.10.2020.
//

#ifndef ARMY_SPELLCASTERABILITY_H
#define ARMY_SPELLCASTERABILITY_H
#include "../warrior/Warrior.h"
#include "../spellcaster/Spellcaster.h"
#include "../spell/Spell.h"
#include "../ability/Ability.h"

class Spell;

class SpellCasterAbility {
protected:
    Unit* owner;
    Spell* spell;
    std::map<int, Spell*> spellBook;
    std::map<int, Spell*>::iterator it;

public:
    SpellCasterAbility(Unit* owner);
    virtual ~SpellCasterAbility();

    std::string getNameOfSpell();

    void nextSpell();

    void useSpell(Unit* enemy);

    virtual void createDemon();
    virtual void deleteDemon();

    virtual bool getIsDemonExist() const;
};


#endif //ARMY_SPELLCASTERABILITY_H
