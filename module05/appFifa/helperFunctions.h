/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: helperFunctions.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H

#include "StadiumsList.h"
#include "TeamsList.h"
#include "GroupsList.h"
#include "StandingsList.h"
#include "MatchesList.h"

void loadStadiums(StadiumsList * stadiums);
void loadGroups(GroupsList * groups);
void loadTeams(TeamsList * teams, GroupsList * groups);
void loadStandings(StandingsList * standings, TeamsList * teams);
void loadGroupStandings(GroupsList * groups, StandingsList * standings);
void addMatch(Match * match, MatchesList * matches, Stadium * stadium);
void loadMatches(MatchesList * matches, StadiumsList * stadiums, TeamsList * teams, GroupsList * groups);

#endif /* HELPER_FUNCTIONS_H */

