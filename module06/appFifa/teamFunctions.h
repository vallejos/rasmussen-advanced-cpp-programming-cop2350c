/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: teamFunctions.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Helper functions for Teams menu option
 */

#ifndef TEAM_FUNCTIONS_H
#define TEAM_FUNCTIONS_H

#include "TeamsList.h"
#include "GroupsList.h"

void printTeamMenu();
void listTeams(TeamsList * teams);
void handleTeamMenu(TeamsList * teams, GroupsList * groups);

#endif /* TEAM_FUNCTIONS_H */

