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
 * Loads the list of scheduled matches
 * @param stadiumList
 */
void loadMatches(vector<Stadium *> &stadiumList) {
    if (stadiumList.empty()) {
        throw "There are no stadiums loaded";
    }

    // load the matches scheduled for each stadium. This process must be done in order to avoid assigning a match
    // to an incorrect stadium

    ////////////////////////////////////////////////
    // STADIUM 1
    ////////////////////////////////////////////////
    stadiumList[0]->addMatch(new Match(
            stadiumList[0]->getMatches().size() + 1,
            "14 Jun 2018 18:00",
            stadiumList[0],
            new Team(1, "Rusia"),
            new Team() // A2
    ));

    stadiumList[0]->addMatch(new Match(
            stadiumList[0]->getMatches().size() + 1,
            "17 Jun 2018 18:00",
            stadiumList[0],
            new Team(), // F1
            new Team()  // F2   
    ));

    stadiumList[0]->addMatch(new Match(
            stadiumList[0]->getMatches().size() + 1,
            "20 Jun 2018 15:00",
            stadiumList[0],
            new Team(), // B1
            new Team()  // B3   
    ));

    stadiumList[0]->addMatch(new Match(
            stadiumList[0]->getMatches().size() + 1,
            "26 Jun 2018 17:00",
            stadiumList[0],
            new Team(), // C4
            new Team()  // C1   
    ));

    stadiumList[0]->addMatch(new Match(
            stadiumList[0]->getMatches().size() + 1,
            "1 Jul 2018 17:00",
            stadiumList[0],
            new Team(), // 1B
            new Team()  // 2A   
    ));

    // semifinal
    stadiumList[0]->addMatch(new Match(
            stadiumList[0]->getMatches().size() + 1,
            "11 Jul 2018 21:00",
            stadiumList[0],
            new Team(), // W59
            new Team()  // W60  
    ));

    // final
    stadiumList[0]->addMatch(new Match(
            stadiumList[0]->getMatches().size() + 1,
            "15 Jul 2018 18:00",
            stadiumList[0],
            new Team(), // W61
            new Team()  // W62  
    ));

    ////////////////////////////////////////////////
    // STADIUM 2
    ////////////////////////////////////////////////

    ////////////////////////////////////////////////
    // STADIUM 3
    ////////////////////////////////////////////////

    ////////////////////////////////////////////////
    // STADIUM 4
    ////////////////////////////////////////////////

    ////////////////////////////////////////////////
    // STADIUM 5
    ////////////////////////////////////////////////

    ////////////////////////////////////////////////
    // STADIUM 6
    ////////////////////////////////////////////////

    ////////////////////////////////////////////////
    // STADIUM 7
    ////////////////////////////////////////////////

    ////////////////////////////////////////////////
    // STADIUM 8
    ////////////////////////////////////////////////

    ////////////////////////////////////////////////
    // STADIUM 9
    ////////////////////////////////////////////////
    stadiumList[8]->addMatch(new Match(
            stadiumList[8]->getMatches().size() + 1,
            "16 Jun 2018 19:00",
            stadiumList[8],
            new Team(), // C3
            new Team()  // C4
    ));

    stadiumList[8]->addMatch(new Match(
            stadiumList[8]->getMatches().size() + 1,
            "19 Jun 2018 18:00",
            stadiumList[8],
            new Team(), // H3
            new Team()  // H4
    ));

    stadiumList[8]->addMatch(new Match(
            stadiumList[8]->getMatches().size() + 1,
            "25 Jun 2018 21:00",
            stadiumList[8],
            new Team(), // B4
            new Team()  // B1
    ));

    stadiumList[8]->addMatch(new Match(
            stadiumList[8]->getMatches().size() + 1,
            "28 Jun 2018 21:00",
            stadiumList[8],
            new Team(), // G2
            new Team()  // G3
    ));
    
    ////////////////////////////////////////////////
    // STADIUM 10
    ////////////////////////////////////////////////
    stadiumList[9]->addMatch(new Match(
            stadiumList[9]->getMatches().size() + 1,
            "18 Jun 2018 21:00",
            stadiumList[9],
            new Team(), // G3
            new Team()  // G4
    ));

    stadiumList[9]->addMatch(new Match(
            stadiumList[9]->getMatches().size() + 1,
            "22 Jun 2018 18:00",
            stadiumList[9],
            new Team(), // D4
            new Team()  // D2
    ));

    stadiumList[9]->addMatch(new Match(
            stadiumList[9]->getMatches().size() + 1,
            "25 Jun 2018 17:00",
            stadiumList[9],
            new Team(), // A2
            new Team()  // A3
    ));

    stadiumList[9]->addMatch(new Match(
            stadiumList[9]->getMatches().size() + 1,
            "28 Jun 2018 17:00",
            stadiumList[9],
            new Team(), // H4
            new Team()  // H1
    ));
    
    ////////////////////////////////////////////////
    // STADIUM 11
    ////////////////////////////////////////////////
    stadiumList[10]->addMatch(new Match(
            stadiumList[10]->getMatches().size() + 1,
            "16 Jun 2018 16:00",
            stadiumList[10],
            new Team(), // D1
            new Team()  // D2
    ));

    stadiumList[10]->addMatch(new Match(
            stadiumList[10]->getMatches().size() + 1,
            "19 Jun 2018 15:00",
            stadiumList[10],
            new Team(), // H1
            new Team()  // H2
    ));

    stadiumList[10]->addMatch(new Match(
            stadiumList[10]->getMatches().size() + 1,
            "23 Jun 2018 15:00",
            stadiumList[10],
            new Team(), // B1
            new Team()  // B3
    ));

    stadiumList[10]->addMatch(new Match(
            stadiumList[10]->getMatches().size() + 1,
            "26 Jun 2018 17:00",
            stadiumList[10],
            new Team(), // C4
            new Team()  // C1
    ));

    stadiumList[10]->addMatch(new Match(
            stadiumList[10]->getMatches().size() + 1,
            "3 Jul 2018 21:00",
            stadiumList[10],
            new Team(), // 1H
            new Team()  // 2G
    ));
    
    ////////////////////////////////////////////////
    // STADIUM 12
    ////////////////////////////////////////////////
    stadiumList[11]->addMatch(new Match(
            stadiumList[11]->getMatches().size() + 1,
            "16 Jun 2018 21:00",
            stadiumList[11],
            new Team(), // D3
            new Team()  // D4
    ));
    
    stadiumList[11]->addMatch(new Match(
            stadiumList[11]->getMatches().size() + 1,
            "22 Jun 2018 20:00",
            stadiumList[11],
            new Team(), // E4
            new Team()  // E2
    ));

    stadiumList[11]->addMatch(new Match(
            stadiumList[11]->getMatches().size() + 1,
            "25 Jun 2018 20:00",
            stadiumList[11],
            new Team(), // B2
            new Team()  // B3
    ));

    stadiumList[11]->addMatch(new Match(
            stadiumList[11]->getMatches().size() + 1,
            "28 Jun 2018 20:00",
            stadiumList[11],
            new Team(), // G4
            new Team()  // G1
    ));
    
}

