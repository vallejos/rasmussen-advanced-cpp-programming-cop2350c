/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: main.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 * Stadium References: http://www.stadiumguide.com/tournaments/fifa-world-cup-2018/
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>
#include "Group.h"
#include "Match.h"
#include "Result.h"
#include "Stadium.h"
#include "Team.h"
#include "helper-functions.h"

using namespace std;

// constants
const int MAX_STADIUMS = 12;    // how many stadiums are available
const int MAX_TEAMS = 32;       // how many teams
const int MAX_MATCHES = 65;     // how many matches

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

/**
 * Loads the list of available Stadiums
 * @param stadiumList
 */
void loadStadiums(vector<Stadium *> &stadiumList) {
    try {
        // add the stadiums to the address book
        stadiumList.push_back(new Stadium(stadiumList.size() + 1, "Luzhniki Stadium", "Moscow", 81000));
        stadiumList.push_back(new Stadium(stadiumList.size() + 1, "Saint Petersburg Stadium", "Saint Petersburg", 64000));
        stadiumList.push_back(new Stadium(stadiumList.size() + 1, "Fisht Stadium", "Sochi", 47700));

        stadiumList.push_back(new Stadium(stadiumList.size() + 1, "Ekaterinburg Arena", "Ekaterinburg", 45000));
        stadiumList.push_back(new Stadium(stadiumList.size() + 1, "Kazan Arena", "Kazan", 45000));
        stadiumList.push_back(new Stadium(stadiumList.size() + 1, "Nizhny Novgorod Stadium", "Nizhny Novgorod", 45000));

        stadiumList.push_back(new Stadium(stadiumList.size() + 1, "Rostov Arena", "Rostov-on-Don", 45000));
        stadiumList.push_back(new Stadium(stadiumList.size() + 1, "Samara Arena", "Samara", 45000));
        stadiumList.push_back(new Stadium(stadiumList.size() + 1, "Mordovia Arena", "Saransk", 45000));

        stadiumList.push_back(new Stadium(stadiumList.size() + 1, "Volgograd Stadium", "Volgograd", 45000));
        stadiumList.push_back(new Stadium(stadiumList.size() + 1, "Spartak Stadium", "Moscow", 42000));
        stadiumList.push_back(new Stadium(stadiumList.size() + 1, "Kaliningrad Stadium", "Kaliningrad", 35212));

    } catch (std::exception e) {
        throw "Could not load the Stadiums";
    }    
}


/**
 * List the stadiums
 * @param stadiumList
 */
void listStadiums(vector<Stadium *> &stadiumList) {
    if (stadiumList.empty()) {
        throw "There are no stadiums loaded";
    }

    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << setw(5) << "ID";
    cout << setw(35) << "VENUE";
    cout << setw(25) << "LOCATION";
    cout << setw(15) << "CAPACITY";
    cout << setw(10) << "MATCHES";
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;

    for (int i=0; i<stadiumList.size(); i++) {
        Stadium* stadium = stadiumList[i];
        
        cout << setw(5) << stadium->getId();
        cout << setw(35) << stadium->getName();
        cout << setw(25) << stadium->getLocation();
        cout << setw(15) << stadium->getCapacity();
        cout << setw(10) << stadium->getMatches().size() << endl;
    }

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << stadiumList.size()  << " stadiums" << endl;
}


/**
 * main function
 */
int main(int argc, char** argv) {
    bool exitApp = false;
    int choice;
    vector<Stadium *> stadiumList;
    
    cout << endl << "Welcome to FIFA 2018 World Cup App" << endl;

    // load stadiums
    loadStadiums(stadiumList);
    
    // load matches
    loadMatches(stadiumList);
    
    while (!exitApp) {
        printMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << endl << "Coming soon!" << endl;
                break;

            case 2:
                cout << endl << "Coming soon!" << endl;
                break;

            case 3:
                cout << endl << "Coming soon!" << endl;
                break;

            case 4:
                cout << endl << "Coming soon!" << endl;
                break;

            case 5:
                cout << endl << "Coming soon!" << endl;
                break;
                
            case 6:
                // list stadiums (test)
                printHeader("Loaded Stadiums");
                listStadiums(stadiumList);
                break;

            case 0:
                exitApp = true;
                break;

            default:
                cout << endl << "Incorrect option. Try again." << endl;
        }
    } // end while
    
    cout << endl << "Good bye!" << endl;
    
    return 0;
}

