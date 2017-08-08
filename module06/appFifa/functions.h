/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: functions.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Helper functions used globally
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <iostream>
#include <iomanip>
#include "helperFunctions.h"
#include "groupFunctions.h"
#include "positionFunctions.h"
#include "resultFunctions.h"
#include "scheduleFunctions.h"
#include "teamFunctions.h"
#include "StadiumsList.h"
#include "StandingsList.h"
#include "Standing.h"

using namespace std;

void printMenu();
void printHeader(string text);
void printStandings(StandingsList * standings);
void listStadiums(StadiumsList * stadiums);
bool sortStandingFunction(Standing * s1, Standing * s2);
StandingsList * sortByPoints(StandingsList * standings);

#endif /* FUNCTIONS_H */
