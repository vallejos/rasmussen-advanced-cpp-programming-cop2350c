/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: teamFunctions.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <iostream>
#include <string>
#include "functions.h"
#include "teamFunctions.h"
#include "Group.h"
#include "Team.h"
#include "TeamsList.h"
#include "GroupsList.h"

using namespace std;

/**
 * Prints the teams menu
 */
void printTeamMenu() {
    cout << endl << "---------------------------" << endl;
    cout << "\t Manage Teams" << endl;
    cout << "---------------------------" << endl;
    cout << "  1 - List Teams" << endl;
    cout << "  2 - View Group" << endl;
    cout << "  3 - Edit Team" << endl;
    cout << "---------------------------" << endl;
    cout << "  0 - Return" << endl;
    cout << endl << "Select an option: ";
}

void listTeams(TeamsList * teams) {
    if (teams->getSize() == 0) {
        throw "There are no Groups loaded";
    }

    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << setw(5) << "NAME";
    cout << setw(35) << "TEAM";
    cout << setw(10) << "GROUP";
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;

    for (int i=0; i<teams->getSize(); i++) {
        try {
            Team * team = teams->getByIndex(i);
        
            cout << setw(5) << team->getName();
            cout << setw(35) << team->getCountry();
            cout << setw(10) << team->getGroup()->getName() << endl;

        } catch (std::exception e) {
            throw "Could not load the Stadiums";
        }    
    }

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << teams->getSize()  << " teams" << endl;
}

void handleTeamMenu(TeamsList * teams, GroupsList * groups) {
    int choice;
    bool exitAndReturn = false;
    string group;
    string teamName;
    Team * team;
    
    while (!exitAndReturn) {
        printTeamMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                listTeams(teams);
                break;

            case 2:
                cout << endl << "Enter a Group: ";
                cin >> group;
                
                printHeader("Standings for Group " + group);
                listTeams(groups->getByName(group)->getTeams());
                break;

            case 3:
                cout << endl << "Enter a Team group and key (e.g.: A1): ";
                cin >> teamName;
                
                team = teams->getByName(teamName);
                
                if (team == NULL) {
                    cout << endl << "Team not found or not valid" << endl;
                } else {
                    string country;
                    cout << endl << "Enter the Team's Country: ";
                    cin >> country;
                    
                    team->setCountry(country);
                    
                    cout << "Done!" << endl;
                }

                break;

            case 0:
                exitAndReturn = true;
                break;

            default:
                cout << endl << "Incorrect option. Try again." << endl;
        }
    } // end while    
}
