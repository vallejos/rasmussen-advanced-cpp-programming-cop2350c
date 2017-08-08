/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: scheduleFunctions.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Helper functions for Schedule menu option
 */

#include <iostream>
#include <string>
#include "functions.h"
#include "scheduleFunctions.h"
#include "Match.h"
#include "MatchesList.h"
#include "StadiumsList.h"
#include "Team.h"

using namespace std;

/**
 * Prints the teams menu
 */
void printScheduleMenu() {
    cout << endl << "---------------------------" << endl;
    cout << "\t View Schedule" << endl;
    cout << "---------------------------" << endl;
    cout << "  1 - View full Schedule" << endl;
    cout << "  2 - View all Matches by Stadium" << endl;
    cout << "  3 - View Matches in Stadium" << endl;
    cout << "---------------------------" << endl;
    cout << "  0 - Return" << endl;
    cout << endl << "Select an option: ";
}

/**
 * Handles the Schedule submenu
 * @param {MatchesList *} matches
 * @param {StadiumsList *} stadiums
 */
void handleScheduleMenu(MatchesList * matches, StadiumsList * stadiums) {
    int choice;
    int stad;
    bool exitAndReturn = false;

    while (!exitAndReturn) {
        printScheduleMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                listMatches(matches);
                break;

            case 2:
                listMatchesByStadium(stadiums);
                break;

            case 3:
                listStadiums(stadiums);
                cout << endl << "Enter Stadium ID: ";
                cin >> stad;

                if (stad < 1 || stad > 12) {
                    cout << "Error: Invalid Stadium ID" << endl;
                } else {
                    listMatchesInStadium(stadiums->getByIndex(stad - 1));
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

/**
 * Lists all the matches in the list
 * @param {MatchesList *} matches
 */
void listMatches(MatchesList * matches) {
    if (matches->getSize() == 0) {
        throw "Match list is empty";
    }
    Match * match;

    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << endl << " List of Scheduled Matches" << endl;
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << setw(4) << "ID";
    cout << setw(20) << "DATE";
    cout << setw(30) << "TEAMS";
    cout << setw(9) << "RESULT";
    cout << setw(45) << "STADIUM" << endl;
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < matches->getSize(); i++) {
        match = matches->getById(i + 1);

        cout << setw(4) << match->getId();
        cout << setw(20) << match->getDate();

        string t_countries = match->getTeam1()->getCountry() + " v " + match->getTeam2()->getCountry();
        string t_results = to_string(match->getResult()->getTeam1Result()) + "-" + to_string(match->getResult()->getTeam2Result());
        string t_stadium = match->getStadium()->getName() + " @ " + match->getStadium()->getLocation();

        cout << setw(30) << t_countries;
        cout << setw(9) << t_results;
        cout << setw(45) << t_stadium << endl;
    }

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << matches->getSize() << " matches scheduled" << endl;

}

/**
 * Lists all the matches in the list, grouped by stadium
 * @param {StadiumsList *} stadiums
 */
void listMatchesByStadium(StadiumsList * stadiums) {
    if (stadiums->getSize() == 0) {
        throw "Stadium list is empty";
    }

    MatchesList * matches;
    Match * match;
    Team * t1;
    Team * t2;
    int numMatches = 0;

    for (int i = 0; i < stadiums->getSize(); i++) {
        cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
        cout << " " << stadiums->getByIndex(i)->getName() << " @ " << stadiums->getByIndex(i)->getLocation() << " (" << stadiums->getByIndex(i)->getCapacity() << " seats)";
        cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
        cout << setw(3) << "ID";
        cout << setw(20) << "DATE";
        cout << setw(35) << "TEAMS";
        cout << setw(8) << "RESULT";
        cout << endl << "-----------------------------------------------------------------------------------------------" << endl;

        matches = stadiums->getByIndex(i)->getMatches();
        numMatches += matches->getSize();

        for (int j = 0; j < matches->getSize(); j++) {
            match = matches->getByIndex(j);

            t1 = match->getTeam1();
            t2 = match->getTeam2();

            cout << setw(3) << match->getId();
            cout << setw(20) << match->getDate();

            if (t1 != NULL && t2 != NULL) {
                string t_countries = t1->getCountry() + " v " + t2->getCountry();
                string t_results = to_string(match->getResult()->getTeam1Result()) + "-" + to_string(match->getResult()->getTeam2Result());
                cout << setw(35) << t_countries;
                cout << setw(8) << t_results << endl;
            } else {
                cout << setw(35) << "-";
                cout << setw(8) << "-" << endl;
            }

        }
    }

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << numMatches << " matches scheduled in " << stadiums->getSize() << " stadiums" << endl;

}

/**
 * Lists all matches in a stadium
 * @param {Stadium *} stadium
 */
void listMatchesInStadium(Stadium * stadium) {
    MatchesList * matches;
    Match * match;
    Team * t1;
    Team * t2;
    int numMatches = 0;

    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << " " << stadium->getName() << " @ " << stadium->getLocation() << " (" << stadium->getCapacity() << " seats)";
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << setw(3) << "ID";
    cout << setw(20) << "DATE";
    cout << setw(35) << "TEAMS";
    cout << setw(8) << "RESULT";
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;

    matches = stadium->getMatches();
    numMatches += matches->getSize();

    for (int j = 0; j < matches->getSize(); j++) {
        match = matches->getByIndex(j);

        t1 = match->getTeam1();
        t2 = match->getTeam2();

        cout << setw(3) << match->getId();
        cout << setw(20) << match->getDate();

        if (t1 != NULL && t2 != NULL) {
            string t_countries = t1->getCountry() + " v " + t2->getCountry();
            string t_results = to_string(match->getResult()->getTeam1Result()) + "-" + to_string(match->getResult()->getTeam2Result());
            cout << setw(35) << t_countries;
            cout << setw(8) << t_results << endl;
        } else {
            cout << setw(35) << "-";
            cout << setw(8) << "-" << endl;
        }

    }

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << numMatches << " matches scheduled" << endl;

}