/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Group.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef GROUP_H
#define GROUP_H

class Team; // forward declaration
class TeamsList; // forward declaration

#include <string>
#include <vector>
#include "Standing.h"
#include "StandingsList.h"
#include "Team.h"
#include "TeamsList.h"

using namespace std;

class Group {
public:
    Group(string nameIn);
    Group(const Group& orig);
    virtual ~Group();

    string getName();
    void addTeam(Team *team);
    TeamsList * getTeams();
    Team * getTeamByPosition(int position);
    StandingsList * getStandings();
    void addStanding(Standing * standing);
    void setTeams(TeamsList * teamsIn);
    void setStandings(StandingsList * standingsIn);

private:
    string name;
    TeamsList * teams;
    StandingsList * standings; // group standings

};

#endif /* GROUP_H */

