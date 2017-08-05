/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: helper--functions.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <string>
#include <vector>
#include "helper-functions.h"
#include "Match.h"
#include "Team.h"
#include "Stadium.h"

using namespace std;

/**
 * Loads the list of teams
 * @param teams
 */
void loadTeams(TeamsList* teams) {
    
}

/**
 * Loads the list of scheduled matches
 * @param stadiums
 */
void loadMatches(StadiumsList* stadiums) {
    if (stadiums->getSize() == 0) {
        throw "There are no stadiums loaded";
    }

    // load the matches scheduled for each stadium. This process must be done in order to avoid assigning a match
    // to an incorrect stadium

    ////////////////////////////////////////////////
    // STADIUM 1
    ////////////////////////////////////////////////
    stadiums->getByIndex(0)->addMatch(new Match(
            stadiums->getByIndex(0)->getMatches().size() + 1,
            "14 Jun 2018 18:00",
            stadiums->getByIndex(0),
            new Team(1, "Rusia"),
            new Team() // A2    
    ));

    stadiums->getByIndex(0)->addMatch(new Match(
            stadiums->getByIndex(0)->getMatches().size() + 1,
            "17 Jun 2018 18:00",
            stadiums->getByIndex(0),
            new Team(), // F1
            new Team()  // F2   
    ));

    stadiums->getByIndex(0)->addMatch(new Match(
            stadiums->getByIndex(0)->getMatches().size() + 1,
            "20 Jun 2018 15:00",
            stadiums->getByIndex(0),
            new Team(), // B1
            new Team()  // B3   
    ));

    stadiums->getByIndex(0)->addMatch(new Match(
            stadiums->getByIndex(0)->getMatches().size() + 1,
            "26 Jun 2018 17:00",
            stadiums->getByIndex(0),
            new Team(), // C4
            new Team()  // C1   
    ));

    stadiums->getByIndex(0)->addMatch(new Match(
            stadiums->getByIndex(0)->getMatches().size() + 1,
            "1 Jul 2018 17:00",
            stadiums->getByIndex(0),
            new Team(), // 1B
            new Team()  // 2A   
    ));

    // semifinal
    stadiums->getByIndex(0)->addMatch(new Match(
            stadiums->getByIndex(0)->getMatches().size() + 1,
            "11 Jul 2018 21:00",
            stadiums->getByIndex(0),
            new Team(), // W59
            new Team()  // W60  
    ));

    // final
    stadiums->getByIndex(0)->addMatch(new Match(
            stadiums->getByIndex(0)->getMatches().size() + 1,
            "15 Jul 2018 18:00",
            stadiums->getByIndex(0),
            new Team(), // W61
            new Team()  // W62  
    ));

    ////////////////////////////////////////////////
    // STADIUM 2
    ////////////////////////////////////////////////
    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "15 Jun 2018 17:00",
            stadiums->getByIndex(1),
            new Team(), // B3
            new Team()  // B4
    ));

    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "19 Jun 2018 15:00",
            stadiums->getByIndex(1),
            new Team(), // Russia
            new Team()  // A3  
    ));

    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "22 Jun 2018 21:00",
            stadiums->getByIndex(1),
            new Team(), // E1
            new Team()  // E3  
    ));

    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "26 Jun 2018 17:00",
            stadiums->getByIndex(1),
            new Team(), // D4
            new Team()  // D1
    ));

    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "3 Jul 2018 17:00",
            stadiums->getByIndex(1),
            new Team(), // 1F
            new Team()  // 2E  
    ));

    // semi final
    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "10 Jul 2018 21:00",
            stadiums->getByIndex(1),
            new Team(), // W57
            new Team()  // W58  
    ));

    // third place
    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "14 Jul 2018 17:00",
            stadiums->getByIndex(1),
            new Team(), // L61
            new Team()  // L62  
    ));

    ////////////////////////////////////////////////
    // STADIUM 3
    ////////////////////////////////////////////////
    stadiums->getByIndex(2)->addMatch(new Match(
            stadiums->getByIndex(2)->getMatches().size() + 1,
            "15 Jun 2018 21:00",
            stadiums->getByIndex(2),
            new Team(), // B1
            new Team()  // B2
    ));

    stadiums->getByIndex(2)->addMatch(new Match(
            stadiums->getByIndex(2)->getMatches().size() + 1,
            "18 Jun 2018 18:00",
            stadiums->getByIndex(2),
            new Team(), // G1
            new Team()  // G2
    ));

    stadiums->getByIndex(2)->addMatch(new Match(
            stadiums->getByIndex(2)->getMatches().size() + 1,
            "23 Jun 2018 18:00",
            stadiums->getByIndex(2),
            new Team(), // F1
            new Team()  // F3
    ));

    stadiums->getByIndex(2)->addMatch(new Match(
            stadiums->getByIndex(2)->getMatches().size() + 1,
            "26 Jun 2018 17:00",
            stadiums->getByIndex(2),
            new Team(), // C2
            new Team()  // C3
    ));

    stadiums->getByIndex(2)->addMatch(new Match(
            stadiums->getByIndex(2)->getMatches().size() + 1,
            "30 Jun 2018 21:00",
            stadiums->getByIndex(2),
            new Team(), // 1A
            new Team()  // 2B
    ));

    // quarter final
    stadiums->getByIndex(2)->addMatch(new Match(
            stadiums->getByIndex(2)->getMatches().size() + 1,
            "7 Jul 2018 21:00",
            stadiums->getByIndex(2),
            new Team(), // W51
            new Team()  // W52
    ));
    
    ////////////////////////////////////////////////
    // STADIUM 4
    ////////////////////////////////////////////////
    stadiums->getByIndex(3)->addMatch(new Match(
            stadiums->getByIndex(3)->getMatches().size() + 1,
            "15 Jun 2018 17:00",
            stadiums->getByIndex(3),
            new Team(), // A3
            new Team()  // A4
    ));

    stadiums->getByIndex(3)->addMatch(new Match(
            stadiums->getByIndex(3)->getMatches().size() + 1,
            "21 Jun 2018 17:00",
            stadiums->getByIndex(3),
            new Team(), // C1
            new Team()  // C3
    ));

    stadiums->getByIndex(3)->addMatch(new Match(
            stadiums->getByIndex(3)->getMatches().size() + 1,
            "24 Jun 2018 20:00",
            stadiums->getByIndex(3),
            new Team(), // H4
            new Team()  // H2
    ));
    
    stadiums->getByIndex(3)->addMatch(new Match(
            stadiums->getByIndex(3)->getMatches().size() + 1,
            "27 Jun 2018 19:00",
            stadiums->getByIndex(3),
            new Team(), // F2
            new Team()  // F3
    ));

    ////////////////////////////////////////////////
    // STADIUM 5
    ////////////////////////////////////////////////
    stadiums->getByIndex(4)->addMatch(new Match(
            stadiums->getByIndex(4)->getMatches().size() + 1,
            "16 Jun 2018 13:00",
            stadiums->getByIndex(4),
            new Team(), // C1
            new Team()  // C2
    ));

    stadiums->getByIndex(4)->addMatch(new Match(
            stadiums->getByIndex(4)->getMatches().size() + 1,
            "20 Jun 2018 21:00",
            stadiums->getByIndex(4),
            new Team(), // B4
            new Team()  // B2
    ));

    stadiums->getByIndex(4)->addMatch(new Match(
            stadiums->getByIndex(4)->getMatches().size() + 1,
            "24 Jun 2018 21:00",
            stadiums->getByIndex(4),
            new Team(), // H1
            new Team()  // H3
    ));

    stadiums->getByIndex(4)->addMatch(new Match(
            stadiums->getByIndex(4)->getMatches().size() + 1,
            "27 Jun 2018 17:00",
            stadiums->getByIndex(4),
            new Team(), // F4
            new Team()  // F1
    ));

    stadiums->getByIndex(4)->addMatch(new Match(
            stadiums->getByIndex(4)->getMatches().size() + 1,
            "30 Jun 2018 17:00",
            stadiums->getByIndex(4),
            new Team(), // 1C
            new Team()  // 2D
    ));

    // quarter final
    stadiums->getByIndex(4)->addMatch(new Match(
            stadiums->getByIndex(4)->getMatches().size() + 1,
            "6 Jul 2018 21:00",
            stadiums->getByIndex(4),
            new Team(), // W53
            new Team()  // W54
    ));

    ////////////////////////////////////////////////
    // STADIUM 6
    ////////////////////////////////////////////////
    stadiums->getByIndex(5)->addMatch(new Match(
            stadiums->getByIndex(5)->getMatches().size() + 1,
            "18 Jun 2018 15:00",
            stadiums->getByIndex(5),
            new Team(), // F3
            new Team()  // F4
    ));

    stadiums->getByIndex(5)->addMatch(new Match(
            stadiums->getByIndex(5)->getMatches().size() + 1,
            "21 Jun 2018 21:00",
            stadiums->getByIndex(5),
            new Team(), // D1
            new Team()  // D3
    ));

    stadiums->getByIndex(5)->addMatch(new Match(
            stadiums->getByIndex(5)->getMatches().size() + 1,
            "24 Jun 2018 15:00",
            stadiums->getByIndex(5),
            new Team(), // G4
            new Team()  // G2
    ));

    stadiums->getByIndex(5)->addMatch(new Match(
            stadiums->getByIndex(5)->getMatches().size() + 1,
            "27 Jun 2018 21:00",
            stadiums->getByIndex(5),
            new Team(), // E2
            new Team()  // E3
    ));

    stadiums->getByIndex(5)->addMatch(new Match(
            stadiums->getByIndex(5)->getMatches().size() + 1,
            "1 Jul 2018 21:00",
            stadiums->getByIndex(5),
            new Team(), // 1D
            new Team()  // 2C
    ));

    stadiums->getByIndex(5)->addMatch(new Match(
            stadiums->getByIndex(5)->getMatches().size() + 1,
            "6 Jul 2018 17:00",
            stadiums->getByIndex(5),
            new Team(), // W49
            new Team()  // W50
    ));

    ////////////////////////////////////////////////
    // STADIUM 7
    ////////////////////////////////////////////////
    stadiums->getByIndex(6)->addMatch(new Match(
            stadiums->getByIndex(6)->getMatches().size() + 1,
            "17 Jun 2018 21:00",
            stadiums->getByIndex(6),
            new Team(), // E1
            new Team()  // E2
    ));

    stadiums->getByIndex(6)->addMatch(new Match(
            stadiums->getByIndex(6)->getMatches().size() + 1,
            "10 Jun 2018 18:00",
            stadiums->getByIndex(6),
            new Team(), // A4
            new Team()  // A2
    ));

    stadiums->getByIndex(6)->addMatch(new Match(
            stadiums->getByIndex(6)->getMatches().size() + 1,
            "23 Jun 2018 21:00",
            stadiums->getByIndex(6),
            new Team(), // F4
            new Team()  // F2
    ));

    stadiums->getByIndex(6)->addMatch(new Match(
            stadiums->getByIndex(6)->getMatches().size() + 1,
            "26 Jun 2018 21:00",
            stadiums->getByIndex(6),
            new Team(), // D2
            new Team()  // D3
    ));

    stadiums->getByIndex(6)->addMatch(new Match(
            stadiums->getByIndex(6)->getMatches().size() + 1,
            "2 Jul 2018 21:00",
            stadiums->getByIndex(6),
            new Team(), // 1G
            new Team()  // 2H
    ));

    ////////////////////////////////////////////////
    // STADIUM 8
    ////////////////////////////////////////////////
    stadiums->getByIndex(7)->addMatch(new Match(
            stadiums->getByIndex(7)->getMatches().size() + 1,
            "17 Jun 2018 16:00",
            stadiums->getByIndex(7),
            new Team(), // E3
            new Team()  // E4
    ));

    stadiums->getByIndex(7)->addMatch(new Match(
            stadiums->getByIndex(7)->getMatches().size() + 1,
            "20 Jun 2018 19:00",
            stadiums->getByIndex(7),
            new Team(), // C4
            new Team()  // C2
    ));

    stadiums->getByIndex(7)->addMatch(new Match(
            stadiums->getByIndex(7)->getMatches().size() + 1,
            "25 Jun 2018 18:00",
            stadiums->getByIndex(7),
            new Team(), // A4
            new Team()  // Russia
    ));

    stadiums->getByIndex(7)->addMatch(new Match(
            stadiums->getByIndex(7)->getMatches().size() + 1,
            "28 Jun 2018 18:00",
            stadiums->getByIndex(7),
            new Team(), // H2
            new Team()  // H3
    ));

    stadiums->getByIndex(7)->addMatch(new Match(
            stadiums->getByIndex(7)->getMatches().size() + 1,
            "2 Jul 2018 18:00",
            stadiums->getByIndex(7),
            new Team(), // 1E
            new Team()  // 2F
    ));

    // quarter final
    stadiums->getByIndex(7)->addMatch(new Match(
            stadiums->getByIndex(7)->getMatches().size() + 1,
            "7 Jul 2018 18:00",
            stadiums->getByIndex(7),
            new Team(), // W55
            new Team()  // W56
    ));

    ////////////////////////////////////////////////
    // STADIUM 9
    ////////////////////////////////////////////////
    stadiums->getByIndex(8)->addMatch(new Match(
            stadiums->getByIndex(8)->getMatches().size() + 1,
            "16 Jun 2018 19:00",
            stadiums->getByIndex(8),
            new Team(), // C3
            new Team()  // C4
    ));

    stadiums->getByIndex(8)->addMatch(new Match(
            stadiums->getByIndex(8)->getMatches().size() + 1,
            "19 Jun 2018 18:00",
            stadiums->getByIndex(8),
            new Team(), // H3
            new Team()  // H4
    ));

    stadiums->getByIndex(8)->addMatch(new Match(
            stadiums->getByIndex(8)->getMatches().size() + 1,
            "25 Jun 2018 21:00",
            stadiums->getByIndex(8),
            new Team(), // B4
            new Team()  // B1
    ));

    stadiums->getByIndex(8)->addMatch(new Match(
            stadiums->getByIndex(8)->getMatches().size() + 1,
            "28 Jun 2018 21:00",
            stadiums->getByIndex(8),
            new Team(), // G2
            new Team()  // G3
    ));
    
    ////////////////////////////////////////////////
    // STADIUM 10
    ////////////////////////////////////////////////
    stadiums->getByIndex(9)->addMatch(new Match(
            stadiums->getByIndex(9)->getMatches().size() + 1,
            "18 Jun 2018 21:00",
            stadiums->getByIndex(9),
            new Team(), // G3
            new Team()  // G4
    ));

    stadiums->getByIndex(9)->addMatch(new Match(
            stadiums->getByIndex(9)->getMatches().size() + 1,
            "22 Jun 2018 18:00",
            stadiums->getByIndex(9),
            new Team(), // D4
            new Team()  // D2
    ));

    stadiums->getByIndex(9)->addMatch(new Match(
            stadiums->getByIndex(9)->getMatches().size() + 1,
            "25 Jun 2018 17:00",
            stadiums->getByIndex(9),
            new Team(), // A2
            new Team()  // A3
    ));

    stadiums->getByIndex(9)->addMatch(new Match(
            stadiums->getByIndex(9)->getMatches().size() + 1,
            "28 Jun 2018 17:00",
            stadiums->getByIndex(9),
            new Team(), // H4
            new Team()  // H1
    ));
    
    ////////////////////////////////////////////////
    // STADIUM 11
    ////////////////////////////////////////////////
    stadiums->getByIndex(10)->addMatch(new Match(
            stadiums->getByIndex(10)->getMatches().size() + 1,
            "16 Jun 2018 16:00",
            stadiums->getByIndex(10),
            new Team(), // D1
            new Team()  // D2
    ));

    stadiums->getByIndex(10)->addMatch(new Match(
            stadiums->getByIndex(10)->getMatches().size() + 1,
            "19 Jun 2018 15:00",
            stadiums->getByIndex(10),
            new Team(), // H1
            new Team()  // H2
    ));

    stadiums->getByIndex(10)->addMatch(new Match(
            stadiums->getByIndex(10)->getMatches().size() + 1,
            "23 Jun 2018 15:00",
            stadiums->getByIndex(10),
            new Team(), // B1
            new Team()  // B3
    ));

    stadiums->getByIndex(10)->addMatch(new Match(
            stadiums->getByIndex(10)->getMatches().size() + 1,
            "26 Jun 2018 17:00",
            stadiums->getByIndex(10),
            new Team(), // C4
            new Team()  // C1
    ));

    stadiums->getByIndex(10)->addMatch(new Match(
            stadiums->getByIndex(10)->getMatches().size() + 1,
            "3 Jul 2018 21:00",
            stadiums->getByIndex(10),
            new Team(), // 1H
            new Team()  // 2G
    ));
    
    ////////////////////////////////////////////////
    // STADIUM 12
    ////////////////////////////////////////////////
    stadiums->getByIndex(11)->addMatch(new Match(
            stadiums->getByIndex(11)->getMatches().size() + 1,
            "16 Jun 2018 21:00",
            stadiums->getByIndex(11),
            new Team(), // D3
            new Team()  // D4
    ));
    
    stadiums->getByIndex(11)->addMatch(new Match(
            stadiums->getByIndex(11)->getMatches().size() + 1,
            "22 Jun 2018 20:00",
            stadiums->getByIndex(11),
            new Team(), // E4
            new Team()  // E2
    ));

    stadiums->getByIndex(11)->addMatch(new Match(
            stadiums->getByIndex(11)->getMatches().size() + 1,
            "25 Jun 2018 20:00",
            stadiums->getByIndex(11),
            new Team(), // B2
            new Team()  // B3
    ));

    stadiums->getByIndex(11)->addMatch(new Match(
            stadiums->getByIndex(11)->getMatches().size() + 1,
            "28 Jun 2018 20:00",
            stadiums->getByIndex(11),
            new Team(), // G4
            new Team()  // G1
    ));
    
}

