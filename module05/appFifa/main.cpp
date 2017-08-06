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
#include "StadiumsList.h"
#include "TeamsList.h"
#include "GroupsList.h"
#include "Standing.h"
#include "StandingsList.h"
#include "functions.h"

using namespace std;


/**
 * List the stadiums
 * @param stadiums
 */
void listStadiums(StadiumsList * stadiums) {
    if (stadiums->getSize() == 0) {
        throw "There are no Stadiums loaded";
    }

    int matches = 0;
    
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << setw(5) << "ID";
    cout << setw(35) << "VENUE";
    cout << setw(25) << "LOCATION";
    cout << setw(15) << "CAPACITY";
    cout << setw(10) << "MATCHES";
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;

    for (int i=0; i<stadiums->getSize(); i++) {
        try {
            Stadium * stadium = stadiums->getByIndex(i);
        
            cout << setw(5) << stadium->getId();
            cout << setw(35) << stadium->getName();
            cout << setw(25) << stadium->getLocation();
            cout << setw(15) << stadium->getCapacity();
            cout << setw(10) << stadium->getMatches().size() << endl;

            matches += stadium->getMatches().size();
        } catch (std::exception e) {
            throw "Could not load the Stadiums";
        }    
    }

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << stadiums->getSize()  << " stadiums" << ", " << matches << " matches" << endl;
}

void listGroups(GroupsList * groups) {
    if (groups->getSize() == 0) {
        throw "There are no Groups loaded";
    }

    int teams = 0;
    
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << setw(5) << "ID";
    cout << setw(35) << "NAME";
    cout << setw(25) << "TEAMS";
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;

    for (int i=0; i<groups->getSize(); i++) {
        try {
            Group * group = groups->getByIndex(i);
        
            cout << setw(5) << group->getId();
            cout << setw(35) << group->getName();
            cout << setw(10) << group->getTeams().size() << endl;

            teams += group->getTeams().size();
        } catch (std::exception e) {
            throw "Could not load the Stadiums";
        }    
    }

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << groups->getSize()  << " groups" << ", " << teams << " teams" << endl;
}

void listTeams(TeamsList * teams) {
    if (teams->getSize() == 0) {
        throw "There are no Groups loaded";
    }

    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << setw(5) << "ID";
    cout << setw(25) << "TEAM";
    cout << setw(25) << "GROUP";
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;

    for (int i=0; i<teams->getSize(); i++) {
        try {
            Team * team = teams->getByIndex(i);
        
            cout << setw(5) << team->getId();
            cout << setw(25) << team->getCountry();
            cout << setw(10) << team->getGroup()->getName() << endl;

        } catch (std::exception e) {
            throw "Could not load the Stadiums";
        }    
    }

    cout << "-----------------------------------------------------------------------------------------------" << endl;
    cout << "Total: " << teams->getSize()  << " teams" << endl;
}

void printStandings(StandingsList * standings) {
    if (standings->getSize() == 0) {
        throw "There are no Standings";
    }

    int teams = 0;
    
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;
    cout << setw(5) << "POSITION";
    cout << setw(25) << "TEAM";
    cout << setw(8) << "PLAYED";
    cout << setw(8) << "WON";
    cout << setw(8) << "DRAW";
    cout << setw(8) << "LOST";
    cout << setw(8) << "FOR";
    cout << setw(8) << "AGAINST";
    cout << setw(8) << "DIFF";
    cout << setw(8) << "POINTS";
    cout << endl << "-----------------------------------------------------------------------------------------------" << endl;

    for (int i=0; i<standings->getSize(); i++) {
        try {
            Standing * standing = standings->getByIndex(i);
        
            cout << setw(5) << standing->getId();
            cout << setw(25) << standing->getTeam()->getCountry();
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
    cout << "Total: " << standings->getSize()  << " teams" << endl;
}

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

    cout << endl << "Welcome to FIFA 2018 World Cup App" << endl;

    // load stadiums
    loadStadiums(stadiums);

    // load groups
    loadGroups(groups);

    // load teams
    loadTeams(teams, groups);
    
    // load standings
    loadStandings(standings, teams);

    // load matches
//    loadMatches(stadiums, teams, groups);

    while (!exitApp) {
        printMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                handleTeamMenu();
                break;

            case 2:
                handleGroupMenu();
                break;

            case 3:
                handleScheduleMenu();
                break;

            case 4:
                handleResultMenu();
                break;

            case 5:
                handlePositionMenu();
                break;
                
            case 6:
                // list stadiums (test)
                printHeader("Loaded Stadiums");
                listStadiums(stadiums);
                break;

            case 7:
                // list stadiums (test)
                printHeader("Loaded Groups");
                listGroups(groups);
                break;

            case 8:
                // list stadiums (test)
                printHeader("Loaded Teams");
                listTeams(teams);
                break;

            case 9:
                // list stadiums (test)
                printHeader("Loaded Matches");
//                listStadiums(stadiums);
                break;

            case 10:
                // list stadiums (test)
                printHeader("Current Global Standings");
                printStandings(standings);
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

