/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: StandingsList.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: StandingsList class
 */

#include "Standing.h"
#include "StandingsList.h"

using namespace std;

/**
 * Constructor
 */
StandingsList::StandingsList() {
}

/**
 * Constructor
 * @param {StandingsList} orig
 */
StandingsList::StandingsList(const StandingsList& orig) {
}

/**
 * Destructor
 */
StandingsList::~StandingsList() {
}

/**
 * Adds a standing to the standings list
 * @param {Standing *} standing
 */
void StandingsList::addStanding(Standing * standing) {
    standings.push_back(standing);
}

/**
 * Returns the size of the list
 * @return {int}
 */
int StandingsList::getSize() {
    return standings.size();
}

/**
 * Returns a standings given its position in the list
 * @param {int} index
 * @return {Standing *}
 */
Standing * StandingsList::getByIndex(int index) {
    if (index < 0 || index > standings.size() - 1) {
        throw "StandingsList: Invalid index";
    }

    return standings[index];
}

/**
 * Returns a standing for the given team name
 * @param {string} name
 * @return {Standings *}
 */
Standing * StandingsList::getByTeamName(string name) {
    bool found = false;
    int i = 0;

    while (!found && i < standings.size()) {
        if (standings[i]->getTeam()->getName() == name) {
            found = true;
        } else {
            i++;
        }
    }

    if (found) {
        return standings[i];
    }

    return NULL;
}

/**
 * Returns the standings vector
 * @return {vector<Standing *>}
 */
vector<Standing *> StandingsList::getStandings() {
    return standings;
}

/**
 * Sets the standing list
 * @param {vector<Standing *>} standingsIn
 */
void StandingsList::setStandings(vector<Standing *> standingsIn) {
    standings = standingsIn;
}
