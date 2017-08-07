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

// constants
const int MAX_STADIUMS = 12;    // how many stadiums are available
const int MAX_TEAMS = 32;       // how many teams
const int MAX_MATCHES = 65;     // how many matches

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <vector>
#include "Group.h"
#include "Match.h"
#include "Result.h"
#include "Stadium.h"
#include "Team.h"
#include "Standing.h"
#include "GroupsList.h"
#include "MatchesList.h"
#include "StadiumsList.h"
#include "TeamsList.h"
#include "StandingsList.h"
#include "functions.h"

using namespace std;

/**
 * main function
 */
int main(int argc, char** argv) {
    bool exitApp = false;
    int choice;
    StadiumsList * stadiums = new StadiumsList();
    TeamsList * teams = new TeamsList();
    GroupsList * groups = new GroupsList();
    StandingsList * standings = new StandingsList(); // global standings
    MatchesList * matches = new MatchesList();

    cout << endl << "------------------------------------" << endl;
    cout << " Welcome to FIFA 2018 World Cup App" << endl;
    cout << "------------------------------------" << endl;
    cout << "Note: Some basic data has been pre-loaded" << endl;

    // load stadiums
    loadStadiums(stadiums);

    // load groups
    loadGroups(groups);

    // load teams
    loadTeams(teams, groups);
    
    // load global standings
    loadStandings(standings, teams);

    // load group standings
    loadGroupStandings(groups, standings);
    
    // load matches
    loadMatches(matches, stadiums, teams, groups);

    while (!exitApp) {
        printMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                handleTeamMenu(teams, groups);
                break;

            case 2:
                handleGroupMenu(groups);
                break;

            case 3:
                handleScheduleMenu(matches, stadiums);
                break;

            case 4:
                handleResultMenu(matches, standings);
                break;

            case 5:
                handlePositionMenu(standings, groups);
                break;
                
            case 6:
                // list stadiums (test)
                printHeader("Loaded Stadiums");
                listStadiums(stadiums);
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
