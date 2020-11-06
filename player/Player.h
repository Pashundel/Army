//
// Created by GL502VM on 04.11.2020.
//

#ifndef ARMY_PLAYER_H
#define ARMY_PLAYER_H

#include <map>
#include "../unit/Unit.h"



class Player {
private:

    Unit* currentEnemy;
    std::multimap<const char*, Unit*> listOfPlayers;


public:
    ~Player();
    Unit* currentPlayer;

    std::multimap<const char*, Unit*>::iterator it;

    void createBerserk(const char* title);
    void createDemon(const char* title);
    void createRogue(const char* title);
    void createSoldier(const char* title);
    void createVampire(const char* title);
    void createWerewolf(const char* title);

    void createHealer(const char* title);
    void createNecromancer(const char* title);
    void createPriest(const char* title);
    void createWarlock(const char* title);
    void createWizard(const char* title);

    void action(int action);

    void showAllPlayers();
    void showCurrentPlayer();
    void showCurrentEnemy();

    void nextPlayer();
    void changePlayer(const char* title);

    void nextEnemy();
    void changeEnemy(const char* title);

    void deletePlayer(const char* title);
    void deleteCurrentPlayer();
};


#endif //ARMY_PLAYER_H
