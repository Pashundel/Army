//
// Created by GL502VM on 04.11.2020.
//

#ifndef ARMY_NECROMANCER_H
#define ARMY_NECROMANCER_H

#include "Spellcaster.h"

class Necromancer : public SpellCaster {
public:
    Necromancer(const char* title);
    ~Necromancer();

    virtual void useSpell(Unit* enemy);
    void notifyNecrom(int hp);

};


#endif //ARMY_NECROMANCER_H
