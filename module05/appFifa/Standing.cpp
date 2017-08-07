/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: Standing.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include "Standing.h"

Standing::Standing(int idIn, Team * teamIn):
id(idIn), team(teamIn)
{
    played = 0;
    won = 0;
    draw = 0;
    lost = 0;
    goalsFor = 0;
    goalsAgainst = 0;
    goalsDiff = 0;
    points = 0;
}

Standing::Standing(const Standing& orig) {
}

Standing::~Standing() {
}

int Standing::getId()
{
    return id;
}

Team * Standing::getTeam()
{
    return team;
}

int Standing::getPlayed()
{
    return played;
}

int Standing::getWon()
{
    return won;
}

int Standing::getDraw()
{
    return draw;
}

int Standing::getLost()
{
    return lost;
}

int Standing::getGoalsFor()
{
    return goalsFor;
}

int Standing::getGoalsAgainst()
{
    return goalsAgainst;
}

int Standing::getGoalsDiff()
{
    return goalsDiff;
}

int Standing::getPoints()
{
    return points;
}

void Standing::addWon()
{
    won++;
    points += 3;
    played++;
}

void Standing::addDraw()
{
    draw++;
    points++;
    played++;
}

void Standing::addLost()
{
    lost++;
    played++;
}

void Standing::addGoalsFor(int a)
{
    goalsFor += a;
    goalsDiff += a;
}

void Standing::addGoalsAgainst(int a)
{
    goalsAgainst += a;
    goalsDiff -= a;
}
