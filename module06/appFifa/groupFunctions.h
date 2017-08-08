/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: groupFunctions.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Helper functions for Group menu option
 */

#ifndef GROUPFUNCTIONS_H
#define GROUPFUNCTIONS_H

#include "Group.h"
#include "GroupsList.h"

void printGroupMenu();
void viewGroup(Group * group);
void listGroups(GroupsList * groups);
void handleGroupMenu(GroupsList * groups);

#endif /* GROUPFUNCTIONS_H */

