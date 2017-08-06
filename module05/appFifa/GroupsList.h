/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: GroupsList.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef GROUPSLIST_H
#define GROUPSLIST_H

#include <vector>
#include <string>
#include "Group.h"

using namespace std;

class GroupsList {
public:
    GroupsList();
    GroupsList(const GroupsList& orig);
    virtual ~GroupsList();

    void addGroup(Group * group);
    int getSize();
    Group * getByIndex(int index);
    Group * getByName(string name);
    Team * getTeamByGroupPosition(int position, string name);

private:
    vector<Group *> groups;

};

#endif /* GROUPSLIST_H */

