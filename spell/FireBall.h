//
// Created by GL502VM on 28.10.2020.
//

#ifndef ARMY_FIREBALL_H
#define ARMY_FIREBALL_H

#include "Spell.h"


class FireBall : public Spell {
public:
    FireBall(Unit* owner);
    ~FireBall();

    void use(Unit* enemy);
};


#endif //ARMY_FIREBALL_H
