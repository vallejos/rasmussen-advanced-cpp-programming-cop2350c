/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: positionFunctions.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <iostream>
#include "functions.h"
#include "positionFunctions.h"
#include "GroupsList.h"
#include "StandingsList.h"

using namespace std;

/**
 * Prints the position menu
 */
void printPositionMenu() {
    cout << endl << "---------------------------" << endl;
    cout << "\t View Positions" << endl;
    cout << "---------------------------" << endl;
    cout << "  1 - Global Standings" << endl;
    cout << "  2 - Group Standings" << endl;
    cout << "---------------------------" << endl;
    cout << "  0 - Return" << endl;
    cout << endl << "Select an option: ";
}

void handlePositionMenu(StandingsList * standings, GroupsList * groups) {
    int choice;
    bool exitAndReturn = false;
    string group;
    
    while (!exitAndReturn) {
        printPositionMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                printHeader("Current Global Standings");
                printStandings(standings);
                break;

            case 2:
                cout << endl << "Enter a Group: ";
                cin >> group;

                printHeader("Standings for Group " + group);
                
                printStandings(groups->getByName(group)->getStandings());
                break;

            case 0:
                exitAndReturn = true;
                break;

            default:
                cout << endl << "Incorrect option. Try again." << endl;
        }
    } // end while    
}
