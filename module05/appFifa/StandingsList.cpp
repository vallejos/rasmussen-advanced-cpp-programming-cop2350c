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
    if (index > standings.size() - 1) {
        throw "Invalid index";
    }

    return standings[index];
}
