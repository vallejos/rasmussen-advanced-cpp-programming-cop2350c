/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Stadium.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Stadium class
 */

#ifndef STADIUM_H
#define STADIUM_H

class Match; // forward declaration
class MatchesList; // forward declaration

#include <string>
#include <vector>
#include "Match.h"
#include "MatchesList.h"

using namespace std;

class Stadium {
public:
    Stadium(int idIn, string nameIn, string locationIn, int capacityIn);
    Stadium(const Stadium& orig);
    virtual ~Stadium();

    int getId();
    string getName();
    string getLocation();
    int getCapacity();
    void addMatch(Match *match);
    MatchesList * getMatches();

private:
    int id;
    string name;
    string location;
    int capacity;
    MatchesList * matches;

};

#endif /* STADIUM_H */

