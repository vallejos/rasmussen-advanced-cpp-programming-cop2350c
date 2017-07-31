/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Result.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <string>
#include "Team.h"
#include "Result.h"

using namespace std;

Result::Result(Team *team1In, Team *team2In):
team1(team1In), team2(team2In)
{
    t190min = 0;
    t1Extended = 0;
    t1Penalties = 0;
    t290min = 0;
    t2Extended = 0;    
    t2Penalties = 0;
}

Result::Result(const Result& orig) {
}

Result::~Result() {
}

int Result::getTeam1Result()
{
    return t190min + t1Extended + t1Penalties;
}

int Result::getTeam2Result()
{
    return t290min + t2Extended + t2Penalties;
}

void Result::set90Min(int team1, int team2)
{
    t190min = team1;
    t290min = team2;
}

void Result::setExtended(int team1, int team2)
{
    t1Extended = team1;
    t2Extended = team2;
}

void Result::setPenalties(int team1, int team2)
{
    t1Penalties = team1;
    t2Penalties = team2;
}
