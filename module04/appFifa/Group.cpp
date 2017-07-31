/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Group.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <string>
#include <vector>
#include "Team.h"
#include "Group.h"

using namespace std;

Group::Group(int idIn, string nameIn):
id(idIn), name(nameIn)
{
}

Group::Group(const Group& orig) {
}

Group::~Group() {
}

int Group::getId()
{
    return id;
}

string Group::getName()
{
    return name;
}

void Group::addTeam(Team *team)
{
    teams.push_back(team);
}

vector<Team *> Group::getTeams()
{
    return teams;
}
