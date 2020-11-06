//
// Created by GL502VM on 28.10.2020.
//

#ifndef ARMY_ICESPIRE_H
#define ARMY_ICESPIRE_H
#include "Spell.h"


class IceSpire : public Spell {
public:
    IceSpire(Unit* owner);
    ~IceSpire();

    void use(Unit* enemy);
};


#endif //ARMY_ICESPIRE_H
