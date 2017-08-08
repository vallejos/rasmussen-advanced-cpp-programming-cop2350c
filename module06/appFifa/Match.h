/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Match.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Match class
 */

#ifndef MATCH_H
#define MATCH_H

class Stadium; // forward declaration

#include <string>
#include "Stadium.h"
#include "Team.h"
#include "Result.h"

using namespace std;

class Match {
public:
    Match(int idIn, string dateIn, Stadium * stadiumIn, Team * team1In, Team * team2In);
    Match(const Match& orig);
    virtual ~Match();

    int getId();
    string getDate();
    Stadium * getStadium();
    Team * getTeam1();
    Team * getTeam2();
    Result * getResult();

    Team * getWinner();
    Team * getLoser();

private:
    int id;
    string date;
    Stadium * stadium;
    Team * team1;
    Team * team2;
    Result * result;

};

#endif /* MATCH_H */

