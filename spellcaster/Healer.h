//
// Created by GL502VM on 29.10.2020.
//

#ifndef ARMY_HEALER_H
#define ARMY_HEALER_H

#include "Spellcaster.h"

class Healer : public SpellCaster{
public:
    Healer(const char* title);
    ~Healer();
};


#endif //ARMY_HEALER_H
