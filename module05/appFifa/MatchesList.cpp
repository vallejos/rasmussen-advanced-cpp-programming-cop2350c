/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/06/2017
 * FileName: MatchesList.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include "MatchesList.h"
#include "Match.h"

MatchesList::MatchesList() {
}

MatchesList::MatchesList(const MatchesList& orig) {
}

MatchesList::~MatchesList() {
}

void MatchesList::addMatch(Match * match)
{
    matches.push_back(match);
}

int MatchesList::getSize()
{
    return matches.size();
}

Match * MatchesList::getByIndex(int index)
{
    if (index < 0 || index > matches.size() - 1) {
        throw "MatchesList: Invalid index";
    }

    return matches[index];
}

Match * MatchesList::getById(int idIn) {
    bool found = false;
    int i=0;

    while (!found && i<matches.size()) {
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
