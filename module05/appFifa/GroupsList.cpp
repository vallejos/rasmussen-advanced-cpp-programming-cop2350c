/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: GroupsList.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <string>
#include "GroupsList.h"

using namespace std;

GroupsList::GroupsList() {
}

GroupsList::GroupsList(const GroupsList& orig) {
}

GroupsList::~GroupsList() {
}

void GroupsList::addGroup(Group * group)
{
    groups.push_back(group);
}

int GroupsList::getSize()
{
    return groups.size();
}

Group * GroupsList::getByIndex(int index)
{
    if (index < 0 || index > groups.size() - 1) {
        throw "GroupsList: Invalid index";
    }

    return groups[index];
}

Group * GroupsList::getByName(string name)
{
    bool found = false;
    int i=0;

    while (!found && i<groups.size()) {
        if (groups[i]->getName() == name) {
            found = true;
        } else {
            i++;
        }
    }
    
    if (found) {
        return groups[i];
    }

    return NULL;
}

Team * GroupsList::getTeamByGroupPosition(int position, string name)
{
    return getByName(name)->getTeamByPosition(position);
}
