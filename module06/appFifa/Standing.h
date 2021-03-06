/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: Standing.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Standing class
 */

#ifndef STANDING_H
#define STANDING_H

#include "Team.h"

class Standing {
public:
    Standing(int idIn, Team * teamIn);
    Standing(const Standing& orig);
    virtual ~Standing();

    int getId();
    Team * getTeam();
    int getPlayed();
    int getWon();
    int getDraw();
    int getLost();
    int getGoalsFor();
    int getGoalsAgainst();
    int getGoalsDiff();
    int getPoints();

    void addWon();
    void addDraw();
    void addLost();
    void addGoalsFor(int a);
    void addGoalsAgainst(int a);

private:
    int id;
    Team * team;
    int played;
    int won;
    int draw;
    int lost;
    int goalsFor;
    int goalsAgainst;
    int goalsDiff;
    int points;

};

#endif /* STANDING_H */

