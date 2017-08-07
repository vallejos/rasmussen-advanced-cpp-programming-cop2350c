/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: StandingsList.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include "Standing.h"
#include "StandingsList.h"

using namespace std;

StandingsList::StandingsList() {
}

StandingsList::StandingsList(const StandingsList& orig) {
}

StandingsList::~StandingsList() {
}

void StandingsList::addStanding(Standing * standing)
{
    standings.push_back(standing);
}

int StandingsList::getSize()
{
    return standings.size();
}

Standing * StandingsList::getByIndex(int index)
{
    if (index < 0 || index > standings.size() - 1) {
        throw "StandingsList: Invalid index";
    }

    return standings[index];
}


Standing * StandingsList::getByTeamName(string name) {
    bool found = false;
    int i=0;

    while (!found && i<standings.size()) {
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

vector<Standing *> StandingsList::getStandings() {
    return standings;
}

void StandingsList::setStandings(vector<Standing *> standingsIn) {
    standings = standingsIn;
}
