/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/06/2017
 * FileName: MatchesList.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: MatchesList class
 */

#ifndef MATCHESLIST_H
#define MATCHESLIST_H

#include <vector>
#include "Match.h"

using namespace std;

class MatchesList {
public:
    MatchesList();
    MatchesList(const MatchesList& orig);
    virtual ~MatchesList();

    void addMatch(Match * match);
    int getSize();
    Match * getByIndex(int index);
    Match * getById(int idIn);

private:
    vector<Match *> matches;

};

#endif /* MATCHESLIST_H */

