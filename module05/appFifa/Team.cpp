/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Team.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <string>
#include "Group.h"
#include "Team.h"

using namespace std;

Team::Team()
{
    id = 0;
    country = "";
    group = NULL;
}

Team::Team(int idIn, Group * groupIn, string countryIn):
id(idIn), group(groupIn), country(countryIn)
{
}

Team::Team(const Team& orig) {
}

Team::~Team() {
}

int Team::getId()
{
    return id;
}

string Team::getCountry()
{
    return country;
}

Group * Team::getGroup()
{
    return group;
}

void Team::setGroup(Group * groupIn)
{
    group = groupIn;
}
