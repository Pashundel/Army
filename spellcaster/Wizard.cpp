//
// Created by GL502VM on 28.10.2020.
//

#include "Wizard.h"

Wizard::Wizard(const char *title) : SpellCaster(title) {
    this->state = new State(title, 100, 50, 0, 1, false);
    this->ability = new WizardAbility(this);
    this->type = WIZARD;
    this->nameOfType = "Wizard";
    this->isUndead = false;
}
Wizard::~Wizard() {}




