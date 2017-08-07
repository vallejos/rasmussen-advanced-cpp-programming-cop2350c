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
#include "Group.h"


using namespace std;

Group::Group(string nameIn):
name(nameIn)
{
    teams = new TeamsList();
    standings = new StandingsList();
}

Group::Group(const Group& orig) {
}

Group::~Group() {
}

string Group::getName()
{
    return name;
}

void Group::addTeam(Team *team)
{
    teams->addTeam(team);
    standings->addStanding(new Standing(standings->getSize() + 1, team));
}

TeamsList * Group::getTeams()
{
    return teams;
}

Team * Group::getTeamByPosition(int position)
{
    if (position < 1 || position > standings->getSize()) {
        throw "Invalid position";
    }
    
    return standings->getByIndex(position - 1)->getTeam();
}

StandingsList * Group::getStandings()
{
    return standings;
}

void Group::addStanding(Standing * standing)
{
    standings->addStanding(standing);
}

void Group::setTeams(TeamsList * teamsIn)
{
    teams = teamsIn;
}

void Group::setStandings(StandingsList * standingsIn)
{
    standings = standingsIn;
}
