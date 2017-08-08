/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Result.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Result class
 */

#include <string>
#include "Team.h"
#include "Result.h"

using namespace std;

/**
 * Constructor
 * @param {Team *} team1In
 * @param {Team *} team2In
 */
Result::Result(Team * team1In, Team * team2In) :
team1(team1In), team2(team2In) {
    t190min = 0;
    t1Extended = 0;
    t1Penalties = 0;
    t290min = 0;
    t2Extended = 0;
    t2Penalties = 0;
}

/**
 * Constructor
 * @param {Result} orig
 */
Result::Result(const Result& orig) {
}

/**
 * Destructor
 */
Result::~Result() {
}

/**
 * Returns global result for team 1
 * @return {int}
 */
int Result::getTeam1Result() {
    return t190min + t1Extended + t1Penalties;
}

/**
 * Returns global result for team 2
 * @return {int}
 */
int Result::getTeam2Result() {
    return t290min + t2Extended + t2Penalties;
}

/**
 * Sets the 90-minute match result
 * @param {int} t1
 * @param {int{ t2
 */
void Result::set90Min(int t1, int t2) {
    t190min = t1;
    t290min = t2;
}

/**
 * Sets the extended-time match result
 * @param {int} t1
 * @param {int} t2
 */
void Result::setExtended(int t1, int t2) {
    t1Extended = t1;
    t2Extended = t2;
}

/**
 * Sets the penalty-kicks match result
 * @param {int} t1
 * @param {int} t2
 */
void Result::setPenalties(int t1, int t2) {
    t1Penalties = t1;
    t2Penalties = t2;
}
