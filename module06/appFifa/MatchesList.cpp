/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/06/2017
 * FileName: MatchesList.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: MatchesList class
 */

#include "MatchesList.h"
#include "Match.h"

/**
 * Constructor
 */
MatchesList::MatchesList() {
}

/**
 * Constructor
 * @param {MatchesList} orig
 */
MatchesList::MatchesList(const MatchesList& orig) {
}

/**
 * Destructor
 */
MatchesList::~MatchesList() {
}

/**
 * Adds a match to the list
 * @param {Match *} match
 */
void MatchesList::addMatch(Match * match) {
    matches.push_back(match);
}

/**
 * Returns the size of the list
 * @return {int}
 */
int MatchesList::getSize() {
    return matches.size();
}

/**
 * Returns a match from the list, given its position
 * @param {int} index
 * @return {Match *}
 */
Match * MatchesList::getByIndex(int index) {
    if (index < 0 || index > matches.size() - 1) {
        throw "MatchesList: Invalid index";
    }

    return matches[index];
}

/**
 * Returns a Match from the list, given its id
 * @param {int} idIn
 * @return {Match * || NULL}
 */
Match * MatchesList::getById(int idIn) {
    bool found = false;
    int i = 0;

    // search for the given id
    while (!found && i < matches.size()) {
        if (matches[i]->getId() == idIn) {
            found = true;
        } else {
            i++;
        }
    }

    if (found) {
        return matches[i];
    }

    return NULL;
}
