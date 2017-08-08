/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Team.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Team class
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
    Team(string nameIn, Group * group, string countryIn);
    Team(const Team& orig);
    virtual ~Team();

    string getName();
    string getCountry();
    void setCountry(string countryIn);
    Group * getGroup();
    void setGroup(Group * group);

private:
    string name; // e.g. A1
    string country; // e.g. Russia
    Group * group; // e.g. A

};

#endif /* TEAM_H */

