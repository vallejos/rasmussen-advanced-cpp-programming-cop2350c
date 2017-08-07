/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: StandingsList.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef STANDINGSLIST_H
#define STANDINGSLIST_H

class Standing; // forward declaration

#include <vector>
#include "Standing.h"

using namespace std;

class StandingsList {
public:
    StandingsList();
    StandingsList(const StandingsList& orig);
    virtual ~StandingsList();

    void addStanding(Standing * standing);
    int getSize();
    Standing * getByIndex(int index);
    Standing * getByTeamName(string name);
    vector<Standing *> getStandings();
    void setStandings(vector<Standing *> standingsIn);

private:
    vector<Standing *> standings;

};

#endif /* STANDINGSLIST_H */

