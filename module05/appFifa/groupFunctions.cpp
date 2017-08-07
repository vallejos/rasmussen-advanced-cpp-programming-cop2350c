/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: groupFunctions.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <iostream>
#include <string>
#include "functions.h"
#include "groupFunctions.h"
#include "Group.h"
#include "Team.h"
#include "TeamsList.h"
#include "GroupsList.h"

using namespace std;

/**
 * Prints the group menu
 */
void printGroupMenu() {
    cout << endl << "---------------------------" << endl;
    cout << "\t Organize Groups" << endl;
    cout << "---------------------------" << endl;
    cout << "  1 - List Groups" << endl;
    cout << "  2 - View Group" << endl;
    cout << "---------------------------" << endl;
    cout << "  0 - Return" << endl;
    cout << endl << "Select an option: ";
}

void viewGroup(Group * group) {
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << " Group: " << group->getName();
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << setw(5) << "ID";
    cout << setw(10) << "TEAMS";
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;

    for (int i=0; i<group->getTeams()->getSize(); i++) {
        Team * team = group->getTeams()->getByIndex(i);
        
        cout << setw(5) << team->getName();
        cout << setw(10) << team->getCountry() << endl;
    }

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << group->getTeams()->getSize() << " teams" << endl;
}

void listGroups(GroupsList * groups) {
    if (groups->getSize() == 0) {
        throw "There are no Groups loaded";
    }

    int teams = 0;
    
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << setw(5) << "NAME";
    cout << setw(10) << "TEAMS";
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;

    for (int i=0; i<groups->getSize(); i++) {
        try {
            Group * group = groups->getByIndex(i);
        
            cout << setw(5) << group->getName();
            cout << setw(10) << group->getTeams()->getSize() << endl;

            teams += group->getTeams()->getSize();
        } catch (std::exception e) {
            throw "Could not load the Stadiums";
        }    
    }

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << groups->getSize()  << " groups" << ", " << teams << " teams" << endl;
}

void handleGroupMenu(GroupsList * groups) {
    int choice;
    bool exitAndReturn = false;
    string group;
    
    while (!exitAndReturn) {
        printGroupMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                listGroups(groups);
                break;
                
            case 2:
                cout << endl << "Enter a Group: ";
                cin >> group;
                
                viewGroup(groups->getByName(group));
                break;

            case 0:
                exitAndReturn = true;
                break;

            default:
                cout << endl << "Incorrect option. Try again." << endl;
        }
    } // end while    
}
