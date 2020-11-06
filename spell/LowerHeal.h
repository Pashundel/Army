//
// Created by GL502VM on 28.10.2020.
//

#ifndef ARMY_LOWERHEAL_H
#define ARMY_LOWERHEAL_H


#include "Spell.h"


class LowerHeal : public Spell {
public:
    LowerHeal(Unit* owner);
    ~LowerHeal();

    void use(Unit* enemy);
};



#endif //ARMY_LOWERHEAL_H
