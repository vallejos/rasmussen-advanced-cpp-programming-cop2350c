/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Match.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Match class
 */

#include <string>
#include "Stadium.h"
#include "Team.h"
#include "Result.h"
#include "Match.h"

using namespace std;

/**
 * Constructor
 * @param {int} idIn
 * @param {string} dateIn
 * @param {Stadium *} stadiumIn
 * @param {Team *} team1In
 * @param {Team *} team2In
 */
Match::Match(int idIn, string dateIn, Stadium * stadiumIn, Team * team1In, Team * team2In) :
id(idIn), date(dateIn), stadium(stadiumIn), team1(team1In), team2(team2In) {
    result = new Result(team1In, team2In);
}

/**
 * Constructor
 * @param {Match} orig
 */
Match::Match(const Match& orig) {
}

/**
 * Destructor
 */
Match::~Match() {
}

/**
 * Getter for id
 * @return {int}
 */
int Match::getId() {
    return id;
}

/**
 * Getter for date
 * @return {string}
 */
string Match::getDate() {
    return date;
}

/**
 * Getter for stadium
 * @return {Stadium *}
 */
Stadium * Match::getStadium() {
    return stadium;
}

/**
 * Getter for team 1
 * @return {Team *}
 */
Team * Match::getTeam1() {
    return team1;
}

/**
 * Getter for team 2
 * @return {Team *}
 */
Team * Match::getTeam2() {
    return team2;
}

/**
 * Getter for result
 * @return {Result *}
 */
Result * Match::getResult() {
    return result;
}

/**
 * Returns the winning team
 * @return {Team *}
 */
Team * Match::getWinner() {
    if (result->getTeam1Result() > result->getTeam2Result()) {
        return team1;
    } else if (result->getTeam1Result() < result->getTeam2Result()) {
        return team2;
    } else {
        // draw
        return NULL;
    }
}

/**
 * Returns the loser team
 * @return {Team *}
 */
Team * Match::getLoser() {
    if (result->getTeam1Result() > result->getTeam2Result()) {
        return team2;
    } else if (result->getTeam1Result() < result->getTeam2Result()) {
        return team1;
    } else {
        // draw
        return NULL;
    }
}
