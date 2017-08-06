/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: submenus.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <iostream>
#include "functions.h"

using namespace std;

/**
 * Prints the main menu
 */
void printMenu() {
    cout << endl << "---------------------------" << endl;
    cout << "\tMAIN MENU" << endl;
    cout << "---------------------------" << endl;
    cout << "  1 - Manage Teams" << endl;
    cout << "  2 - Organize Groups" << endl;
    cout << "  3 - View Schedule" << endl;
    cout << "  4 - Enter Match Results" << endl;
    cout << "  5 - View Positions" << endl;
    cout << "  6 - List Stadiums" << endl;
    cout << "---------------------------" << endl;
    cout << "  7 - List Groups" << endl;
    cout << "  8 - List Teams" << endl;
    cout << "  9 - List Matches" << endl;
    cout << " 10 - Print Standings" << endl;
    cout << "---------------------------" << endl;
    cout << "  0 - Quit" << endl;
    cout << endl << "Select an option: ";
}


/**
 * Prints a header for a menu option
 * @param text
 */
void printHeader(string text) {
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << " " << text;
    cout << endl << "-----------------------------------------------------------------------------------------------";
}

