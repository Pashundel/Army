//
// Created by GL502VM on 10.10.2020.
//

#ifndef ARMY_STATE_H
#define ARMY_STATE_H

#include <iostream>
#include "../unit/Unit.h"

class State {
protected:
    const char* title;
    int hp;
    int mp;
    int hpLimit;
    int mpLimit;
    int dmg;
    int magicImmun;
    bool isUndead;
    bool unitIsDead;

public:
    State(const char* title, int hp, int mp, int dmg, int magicImmun, bool isUndead);
    virtual ~State();

    void incHpLimit(int value);
    void incDmg(int value);

    void decHpLimit(int value);
    void decDmg(int value);

    const char* getTitle() const;
    int getHp() const;
    int getHpLimit() const;
    int getMp() const;
    int getDmg() const;
    bool getIsUndead() const;
    int getMagicImmun() const;
    bool getIsUnitDead() const;

    void ensureIsAlive();

    void addHp(int hp);
    void takeDmg(int dmg);
    void addMp(int hp);
    void takeMpDmg(int dmg);
};

#endif //ARMY_STATE_H
