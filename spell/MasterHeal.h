//
// Created by GL502VM on 28.10.2020.
//

#ifndef ARMY_MASTERHEAL_H
#define ARMY_MASTERHEAL_H
#include "Spell.h"

class MasterHeal : public Spell {
public:
    MasterHeal(Unit* owner);
    ~MasterHeal();

    void use(Unit* enemy);
};



#endif //ARMY_MASTERHEAL_H
