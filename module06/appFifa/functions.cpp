/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: submenus.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Helper functions used globally
 */

#include <iostream>
#include <vector>
#include "functions.h"
#include "Stadium.h"
#include "StadiumsList.h"
#include "StandingsList.h"

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
 * Custom sorting function for the standings list
 * @param {Standing *} s1
 * @param {Standing *} s2
 * @return {bool} 
 */
bool sortStandingFunction(Standing * s1, Standing * s2) {
    return (s1->getPoints() < s2->getPoints());
}

/**
 * Sorts the standings list by points
 * @param {StandingsList *} standings
 * @return {StandingsList *}
 */
StandingsList * sortByPoints(StandingsList * standings) {
    vector<Standing *> newStandings = standings->getStandings();

    sort(newStandings.begin(), newStandings.end(), sortStandingFunction);

    StandingsList * sortedStandings;
    sortedStandings->setStandings(newStandings);

    return sortedStandings;
}

/**
 * Prints the standings for all the teams
 * @param {StandingsList *} standings
 */
void printStandings(StandingsList * standings) {
    if (standings->getSize() == 0) {
        throw "There are no Standings";
    }

    int teams = 0;

    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << setw(5) << "RANK";
    cout << setw(35) << "TEAM";
    cout << setw(8) << "PLAYED";
    cout << setw(8) << "WON";
    cout << setw(8) << "DRAW";
    cout << setw(8) << "LOST";
    cout << setw(8) << "FOR";
    cout << setw(8) << "AGAINST";
    cout << setw(8) << "DIFF";
    cout << setw(8) << "POINTS";
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < standings->getSize(); i++) {
        try {
            Standing * standing = standings->getByIndex(i);

            cout << setw(5) << standing->getId();
            cout << setw(35) << standing->getTeam()->getCountry();
            cout << setw(8) << standing->getPlayed();
            cout << setw(8) << standing->getWon();
            cout << setw(8) << standing->getDraw();
            cout << setw(8) << standing->getLost();
            cout << setw(8) << standing->getGoalsFor();
            cout << setw(8) << standing->getGoalsAgainst();
            cout << setw(8) << standing->getGoalsDiff();
            cout << setw(8) << standing->getPoints() << endl;

        } catch (std::exception e) {
            throw "Could not load the Stadiums";
        }
    }

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << standings->getSize() << " teams" << endl;
}

/**
 * List all the stadiums
 * @param {StadiumsList *} stadiums
 */
void listStadiums(StadiumsList * stadiums) {
    if (stadiums->getSize() == 0) {
        throw "There are no Stadiums loaded";
    }

    Stadium * stadium;
    int matches = 0;

    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << setw(5) << "ID";
    cout << setw(35) << "VENUE";
    cout << setw(25) << "LOCATION";
    cout << setw(15) << "CAPACITY";
    cout << setw(10) << "MATCHES";
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < stadiums->getSize(); i++) {
        try {
            stadium = stadiums->getByIndex(i);

            cout << setw(5) << stadium->getId();
            cout << setw(35) << stadium->getName();
            cout << setw(25) << stadium->getLocation();
            cout << setw(15) << stadium->getCapacity();
            cout << setw(10) << stadium->getMatches()->getSize() << endl;

            matches += stadium->getMatches()->getSize();

        } catch (std::exception e) {
            throw "Could not load the Stadiums";
        }
    }

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << stadiums->getSize() << " stadiums" << ", " << matches << " matches" << endl;
}
