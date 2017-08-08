/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: resultFunctions.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Helper functions for Results menu option
 */

#include <iostream>
#include <string>
#include "functions.h"
#include "scheduleFunctions.h"
#include "resultFunctions.h"
#include "MatchesList.h"

using namespace std;

/**
 * Prints the result menu
 */
void printResultMenu() {
    cout << endl << "---------------------------" << endl;
    cout << "\t Match Results" << endl;
    cout << "---------------------------" << endl;
    cout << "  1 - View full Schedule" << endl;
    cout << "  2 - Set Results" << endl;
    cout << "---------------------------" << endl;
    cout << "  0 - Return" << endl;
    cout << endl << "Select an option: ";
}

/**
 * Handles the Result submenu
 * @param {MatchesList *} matches
 * @param {StandingsList *} standings
 */
void handleResultMenu(MatchesList * matches, StandingsList * standings) {
    int choice;
    bool exitAndReturn = false;
    int matchId;
    int t190, t290, t1ext, t2ext, t1pen, t2pen;

    while (!exitAndReturn) {
        printResultMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                listMatches(matches);
                break;

            case 2:
                cout << endl << "Enter Match ID: ";
                cin >> matchId;

                if (matchId > matches->getSize() || matchId < 1) {
                    cout << endl << "Invalid Match ID" << endl;
                } else {
                    Match * match = matches->getById(matchId);
                    cout << endl << "--------------------------------------------------------------------------------" << endl;
                    cout << " Match #" << match->getId() << " " << match->getTeam1()->getCountry() << " v " << match->getTeam2()->getCountry();
                    cout << " (" << match->getDate() << ")";
                    cout << endl << "--------------------------------------------------------------------------------" << endl;

                    cout << "Enter 90 Min Results for " << match->getTeam1()->getCountry() << ": ";
                    cin >> t190;

                    cout << "Enter 90 Min Results for " << match->getTeam2()->getCountry() << ": ";
                    cin >> t290;

                    cout << "Enter Extended-Time Result for " << match->getTeam1()->getCountry() << ": ";
                    cin >> t1ext;

                    cout << "Enter Extended-Time Result for " << match->getTeam2()->getCountry() << ": ";
                    cin >> t2ext;

                    cout << "Enter Penalty-Kick Results for " << match->getTeam1()->getCountry() << ": ";
                    cin >> t1pen;

                    cout << "Enter Penalty-Kick Results for " << match->getTeam2()->getCountry() << ": ";
                    cin >> t2pen;

                    match->getResult()->set90Min(t190, t290);
                    match->getResult()->setExtended(t1ext, t2ext);
                    match->getResult()->setPenalties(t1pen, t2pen);

                    Standing * t1s = standings->getByTeamName(match->getTeam1()->getName());
                    Standing * t2s = standings->getByTeamName(match->getTeam2()->getName());

                    // set results
                    t1s->addGoalsFor(match->getResult()->getTeam1Result());
                    t2s->addGoalsFor(match->getResult()->getTeam2Result());

                    t1s->addGoalsAgainst(match->getResult()->getTeam2Result());
                    t2s->addGoalsAgainst(match->getResult()->getTeam1Result());

                    if (match->getResult()->getTeam1Result() > match->getResult()->getTeam2Result()) {
                        // winner: team 1
                        t1s->addWon();
                        t2s->addLost();
                    } else if (match->getResult()->getTeam1Result() < match->getResult()->getTeam2Result()) {
                        // winner: team 2
                        t1s->addLost();
                        t2s->addWon();
                    } else {
                        // draw
                        t1s->addDraw();
                        t2s->addDraw();
                    }
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
