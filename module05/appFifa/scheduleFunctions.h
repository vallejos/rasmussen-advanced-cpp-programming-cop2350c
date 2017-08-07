/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: scheduleFunctions.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef SCHEDULEFUNCTIONS_H
#define SCHEDULEFUNCTIONS_H

#include "Stadium.h"
#include "StadiumsList.h"
#include "MatchesList.h"

void printScheduleMenu();
void listMatches(MatchesList * matches);
void listMatchesByStadium(StadiumsList * stadiums);
void handleScheduleMenu(MatchesList * matches, StadiumsList * stadiums);
void listMatchesInStadium(Stadium * stadium);

#endif /* SCHEDULEFUNCTIONS_H */

