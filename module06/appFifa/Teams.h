/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: Teams.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef TEAMS_H
#define TEAMS_H

#include <vector>
#include "Team.h"

class Teams {
public:
    Teams();
    Teams(const Teams& orig);
    virtual ~Teams();

    void addTeam(Team *team);
    Team * findTeamById();
    Team * findTeamByName();

private:
    vector<Team *> teams;

};

#endif /* TEAMS_H */

