/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Team.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef TEAM_H
#define TEAM_H

class Group; // forward declaration

#include <string>
#include "Group.h"

using namespace std;

class Team {
public:
    Team();
    Team(int id, Group * group, string country);
    Team(const Team& orig);
    virtual ~Team();
    
    int getId();
    string getCountry();
    Group * getGroup();
    void setGroup(Group * group);
    
private:
    int id;
    string country;
    Group * group;

//    Position *position;
};

#endif /* TEAM_H */

