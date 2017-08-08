/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: GroupsList.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: GroupsList class
 */

#include <string>
#include "GroupsList.h"

using namespace std;

/**
 * Constructor
 */
GroupsList::GroupsList() {
}

/**
 * Constructor
 * @param {GroupsList} orig
 */
GroupsList::GroupsList(const GroupsList& orig) {
}

/**
 * Destructor
 */
GroupsList::~GroupsList() {
}

/**
 * Adds a group to the list
 * @param {Group *} group
 */
void GroupsList::addGroup(Group * group) {
    groups.push_back(group);
}

/**
 * Returns the size of the list
 * @return {int}
 */
int GroupsList::getSize() {
    return groups.size();
}

/**
 * Returns a group given its position in the list
 * @param {int} index
 * @return {Group *}
 */
Group * GroupsList::getByIndex(int index) {
    if (index < 0 || index > groups.size() - 1) {
        throw "GroupsList: Invalid index";
    }

    return groups[index];
}

/**
 * Returns a group given its name
 * @param {string} name
 * @return {Group * || NULL}
 */
Group * GroupsList::getByName(string name) {
    bool found = false;
    int i = 0;

    // search the group in the list
    while (!found && i < groups.size()) {
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

/**
 * Returns a team given its standing
 * @param {int} position
 * @param {string} name
 * @return {Team *}
 */
Team * GroupsList::getTeamByGroupPosition(int position, string name) {
    return getByName(name)->getTeamByPosition(position);
}
