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
#include "helperFunctions.h"
#include "Match.h"
#include "Team.h"
#include "Stadium.h"
#include "Group.h"
#include "Standing.h"
#include "StadiumsList.h"
#include "TeamsList.h"
#include "GroupsList.h"
#include "StandingsList.h"


using namespace std;

/**
 * Loads the list of available Stadiums
 * @param stadiums
 */
void loadStadiums(StadiumsList * stadiums) {
    try {
        // add the stadiums to the address book
        stadiums->addStadium(new Stadium(stadiums->getSize() + 1, "Luzhniki Stadium", "Moscow", 81000));
        stadiums->addStadium(new Stadium(stadiums->getSize() + 1, "Saint Petersburg Stadium", "Saint Petersburg", 64000));
        stadiums->addStadium(new Stadium(stadiums->getSize() + 1, "Fisht Stadium", "Sochi", 47700));

        stadiums->addStadium(new Stadium(stadiums->getSize() + 1, "Ekaterinburg Arena", "Ekaterinburg", 45000));
        stadiums->addStadium(new Stadium(stadiums->getSize() + 1, "Kazan Arena", "Kazan", 45000));
        stadiums->addStadium(new Stadium(stadiums->getSize() + 1, "Nizhny Novgorod Stadium", "Nizhny Novgorod", 45000));

        stadiums->addStadium(new Stadium(stadiums->getSize() + 1, "Rostov Arena", "Rostov-on-Don", 45000));
        stadiums->addStadium(new Stadium(stadiums->getSize() + 1, "Samara Arena", "Samara", 45000));
        stadiums->addStadium(new Stadium(stadiums->getSize() + 1, "Mordovia Arena", "Saransk", 45000));

        stadiums->addStadium(new Stadium(stadiums->getSize() + 1, "Volgograd Stadium", "Volgograd", 45000));
        stadiums->addStadium(new Stadium(stadiums->getSize() + 1, "Spartak Stadium", "Moscow", 42000));
        stadiums->addStadium(new Stadium(stadiums->getSize() + 1, "Kaliningrad Stadium", "Kaliningrad", 35212));

    } catch (std::exception e) {
        throw "Could not load the Stadiums";
    }    
}

/**
 * Loads the list of groups
 * @param groups
 */
void loadGroups(GroupsList * groups) {
    groups->addGroup(new Group(groups->getSize() + 1, "A"));
    groups->addGroup(new Group(groups->getSize() + 1, "B"));
    groups->addGroup(new Group(groups->getSize() + 1, "C"));
    groups->addGroup(new Group(groups->getSize() + 1, "D"));
    groups->addGroup(new Group(groups->getSize() + 1, "E"));
    groups->addGroup(new Group(groups->getSize() + 1, "F"));
    groups->addGroup(new Group(groups->getSize() + 1, "G"));
    groups->addGroup(new Group(groups->getSize() + 1, "H"));
}

/**
 * Loads the list of teams
 * @param teams
 */
void loadTeams(TeamsList* teams, GroupsList * groups) {
    // group A
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("A"), "Russia"));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("A"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("A"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("A"), ""));    

    // group B
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("B"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("B"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("B"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("B"), ""));

    // group C
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("C"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("C"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("C"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("C"), ""));
    
    // group D
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("D"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("D"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("D"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("D"), ""));

    // group E
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("E"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("E"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("E"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("E"), ""));

    // group F
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("F"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("F"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("F"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("F"), ""));

    // group G
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("G"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("G"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("G"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("G"), ""));

    // group H
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("H"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("H"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("H"), ""));
    teams->addTeam(new Team(teams->getSize() + 1, groups->getByName("H"), ""));
}

/**
 * Initialize global standings
 * @param stadiums
 */
void loadStandings(StandingsList * standings, TeamsList * teams)
{
    if (teams->getSize() == 0) {
        throw "Team list is empty";
    }
    
    for (int i=0; i<32; i++) {
        standings->addStanding(new Standing(standings->getSize() + 1, teams->getByIndex(i)));
    }
}


/**
 * Loads the list of scheduled matches
 * @param stadiums
 */
void loadMatches(StadiumsList * stadiums, TeamsList * teams, GroupsList * groups) {
    if (stadiums->getSize() == 0) {
        throw "There are no Stadiums loaded";
    }

    if (teams->getSize() == 0) {
        throw "There are no Teams loaded";
    }

    if (groups->getSize() == 0) {
        throw "There are no Groups loaded";
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
            teams->getByIdAndName(1, "A"), // A1 Russia
            teams->getByIdAndName(2, "A") // A2
    ));

    stadiums->getByIndex(0)->addMatch(new Match(
            stadiums->getByIndex(0)->getMatches().size() + 1,
            "17 Jun 2018 18:00",
            stadiums->getByIndex(0),
            teams->getByIdAndName(1, "F"), // F1
            teams->getByIdAndName(2, "F")  // F2   
    ));

    stadiums->getByIndex(0)->addMatch(new Match(
            stadiums->getByIndex(0)->getMatches().size() + 1,
            "20 Jun 2018 15:00",
            stadiums->getByIndex(0),
            teams->getByIdAndName(1, "B"), // B1
            teams->getByIdAndName(3, "B")  // B3   
    ));

    stadiums->getByIndex(0)->addMatch(new Match(
            stadiums->getByIndex(0)->getMatches().size() + 1,
            "26 Jun 2018 17:00",
            stadiums->getByIndex(0),
            teams->getByIdAndName(4, "C"), // C4
            teams->getByIdAndName(1, "C")  // C1   
    ));

    stadiums->getByIndex(0)->addMatch(new Match(
            stadiums->getByIndex(0)->getMatches().size() + 1,
            "1 Jul 2018 17:00",
            stadiums->getByIndex(0),
            groups->getTeamByGroupPosition(1, "B"), // 1B
            groups->getTeamByGroupPosition(2, "A")  // 2A   
    ));

    // semifinal
    stadiums->getByIndex(0)->addMatch(new Match(
            stadiums->getByIndex(0)->getMatches().size() + 1,
            "11 Jul 2018 21:00",
            stadiums->getByIndex(0),
            teams->getByIdAndName(59, "W"), // W59
            teams->getByIdAndName(60, "W")  // W60  
    ));

    // final
    stadiums->getByIndex(0)->addMatch(new Match(
            stadiums->getByIndex(0)->getMatches().size() + 1,
            "15 Jul 2018 18:00",
            stadiums->getByIndex(0),
            teams->getByIdAndName(61, "W"), // W61
            teams->getByIdAndName(62, "W")  // W62  
    ));

    ////////////////////////////////////////////////
    // STADIUM 2
    ////////////////////////////////////////////////
    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "15 Jun 2018 17:00",
            stadiums->getByIndex(1),
            teams->getByIdAndName(3, "B"), // B3
            teams->getByIdAndName(4, "B")  // B4
    ));

    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "19 Jun 2018 15:00",
            stadiums->getByIndex(1),
            teams->getByIdAndName(1, "A"), // Russia
            teams->getByIdAndName(3, "A")  // A3  
    ));

    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "22 Jun 2018 21:00",
            stadiums->getByIndex(1),
            teams->getByIdAndName(1, "E"), // E1
            teams->getByIdAndName(3, "E")  // E3  
    ));

    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "26 Jun 2018 17:00",
            stadiums->getByIndex(1),
            teams->getByIdAndName(4, "D"), // D4
            teams->getByIdAndName(1, "D")  // D1
    ));

    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "3 Jul 2018 17:00",
            stadiums->getByIndex(1),
            groups->getTeamByGroupPosition(1, "F"), // 1F
            groups->getTeamByGroupPosition(2, "E")  // 2E  
    ));

    // semi final
    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "10 Jul 2018 21:00",
            stadiums->getByIndex(1),
            teams->getByIdAndName(57, "W"), // W57
            teams->getByIdAndName(58, "W")  // W58  
    ));

    // third place
    stadiums->getByIndex(1)->addMatch(new Match(
            stadiums->getByIndex(1)->getMatches().size() + 1,
            "14 Jul 2018 17:00",
            stadiums->getByIndex(1),
            teams->getByIdAndName(61, "L"), // L61
            teams->getByIdAndName(62, "L")  // L62  
    ));

    ////////////////////////////////////////////////
    // STADIUM 3
    ////////////////////////////////////////////////
    stadiums->getByIndex(2)->addMatch(new Match(
            stadiums->getByIndex(2)->getMatches().size() + 1,
            "15 Jun 2018 21:00",
            stadiums->getByIndex(2),
            teams->getByIdAndName(1, "B"), // B1
            teams->getByIdAndName(2, "B")  // B2
    ));

    stadiums->getByIndex(2)->addMatch(new Match(
            stadiums->getByIndex(2)->getMatches().size() + 1,
            "18 Jun 2018 18:00",
            stadiums->getByIndex(2),
            teams->getByIdAndName(1, "G"), // G1
            teams->getByIdAndName(2, "G")  // G2
    ));

    stadiums->getByIndex(2)->addMatch(new Match(
            stadiums->getByIndex(2)->getMatches().size() + 1,
            "23 Jun 2018 18:00",
            stadiums->getByIndex(2),
            teams->getByIdAndName(1, "F"), // F1
            teams->getByIdAndName(13, "F")  // F3
    ));

    stadiums->getByIndex(2)->addMatch(new Match(
            stadiums->getByIndex(2)->getMatches().size() + 1,
            "26 Jun 2018 17:00",
            stadiums->getByIndex(2),
            teams->getByIdAndName(2, "C"), // C2
            teams->getByIdAndName(3, "C")  // C3
    ));

    stadiums->getByIndex(2)->addMatch(new Match(
            stadiums->getByIndex(2)->getMatches().size() + 1,
            "30 Jun 2018 21:00",
            stadiums->getByIndex(2),
            groups->getTeamByGroupPosition(1, "A"), // 1A
            groups->getTeamByGroupPosition(2, "B")  // 2B
    ));

    // quarter final
    stadiums->getByIndex(2)->addMatch(new Match(
            stadiums->getByIndex(2)->getMatches().size() + 1,
            "7 Jul 2018 21:00",
            stadiums->getByIndex(2),
            teams->getByIdAndName(51, "W"), // W51
            teams->getByIdAndName(52, "W")  // W52
    ));
    
    ////////////////////////////////////////////////
    // STADIUM 4
    ////////////////////////////////////////////////
    stadiums->getByIndex(3)->addMatch(new Match(
            stadiums->getByIndex(3)->getMatches().size() + 1,
            "15 Jun 2018 17:00",
            stadiums->getByIndex(3),
            teams->getByIdAndName(3, "A"), // A3
            teams->getByIdAndName(4, "A")  // A4
    ));

    stadiums->getByIndex(3)->addMatch(new Match(
            stadiums->getByIndex(3)->getMatches().size() + 1,
            "21 Jun 2018 17:00",
            stadiums->getByIndex(3),
            teams->getByIdAndName(1, "C"), // C1
            teams->getByIdAndName(3, "C")  // C3
    ));

    stadiums->getByIndex(3)->addMatch(new Match(
            stadiums->getByIndex(3)->getMatches().size() + 1,
            "24 Jun 2018 20:00",
            stadiums->getByIndex(3),
            teams->getByIdAndName(4, "H"), // H4
            teams->getByIdAndName(2, "H")  // H2
    ));
    
    stadiums->getByIndex(3)->addMatch(new Match(
            stadiums->getByIndex(3)->getMatches().size() + 1,
            "27 Jun 2018 19:00",
            stadiums->getByIndex(3),
            teams->getByIdAndName(2, "F"), // F2
            teams->getByIdAndName(3, "F")  // F3
    ));

    ////////////////////////////////////////////////
    // STADIUM 5
    ////////////////////////////////////////////////
    stadiums->getByIndex(4)->addMatch(new Match(
            stadiums->getByIndex(4)->getMatches().size() + 1,
            "16 Jun 2018 13:00",
            stadiums->getByIndex(4),
            teams->getByIdAndName(1, "C"), // C1
            teams->getByIdAndName(2, "C")  // C2
    ));

    stadiums->getByIndex(4)->addMatch(new Match(
            stadiums->getByIndex(4)->getMatches().size() + 1,
            "20 Jun 2018 21:00",
            stadiums->getByIndex(4),
            teams->getByIdAndName(4, "B"), // B4
            teams->getByIdAndName(2, "B")  // B2
    ));

    stadiums->getByIndex(4)->addMatch(new Match(
            stadiums->getByIndex(4)->getMatches().size() + 1,
            "24 Jun 2018 21:00",
            stadiums->getByIndex(4),
            teams->getByIdAndName(1, "H"), // H1
            teams->getByIdAndName(3, "H")  // H3
    ));

    stadiums->getByIndex(4)->addMatch(new Match(
            stadiums->getByIndex(4)->getMatches().size() + 1,
            "27 Jun 2018 17:00",
            stadiums->getByIndex(4),
            teams->getByIdAndName(4, "F"), // F4
            teams->getByIdAndName(1, "F")  // F1
    ));

    stadiums->getByIndex(4)->addMatch(new Match(
            stadiums->getByIndex(4)->getMatches().size() + 1,
            "30 Jun 2018 17:00",
            stadiums->getByIndex(4),
            groups->getTeamByGroupPosition(1, "C"), // 1C
            groups->getTeamByGroupPosition(2, "D")  // 2D
    ));

    // quarter final
    stadiums->getByIndex(4)->addMatch(new Match(
            stadiums->getByIndex(4)->getMatches().size() + 1,
            "6 Jul 2018 21:00",
            stadiums->getByIndex(4),
            teams->getByIdAndName(53, "W"), // W53
            teams->getByIdAndName(54, "W")  // W54
    ));

    ////////////////////////////////////////////////
    // STADIUM 6
    ////////////////////////////////////////////////
    stadiums->getByIndex(5)->addMatch(new Match(
            stadiums->getByIndex(5)->getMatches().size() + 1,
            "18 Jun 2018 15:00",
            stadiums->getByIndex(5),
            teams->getByIdAndName(3, "F"), // F3
            teams->getByIdAndName(4, "F")  // F4
    ));

    stadiums->getByIndex(5)->addMatch(new Match(
            stadiums->getByIndex(5)->getMatches().size() + 1,
            "21 Jun 2018 21:00",
            stadiums->getByIndex(5),
            teams->getByIdAndName(1, "D"), // D1
            teams->getByIdAndName(3, "D")  // D3
    ));

    stadiums->getByIndex(5)->addMatch(new Match(
            stadiums->getByIndex(5)->getMatches().size() + 1,
            "24 Jun 2018 15:00",
            stadiums->getByIndex(5),
            teams->getByIdAndName(4, "G"), // G4
            teams->getByIdAndName(2, "G")  // G2
    ));

    stadiums->getByIndex(5)->addMatch(new Match(
            stadiums->getByIndex(5)->getMatches().size() + 1,
            "27 Jun 2018 21:00",
            stadiums->getByIndex(5),
            teams->getByIdAndName(2, "E"), // E2
            teams->getByIdAndName(3, "E")  // E3
    ));

    stadiums->getByIndex(5)->addMatch(new Match(
            stadiums->getByIndex(5)->getMatches().size() + 1,
            "1 Jul 2018 21:00",
            stadiums->getByIndex(5),
            groups->getTeamByGroupPosition(1, "D"), // 1D
            groups->getTeamByGroupPosition(2, "C")  // 2C
    ));

    stadiums->getByIndex(5)->addMatch(new Match(
            stadiums->getByIndex(5)->getMatches().size() + 1,
            "6 Jul 2018 17:00",
            stadiums->getByIndex(5),
            teams->getByIdAndName(49, "W"), // W49
            teams->getByIdAndName(50, "W")  // W50
    ));

    ////////////////////////////////////////////////
    // STADIUM 7
    ////////////////////////////////////////////////
    stadiums->getByIndex(6)->addMatch(new Match(
            stadiums->getByIndex(6)->getMatches().size() + 1,
            "17 Jun 2018 21:00",
            stadiums->getByIndex(6),
            teams->getByIdAndName(1, "E"), // E1
            teams->getByIdAndName(2, "E")  // E2
    ));

    stadiums->getByIndex(6)->addMatch(new Match(
            stadiums->getByIndex(6)->getMatches().size() + 1,
            "10 Jun 2018 18:00",
            stadiums->getByIndex(6),
            teams->getByIdAndName(4, "A"), // A4
            teams->getByIdAndName(2, "A")  // A2
    ));

    stadiums->getByIndex(6)->addMatch(new Match(
            stadiums->getByIndex(6)->getMatches().size() + 1,
            "23 Jun 2018 21:00",
            stadiums->getByIndex(6),
            teams->getByIdAndName(4, "F"), // F4
            teams->getByIdAndName(2, "F")  // F2
    ));

    stadiums->getByIndex(6)->addMatch(new Match(
            stadiums->getByIndex(6)->getMatches().size() + 1,
            "26 Jun 2018 21:00",
            stadiums->getByIndex(6),
            teams->getByIdAndName(2, "D"), // D2
            teams->getByIdAndName(3, "D")  // D3
    ));

    stadiums->getByIndex(6)->addMatch(new Match(
            stadiums->getByIndex(6)->getMatches().size() + 1,
            "2 Jul 2018 21:00",
            stadiums->getByIndex(6),
            groups->getTeamByGroupPosition(1, "G"), // 1G
            groups->getTeamByGroupPosition(1, "H")  // 2H
    ));

    ////////////////////////////////////////////////
    // STADIUM 8
    ////////////////////////////////////////////////
    stadiums->getByIndex(7)->addMatch(new Match(
            stadiums->getByIndex(7)->getMatches().size() + 1,
            "17 Jun 2018 16:00",
            stadiums->getByIndex(7),
            teams->getByIdAndName(3, "E"), // E3
            teams->getByIdAndName(4, "E")  // E4
    ));

    stadiums->getByIndex(7)->addMatch(new Match(
            stadiums->getByIndex(7)->getMatches().size() + 1,
            "20 Jun 2018 19:00",
            stadiums->getByIndex(7),
            teams->getByIdAndName(4, "C"), // C4
            teams->getByIdAndName(2, "C")  // C2
    ));

    stadiums->getByIndex(7)->addMatch(new Match(
            stadiums->getByIndex(7)->getMatches().size() + 1,
            "25 Jun 2018 18:00",
            stadiums->getByIndex(7),
            teams->getByIdAndName(4, "A"), // A4
            teams->getByIdAndName(1, "A")  // Russia A1
    ));

    stadiums->getByIndex(7)->addMatch(new Match(
            stadiums->getByIndex(7)->getMatches().size() + 1,
            "28 Jun 2018 18:00",
            stadiums->getByIndex(7),
            teams->getByIdAndName(2, "H"), // H2
            teams->getByIdAndName(3, "H")  // H3
    ));

    stadiums->getByIndex(7)->addMatch(new Match(
            stadiums->getByIndex(7)->getMatches().size() + 1,
            "2 Jul 2018 18:00",
            stadiums->getByIndex(7),
            groups->getTeamByGroupPosition(1, "E"), // 1E
            groups->getTeamByGroupPosition(2, "F")  // 2F
    ));

    // quarter final
    stadiums->getByIndex(7)->addMatch(new Match(
            stadiums->getByIndex(7)->getMatches().size() + 1,
            "7 Jul 2018 18:00",
            stadiums->getByIndex(7),
            teams->getByIdAndName(55, "W"), // W55
            teams->getByIdAndName(56, "W")  // W56
    ));

    ////////////////////////////////////////////////
    // STADIUM 9
    ////////////////////////////////////////////////
    stadiums->getByIndex(8)->addMatch(new Match(
            stadiums->getByIndex(8)->getMatches().size() + 1,
            "16 Jun 2018 19:00",
            stadiums->getByIndex(8),
            teams->getByIdAndName(3, "C"), // C3
            teams->getByIdAndName(4, "C")  // C4
    ));

    stadiums->getByIndex(8)->addMatch(new Match(
            stadiums->getByIndex(8)->getMatches().size() + 1,
            "19 Jun 2018 18:00",
            stadiums->getByIndex(8),
            teams->getByIdAndName(1, ""), // H3
            teams->getByIdAndName(1, "")  // H4
    ));

    stadiums->getByIndex(8)->addMatch(new Match(
            stadiums->getByIndex(8)->getMatches().size() + 1,
            "25 Jun 2018 21:00",
            stadiums->getByIndex(8),
            teams->getByIdAndName(4, "B"), // B4
            teams->getByIdAndName(1, "B")  // B1
    ));

    stadiums->getByIndex(8)->addMatch(new Match(
            stadiums->getByIndex(8)->getMatches().size() + 1,
            "28 Jun 2018 21:00",
            stadiums->getByIndex(8),
            teams->getByIdAndName(2, "G"), // G2
            teams->getByIdAndName(3, "G")  // G3
    ));
    
    ////////////////////////////////////////////////
    // STADIUM 10
    ////////////////////////////////////////////////
    stadiums->getByIndex(9)->addMatch(new Match(
            stadiums->getByIndex(9)->getMatches().size() + 1,
            "18 Jun 2018 21:00",
            stadiums->getByIndex(9),
            teams->getByIdAndName(3, "G"), // G3
            teams->getByIdAndName(4, "G")  // G4
    ));

    stadiums->getByIndex(9)->addMatch(new Match(
            stadiums->getByIndex(9)->getMatches().size() + 1,
            "22 Jun 2018 18:00",
            stadiums->getByIndex(9),
            teams->getByIdAndName(4, "D"), // D4
            teams->getByIdAndName(2, "D")  // D2
    ));

    stadiums->getByIndex(9)->addMatch(new Match(
            stadiums->getByIndex(9)->getMatches().size() + 1,
            "25 Jun 2018 17:00",
            stadiums->getByIndex(9),
            teams->getByIdAndName(2, "A"), // A2
            teams->getByIdAndName(3, "A")  // A3
    ));

    stadiums->getByIndex(9)->addMatch(new Match(
            stadiums->getByIndex(9)->getMatches().size() + 1,
            "28 Jun 2018 17:00",
            stadiums->getByIndex(9),
            teams->getByIdAndName(4, "H"), // H4
            teams->getByIdAndName(1, "H")  // H1
    ));
    
    ////////////////////////////////////////////////
    // STADIUM 11
    ////////////////////////////////////////////////
    stadiums->getByIndex(10)->addMatch(new Match(
            stadiums->getByIndex(10)->getMatches().size() + 1,
            "16 Jun 2018 16:00",
            stadiums->getByIndex(10),
            teams->getByIdAndName(1, "D"), // D1
            teams->getByIdAndName(2, "D")  // D2
    ));

    stadiums->getByIndex(10)->addMatch(new Match(
            stadiums->getByIndex(10)->getMatches().size() + 1,
            "19 Jun 2018 15:00",
            stadiums->getByIndex(10),
            teams->getByIdAndName(1, "H"), // H1
            teams->getByIdAndName(2, "H")  // H2
    ));

    stadiums->getByIndex(10)->addMatch(new Match(
            stadiums->getByIndex(10)->getMatches().size() + 1,
            "23 Jun 2018 15:00",
            stadiums->getByIndex(10),
            teams->getByIdAndName(1, "B"), // B1
            teams->getByIdAndName(3, "B")  // B3
    ));

    stadiums->getByIndex(10)->addMatch(new Match(
            stadiums->getByIndex(10)->getMatches().size() + 1,
            "26 Jun 2018 17:00",
            stadiums->getByIndex(10),
            teams->getByIdAndName(4, "C"), // C4
            teams->getByIdAndName(1, "C")  // C1
    ));

    stadiums->getByIndex(10)->addMatch(new Match(
            stadiums->getByIndex(10)->getMatches().size() + 1,
            "3 Jul 2018 21:00",
            stadiums->getByIndex(10),
            groups->getTeamByGroupPosition(1, "H"), // 1H
            groups->getTeamByGroupPosition(2, "G")  // 2G
    ));
    
    ////////////////////////////////////////////////
    // STADIUM 12
    ////////////////////////////////////////////////
    stadiums->getByIndex(11)->addMatch(new Match(
            stadiums->getByIndex(11)->getMatches().size() + 1,
            "16 Jun 2018 21:00",
            stadiums->getByIndex(11),
            teams->getByIdAndName(3, "D"), // D3
            teams->getByIdAndName(4, "D")  // D4
    ));
    
    stadiums->getByIndex(11)->addMatch(new Match(
            stadiums->getByIndex(11)->getMatches().size() + 1,
            "22 Jun 2018 20:00",
            stadiums->getByIndex(11),
            teams->getByIdAndName(4, "E"), // E4
            teams->getByIdAndName(2, "E")  // E2
    ));

    stadiums->getByIndex(11)->addMatch(new Match(
            stadiums->getByIndex(11)->getMatches().size() + 1,
            "25 Jun 2018 20:00",
            stadiums->getByIndex(11),
            teams->getByIdAndName(2, "B"), // B2
            teams->getByIdAndName(3, "B")  // B3
    ));

    stadiums->getByIndex(11)->addMatch(new Match(
            stadiums->getByIndex(11)->getMatches().size() + 1,
            "28 Jun 2018 20:00",
            stadiums->getByIndex(11),
            teams->getByIdAndName(4, "G"), // G4
            teams->getByIdAndName(1, "G")  // G1
    ));
    
}

