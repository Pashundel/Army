//
// Created by GL502VM on 04.11.2020.
//

#ifndef ARMY_DEMON_H
#define ARMY_DEMON_H

#include "Warrior.h"

class Demon : public Warrior {
public:
    Demon(const char* title);
    ~Demon();

    void attack(Unit*& enemy);
};


#endif //ARMY_DEMON_H
