//
// Created by GL502VM on 31.10.2020.
//

#ifndef ARMY_UNIT_H
#define ARMY_UNIT_H

#include <iostream>
#include "../state/State.h"
#include <set>

class State;

class Unit {
protected:
    int type;
    std::string nameOfType;
    State* state;
    bool isWarrior;
    bool isAttackedByWar;


public:
    Unit();
    virtual ~Unit();



    void incHpLimit(int value);
    void incDmg(int value);

    void decHpLimit(int value);
    void decDmg(int value);

    void setType(int name);

    const char* getTitle() const;
    bool getIsUndead() const;
    int getType() const;
    std::string getNameOfType() const;
    int getHp() const;
    int getHpLimit() const;
    int getMagicImmun() const;
    int getDmg() const;
    bool getIsWarrior() const;
    int getMp() const;
    bool getUnitIsDead() const;
    bool getAttackedByWar() const;
    virtual bool getIsDemonExist();

    void attackedByWar(Unit* necromancer);
    void cancelAttackByWar();

    void addHp(int hp);

    void takeDmg(int dmg);
    void takeMpDmg(int dmg);

    virtual void print() = 0;

    virtual void action(int action, Unit* &enemy) = 0;
    virtual void action(int action) = 0;

    std::set<Unit*> listOfNecromancers;
};


#endif //ARMY_UNIT_H
