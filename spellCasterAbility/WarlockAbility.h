//
// Created by GL502VM on 04.11.2020.
//

#ifndef ARMY_WARLOCKABILITY_H
#define ARMY_WARLOCKABILITY_H

#include "SpellCasterAbility.h"

class WarlockAbility : public SpellCasterAbility {
private:
    bool isDemonExist;
public:
    WarlockAbility(SpellCaster* owner);
    ~WarlockAbility();

    void createDemon();
    void deleteDemon();

    virtual bool getIsDemonExist() const;

};


#endif //ARMY_WARLOCKABILITY_H
