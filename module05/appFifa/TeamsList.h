/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: TeamsList.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef TEAMSLIST_H
#define TEAMSLIST_H

#include <vector>
#include "Team.h"

class TeamsList {
public:
    TeamsList();
    TeamsList(const TeamsList& orig);
    virtual ~TeamsList();

    void addTeam(Team *team);
    int getSize();
    Team * getByIndex(int index);
    Team * findTeamById();
    Team * findTeamByName();

private:
    vector<Team *> teams;

};

#endif /* TEAMSLIST_H */
