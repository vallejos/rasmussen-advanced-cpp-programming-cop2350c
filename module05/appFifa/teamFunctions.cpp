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
#include "teamFunctions.h"

using namespace std;

/**
 * Prints the teams menu
 */
void printTeamMenu() {
    cout << endl << "---------------------------" << endl;
    cout << "\t Manage Teams" << endl;
    cout << "---------------------------" << endl;
    cout << "  1 - Manage Teams" << endl;
    cout << "---------------------------" << endl;
    cout << "  0 - Return" << endl;
    cout << endl << "Select an option: ";
}

void handleTeamMenu() {
    int choice;
    bool exitAndReturn = false;
    
    while (!exitAndReturn) {
        printTeamMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                // do something
                break;

            case 0:
                exitAndReturn = true;
                break;

            default:
                cout << endl << "Incorrect option. Try again." << endl;
        }
    } // end while    
}
