/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Match.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <string>
#include "Stadium.h"
#include "Team.h"
#include "Result.h"
#include "Match.h"

using namespace std;

Match::Match(int idIn, string dateIn, Stadium *stadiumIn, Team *team1In, Team *team2In):
id(idIn), date(dateIn), stadium(stadiumIn), team1(team1In), team2(team2In)
{
    result = new Result(team1, team2);
}

Match::Match(const Match& orig) {
}

Match::~Match() {
}

int Match::getId()
{
    return id;
}

string Match::getDate()
{
    return date;
}

Stadium *Match::getStadium()
{
    return stadium;
}

Team *Match::getTeam1()
{
    return team1;
}

Team *Match::getTeam2()
{
    return team2;
}

Result *Match::getResult()
{
    return result;
}
