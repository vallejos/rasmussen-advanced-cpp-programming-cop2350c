/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: TeamsList.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <vector>
#include "TeamsList.h"

using namespace std;

TeamsList::TeamsList() {
}

TeamsList::TeamsList(const TeamsList& orig) {
}

TeamsList::~TeamsList() {
}

void TeamsList::addTeam(Team *team)
{
    teams.push_back(team);
}

int TeamsList::getSize()
{
    return teams.size();
}

Team * TeamsList::getByIndex(int index)
{
    if (index < 0 || index > teams.size() - 1) {
        throw "TeamsList: Invalid index";
    }

    return teams[index];
}

//Team * TeamsList::getByIdAndName(int id, string name)
//{
//    bool found = false;
//    int i=0;
//
//    while (!found && i<teams.size()) {
//        if ((teams[i]->getGroup()->getName() == name) && (teams[i]->getId() == id)) {
//            found = true;
//        } else {
//            i++;
//        }
//    }
//    
//    if (found) {
//        return teams[i];
//    }
//
//    return NULL;
//}

Team * TeamsList::getByName(string name)
{
    bool found = false;
    int i=0;

    while (!found && i<teams.size()) {
        if ((teams[i]->getName() == name)) {
            found = true;
        } else {
            i++;
        }
    }
    
    if (found) {
        return teams[i];
    }

    return NULL;
}

//Team * TeamsList::getByGroupPosition(int id, string group)
//{
//    bool found = false;
//    int i=0;
//
//    while (!found && i<teams.size()) {
//        if ((teams[i]->getGroup()->getName() == group) && (teams[i]->getGroup()-> == id)) {
//            found = true;
//        } else {
//            i++;
//        }
//    }
//    
//    if (found) {
//        return teams[i];
//    }
//
//    return NULL;
//}
//    
    