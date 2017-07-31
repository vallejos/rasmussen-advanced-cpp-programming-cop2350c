/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Group.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef GROUP_H
#define GROUP_H

class Team; // forward declaration

#include <string>
#include <vector>
#include "Team.h"

using namespace std;

class Group {
public:
    Group(int idIn, string nameIn);
    Group(const Group& orig);
    virtual ~Group();

    int getId();
    string getName();
    void addTeam(Team *team);
    vector<Team *> getTeams();

private:
    int id;
    string name;
    vector<Team *> teams;
    
};

#endif /* GROUP_H */

