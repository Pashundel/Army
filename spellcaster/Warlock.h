//
// Created by GL502VM on 04.11.2020.
//

#ifndef ARMY_WARLOCK_H
#define ARMY_WARLOCK_H

#include "Spellcaster.h"


class Warlock : public SpellCaster {
public:
    Warlock(const char* title);
    ~Warlock();

    bool getIsDemonExist();

    virtual void createDemon();
    virtual void deleteDemon();

};


#endif //ARMY_WARLOCK_H
