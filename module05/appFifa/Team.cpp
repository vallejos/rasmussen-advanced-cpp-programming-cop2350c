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
    name = "0";
    country = "";
    group = NULL;
}

Team::Team(string nameIn, Group * groupIn, string countryIn):
name(nameIn), group(groupIn), country(countryIn)
{
}

Team::Team(const Team& orig) {
}

Team::~Team() {
}

string Team::getName()
{
    return name;
}

string Team::getCountry()
{
    return country;
}

void Team::setCountry(string countryIn) {
    country = countryIn;
}

Group * Team::getGroup()
{
    return group;
}

void Team::setGroup(Group * groupIn)
{
    group = groupIn;
}
