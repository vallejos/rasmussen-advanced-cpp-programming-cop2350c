/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Stadium.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <string>
#include <vector>
#include "Match.h"
#include "Stadium.h"
#include "MatchesList.h"

using namespace std;

Stadium::Stadium(int idIn, string nameIn, string locationIn, int capacityIn):
id(idIn), name(nameIn), location(locationIn), capacity(capacityIn)
{
    matches = new MatchesList();
}

Stadium::Stadium(const Stadium& orig) {
}

Stadium::~Stadium() {
}

int Stadium::getId()
{
    return id;
}

string Stadium::getName()
{
    return name;
}

string Stadium::getLocation()
{
    return location;
}

int Stadium::getCapacity()
{
    return capacity;
}

void Stadium::addMatch(Match * match)
{
    matches->addMatch(match);
}

MatchesList * Stadium::getMatches()
{
    return matches;
}
