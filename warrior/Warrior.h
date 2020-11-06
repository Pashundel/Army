//
// Created by GL502VM on 10.10.2020.
//

#ifndef ARMY_WARRIOR_H
#define ARMY_WARRIOR_H

#include <iostream>
#include "../ability/Ability.h"
#include "../unit/Unit.h"

enum {
    UNIT_SOLDIER,
    UNIT_ROGUE,
    UNIT_BERSERK,
    UNIT_VAMPIRE,
    UNIT_WEREWOLF,
    UNIT_WOLF,
    UNIT_DEMON
};

class Ability;

class  Warrior : public Unit {
protected:
    Ability* ability;
    bool isUndead;
public:
    Warrior(const char* title);
    virtual ~Warrior();

    virtual void action(int action, Unit* &enemy);
    virtual void action(int action);

    virtual void attack(Unit* &enemy) = 0;
    virtual void counterAttack(Unit* enemy);

    virtual void turnWolf();

    virtual void print();


};

#endif //ARMY_WARRIOR_H
