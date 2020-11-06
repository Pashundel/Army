/* How to play this game
//      Firstly, you should create player table via Player;
        Next, create units.

        !!!!IMPORTANT!!!!
        You have to manually pick your enemy before starting fight. It`s better to do this with method changeEnemy(const char* title).


        Use method action(int action) to do something (remember, that when you use attack you will attack your current enemy).

        Here are some instructions.

//      For warriors:
//          0 -> attack
//        For werewolf:
//          2 -> turn into Wolf and turn back
//
//      For spellcasters:
//          0 -> use current spell
//          1 -> pick next spell
//        For warlock
//          3 -> create demon;
//          4 -> delete demon;
//

*/

#include "player/Player.h"

int main() {

    Player p; /* creating game table */

    p.createBerserk("Herii"); /* creating berserk */
    p.createWarlock("Jashka"); /* creating warlock */

    p.changeEnemy("Herii"); /* picking berserk as enemy  */

    p.showAllPlayers(); /* showing all players in this table */

    p.action(3); /* current player (warlock) creates a demon */

    p.action(0); /* the current player is the last created unit by default, so demon attacks berserk */

    p.changePlayer("Jashka"); /* changing player back to warlock */

    p.action(0); /*                    */
    p.action(0); /* warlock uses spell */
    p.action(0); /*                    */

    p.showAllPlayers(); /* showing all players */

    p.action(4); /* warlock delete demon */

    p.showAllPlayers(); /* showing all players */

}
