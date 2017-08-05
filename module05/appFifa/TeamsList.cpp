/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: TeamsList.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <vector>
#include "TeamsList.h"

TeamsList::TeamsList() {
}

TeamsList::TeamsList(const TeamsList& orig) {
}

TeamsList::~TeamsList() {
}

void TeamsList::addTeam(Team *team)
{
    teams.push_back(team);
}

int TeamsList::getSize()
{
    return teams.size();
}

Team * TeamsList::getByIndex(int index)
{
    if (index > teams.size() - 1) {
        throw "Invalid index";
    }

    return teams[index];
}

Team * TeamsList::findTeamById()
{
}

Team * TeamsList::findTeamByName()
{
}
