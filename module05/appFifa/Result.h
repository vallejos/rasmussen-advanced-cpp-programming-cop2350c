/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Result.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef RESULT_H
#define RESULT_H

#include <string>
#include "Team.h"

using namespace std;

class Result {
public:
    Result(Team * team1In, Team * team2In);
    Result(const Result& orig);
    virtual ~Result();

    int getTeam1Result();
    int getTeam2Result();
    void set90Min(int t1, int t2);
    void setExtended(int t1, int t2);
    void setPenalties(int t1, int t2);
    
private:
    int id;
    Team * team1;
    Team * team2;
    int t190min;
    int t1Extended;
    int t1Penalties;
    int t290min;
    int t2Extended;    
    int t2Penalties;

};

#endif /* RESULT_H */

