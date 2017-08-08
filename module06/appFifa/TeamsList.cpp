/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: TeamsList.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: TeamsList class
 */

#include <vector>
#include "TeamsList.h"

using namespace std;

/**
 * Constructor
 */
TeamsList::TeamsList() {
}

/**
 * Constructor
 */
TeamsList::TeamsList(const TeamsList& orig) {
}

/**
 * Destructor
 */
TeamsList::~TeamsList() {
}

/**
 * Adds a team
 * @param {Team *} team
 */
void TeamsList::addTeam(Team *team) {
    teams.push_back(team);
}

/**
 * Gets the size of the list
 * @return {int}
 */
int TeamsList::getSize() {
    return teams.size();
}

/**
 * Returns a team from the list
 * @param {int} index
 * @return {Team *}
 */
Team * TeamsList::getByIndex(int index) {
    if (index < 0 || index > teams.size() - 1) {
        throw "TeamsList: Invalid index";
    }

    return teams[index];
}

/**
 * Returns a team given its name
 * @param {string} name
 * @return {Team *}
 */
Team * TeamsList::getByName(string name) {
    bool found = false;
    int i = 0;

    while (!found && i < teams.size()) {
        if ((teams[i]->getName() == name)) {
            found = true;
        } else {
            i++;
        }
    }

    if (found) {
        return teams[i];
    }

    return NULL;
}

