//
// Created by GL502VM on 04.11.2020.
//

#include "Player.h"
#include "Player.h"
#include "../warrior/Berserk.h"
#include "../warrior/Demon.h"
#include "../warrior/Rogue.h"
#include "../warrior/Soldier.h"
#include "../warrior/Vampire.h"
#include "../warrior/Werewolf.h"
#include "../spellcaster/Spellcaster.h"
#include "../spellcaster/Healer.h"
#include "../spellcaster/Necromancer.h"
#include "../spellcaster/Priest.h"
#include "../spellcaster/Warlock.h"
#include "../spellcaster/Wizard.h"

Player::~Player() {
}

void Player::createBerserk(const char* title) {
    Unit* u = new Berserk(title);
    listOfPlayers.insert(std::make_pair(title, u));
    Player::currentPlayer = u;
    Player::it = listOfPlayers.begin();
}

void Player::createDemon(const char* title) {
    Unit* u = new Demon(title);
    Player::listOfPlayers.insert(std::make_pair(title, u));
    Player::it = listOfPlayers.begin();
    Player::currentPlayer = u;
}

void Player::createRogue(const char* title) {
    Unit* u = new Rogue(title);
    Player::listOfPlayers.insert(std::make_pair(title, u));
    Player::currentPlayer = u;
    Player::it = listOfPlayers.begin();
}

void Player::createSoldier(const char* title) {
    Unit* u = new Soldier(title);
    listOfPlayers.insert(std::make_pair(title, u));
    currentPlayer = u;
    it = listOfPlayers.begin();
}

void Player::createVampire(const char* title) {
    Unit* u = new Vampire(title);
    Player::listOfPlayers.insert(std::make_pair(title, u));
    Player::currentPlayer = u;
    Player::it = listOfPlayers.begin();
}

void Player::createWerewolf(const char* title) {
    Unit* u = new Werewolf(title);
    Player::listOfPlayers.insert(std::make_pair(title, u));
    Player::currentPlayer = u;
    Player::it = listOfPlayers.begin();
}


void Player::createHealer(const char* title) {
    Unit* u = new Healer(title);
    Player::listOfPlayers.insert(std::make_pair(title, u));
    Player::currentPlayer = u;
    Player::it = listOfPlayers.begin();
}

void Player::createNecromancer(const char* title) {
    Unit* u = new Necromancer(title);
    Player::listOfPlayers.insert(std::make_pair(title, u));
    Player::currentPlayer = u;
    Player::it = listOfPlayers.begin();
}

void Player::createPriest(const char* title) {
    Unit* u = new Priest(title);
    Player::listOfPlayers.insert(std::make_pair(title, u));
    Player::currentPlayer = u;
    Player::it = listOfPlayers.begin();
}

void Player::createWarlock(const char* title) {
    Unit* u = new Warlock(title);
    Player::listOfPlayers.insert(std::make_pair(title, u));
    Player::currentPlayer = u;
    Player::it = listOfPlayers.begin();
}

void Player::createWizard(const char* title) {
    Unit* u = new Wizard(title);
    Player::listOfPlayers.insert(std::make_pair(title, u));
    Player::currentPlayer = u;
    Player::it = listOfPlayers.begin();
}



void Player::action(int action) {
    if ( action == 0 ) {
        currentPlayer->action(action, currentEnemy);
        return;
    }
    if ( action == 3 && currentPlayer->getType() == WARLOCK && !currentPlayer->getIsDemonExist() ) {
        Player::currentPlayer->action(action);
        Player::createDemon("Gromer");
        return;
    } else  if ( currentPlayer->getType() == WARLOCK ) {
        Player::currentPlayer->action(action);
        Player::deletePlayer("Gromer");

        return;
    }

    Player::currentPlayer->action(action);


}

void Player::showAllPlayers() {
    Player::it = listOfPlayers.begin();

    for ( ; it != listOfPlayers.end(); it++ ) {
        (*it).second->print();
    }

    Player::it = listOfPlayers.begin();
}

void Player::showCurrentPlayer() {
    if ( it == listOfPlayers.end() ) {
        std::cout << "There aren't any players" << std::endl;
    }
    Player::currentPlayer->print();
}

void Player::nextPlayer() {
    if ( Player::it == listOfPlayers.end() ) {
        std::cout << "There aren't any players" << std::endl;
    }

    Player::it++;

    if ( Player::it == listOfPlayers.end() ) {
        it = listOfPlayers.begin();
    }

    if ( it->second == currentEnemy ) {
        nextPlayer();
    }

    Player::currentPlayer = (*it).second;
}

void Player::showCurrentEnemy() {
    if ( it == listOfPlayers.end() ) {
        std::cout << "There aren't any players" << std::endl;
    }
    Player::currentEnemy->print();
}

void Player::nextEnemy() {
    if ( Player::it == listOfPlayers.end() ) {
        std::cout << "There aren't any players" << std::endl;
    }

    Player::it++;

    if ( Player::it == listOfPlayers.end() ) {
        it = listOfPlayers.begin();
    }

    if ( it->second == currentPlayer ) {
        Player::nextEnemy();
    }

    Player::currentPlayer = (*it).second;
}



void Player::changePlayer(const char *title) {
    auto find = listOfPlayers.find(title);
    if ( find == listOfPlayers.end() ) {
        std::cout << "There isn't any player with this title" << std::endl;
        return;
    }
    if ( find->second == currentEnemy ) {
        std::cout << "Please, chose another player" << std::endl;
    }
    Player::currentPlayer = find->second;
}

void Player::changeEnemy(const char *title) {
    auto find = listOfPlayers.find(title);
    if ( find == listOfPlayers.end() ) {
        std::cout << "There isn't any player with this title" << std::endl;
        return;
    }

    if ( find->second == currentPlayer ) {
        std::cout << "Please, chose another enemy" << std::endl;
    }

    Player::currentEnemy = find->second;
}

void Player::deleteCurrentPlayer() {
    listOfPlayers.erase(currentPlayer->getTitle());
    delete currentPlayer;
    it = listOfPlayers.begin();

    if ( it == listOfPlayers.end() ) {
        std::cout << "You have deleted all units" << std::endl;
        return;
    }
    Player::currentPlayer = it->second;
}

void Player::deletePlayer(const char *title) {
    auto find = listOfPlayers.find(title);
    if ( find == listOfPlayers.end() ) {
        std::cout << "There isn't any player with this title" << std::endl;
        return;
    }
    listOfPlayers.erase(find);
    delete find->second;

    it = listOfPlayers.begin();

    if ( it == listOfPlayers.end() ) {
        std::cout << "You have deleted all units" << std::endl;
        return;
    }
    Player::currentPlayer = it->second;
}