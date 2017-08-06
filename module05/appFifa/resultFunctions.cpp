/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: resultFunctions.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <iostream>
#include "resultFunctions.h"

using namespace std;

/**
 * Prints the result menu
 */
void printResultMenu()
{
    cout << endl << "---------------------------" << endl;
    cout << "\t Match Results" << endl;
    cout << "---------------------------" << endl;
    cout << "  1 - Manage Teams" << endl;
    cout << "---------------------------" << endl;
    cout << "  0 - Return" << endl;
    cout << endl << "Select an option: ";
}

void handleResultMenu() {
    int choice;
    bool exitAndReturn = false;
    
    while (!exitAndReturn) {
        printResultMenu();
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