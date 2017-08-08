/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: helper--functions.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Common initialization functions to load the required data
 */

#include <string>
#include <vector>
#include <iostream>
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
#include "MatchesList.h"


using namespace std;

/**
 * Loads the list of available Stadiums
 * @param {StadiumsList *} stadiums
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
 * @param {GroupsList *} groups
 */
void loadGroups(GroupsList * groups) {
    groups->addGroup(new Group("A"));
    groups->addGroup(new Group("B"));
    groups->addGroup(new Group("C"));
    groups->addGroup(new Group("D"));
    groups->addGroup(new Group("E"));
    groups->addGroup(new Group("F"));
    groups->addGroup(new Group("G"));
    groups->addGroup(new Group("H"));
}

/**
 * Loads the list of teams and assigns the teams to each group
 * @param {TeamsList *} teams
 * @param {GroupsList *} groups
 */
void loadTeams(TeamsList * teams, GroupsList * groups) {
    Group * group;

    // group A
    group = groups->getByName("A");
    teams->addTeam(new Team("A1", group, "Russia"));
    teams->addTeam(new Team("A2", group, "Team A2"));
    teams->addTeam(new Team("A3", group, "Team A3"));
    teams->addTeam(new Team("A4", group, "Team A4"));

    // assign teams to group
    for (int i = 0; i < 4; i++) {
        group->addTeam(teams->getByIndex(i));
    }

    // group B
    group = groups->getByName("B");
    teams->addTeam(new Team("B1", groups->getByName("B"), "Team B1"));
    teams->addTeam(new Team("B2", groups->getByName("B"), "Team B2"));
    teams->addTeam(new Team("B3", groups->getByName("B"), "Team B3"));
    teams->addTeam(new Team("B4", groups->getByName("B"), "Team B4"));

    // assign teams to group
    for (int i = 4; i < 8; i++) {
        groups->getByName("B")->addTeam(teams->getByIndex(i));
    }

    // group C
    teams->addTeam(new Team("C1", groups->getByName("C"), "Team C1"));
    teams->addTeam(new Team("C2", groups->getByName("C"), "Team C2"));
    teams->addTeam(new Team("C3", groups->getByName("C"), "Team C3"));
    teams->addTeam(new Team("C4", groups->getByName("C"), "Team C4"));

    // assign teams to group
    for (int i = 8; i < 12; i++) {
        groups->getByName("C")->addTeam(teams->getByIndex(i));
    }

    // group D
    teams->addTeam(new Team("D1", groups->getByName("D"), "Team D1"));
    teams->addTeam(new Team("D2", groups->getByName("D"), "Team D2"));
    teams->addTeam(new Team("D3", groups->getByName("D"), "Team D3"));
    teams->addTeam(new Team("D4", groups->getByName("D"), "Team D4"));

    // assign teams to group
    for (int i = 12; i < 16; i++) {
        groups->getByName("D")->addTeam(teams->getByIndex(i));
    }

    // group E
    teams->addTeam(new Team("E1", groups->getByName("E"), "Team E1"));
    teams->addTeam(new Team("E2", groups->getByName("E"), "Team E2"));
    teams->addTeam(new Team("E3", groups->getByName("E"), "Team E3"));
    teams->addTeam(new Team("E4", groups->getByName("E"), "Team E4"));

    // assign teams to group
    for (int i = 16; i < 20; i++) {
        groups->getByName("E")->addTeam(teams->getByIndex(i));
    }

    // group F
    teams->addTeam(new Team("F1", groups->getByName("F"), "Team F1"));
    teams->addTeam(new Team("F2", groups->getByName("F"), "Team F2"));
    teams->addTeam(new Team("F3", groups->getByName("F"), "Team F3"));
    teams->addTeam(new Team("F4", groups->getByName("F"), "Team F4"));

    // assign teams to group
    for (int i = 20; i < 24; i++) {
        groups->getByName("F")->addTeam(teams->getByIndex(i));
    }

    // group G
    teams->addTeam(new Team("G1", groups->getByName("G"), "Team G1"));
    teams->addTeam(new Team("G2", groups->getByName("G"), "Team G2"));
    teams->addTeam(new Team("G3", groups->getByName("G"), "Team G3"));
    teams->addTeam(new Team("G4", groups->getByName("G"), "Team G4"));

    // assign teams to group
    for (int i = 24; i < 28; i++) {
        groups->getByName("G")->addTeam(teams->getByIndex(i));
    }

    // group H
    teams->addTeam(new Team("H1", groups->getByName("H"), "Team H1"));
    teams->addTeam(new Team("H2", groups->getByName("H"), "Team H2"));
    teams->addTeam(new Team("H3", groups->getByName("H"), "Team H3"));
    teams->addTeam(new Team("H4", groups->getByName("H"), "Team H4"));

    // assign teams to group
    for (int i = 28; i < 32; i++) {
        groups->getByName("H")->addTeam(teams->getByIndex(i));
    }

}

/**
 * Initialize global standings
 * @param {StandingsList *} standings
 * @param {TeamsList * } teams
 */
void loadStandings(StandingsList * standings, TeamsList * teams) {
    if (teams->getSize() == 0) {
        throw "Team list is empty";
    }

    for (int i = 0; i < 32; i++) {
        standings->addStanding(new Standing(standings->getSize() + 1, teams->getByIndex(i)));
    }
}

/**
 * Initialize standings for every group
 * @param {GroupsList *} groups
 * @param {StandingsList *} standings
 */
void loadGroupStandings(GroupsList * groups, StandingsList * standings) {
    if (groups->getSize() == 0) {
        throw "Groups list is empty";
    }

    if (standings->getSize() == 0) {
        throw "Global Standings not loaded";
    }

    Group * group;

    // group A
    group = groups->getByName("A");
    StandingsList * gs1 = new StandingsList();
    for (int i = 0; i < 4; i++) {
        Team * t = group->getTeams()->getByIndex(i);
        Standing * s = standings->getByTeamName(t->getName());
        gs1->addStanding(s);
    }
    group->setStandings(gs1);

    // group B
    group = groups->getByName("B");
    StandingsList * gs2 = new StandingsList();
    for (int i = 0; i < 4; i++) {
        Team * t = group->getTeams()->getByIndex(i);
        Standing * s = standings->getByTeamName(t->getName());
        gs2->addStanding(s);
    }
    group->setStandings(gs2);

    // group C
    group = groups->getByName("C");
    StandingsList * gs3 = new StandingsList();
    for (int i = 0; i < 4; i++) {
        Team * t = group->getTeams()->getByIndex(i);
        Standing * s = standings->getByTeamName(t->getName());
        gs3->addStanding(s);
    }
    group->setStandings(gs3);

    // group D
    group = groups->getByName("D");
    StandingsList * gs4 = new StandingsList();
    for (int i = 0; i < 4; i++) {
        Team * t = group->getTeams()->getByIndex(i);
        Standing * s = standings->getByTeamName(t->getName());
        gs4->addStanding(s);
    }
    group->setStandings(gs4);

    // group E
    group = groups->getByName("E");
    StandingsList * gs5 = new StandingsList();
    for (int i = 0; i < 4; i++) {
        Team * t = group->getTeams()->getByIndex(i);
        Standing * s = standings->getByTeamName(t->getName());
        gs5->addStanding(s);
    }
    group->setStandings(gs5);

    // group F
    group = groups->getByName("F");
    StandingsList * gs6 = new StandingsList();
    for (int i = 0; i < 4; i++) {
        Team * t = group->getTeams()->getByIndex(i);
        Standing * s = standings->getByTeamName(t->getName());
        gs6->addStanding(s);
    }
    group->setStandings(gs6);

    // group G
    group = groups->getByName("G");
    StandingsList * gs7 = new StandingsList();
    for (int i = 0; i < 4; i++) {
        Team * t = group->getTeams()->getByIndex(i);
        Standing * s = standings->getByTeamName(t->getName());
        gs7->addStanding(s);
    }
    group->setStandings(gs7);

    // group H
    group = groups->getByName("H");
    StandingsList * gs8 = new StandingsList();
    for (int i = 0; i < 4; i++) {
        Team * t = group->getTeams()->getByIndex(i);
        Standing * s = standings->getByTeamName(t->getName());
        gs8->addStanding(s);
    }
    group->setStandings(gs8);

}

/**
 * Adds a match to the matches list and to a stadium
 * @param {Match *} match
 * @param {MatchesList *} matches
 * @param {Stadium *} stadium
 */
void addMatch(Match * match, MatchesList * matches, Stadium * stadium) {
    matches->addMatch(match);
    stadium->addMatch(match);
}

/**
 * Loads the list of scheduled matches and adds the relationships between the different data structures
 * @param {MatchesList *} matches
 * @param {StadiumsList *} stadiums
 * @param {TeamsList *} teams
 * @param {GroupsList *} groups
 */
void loadMatches(MatchesList * matches, StadiumsList * stadiums, TeamsList * teams, GroupsList * groups) {
    if (stadiums->getSize() == 0) {
        throw "There are no Stadiums loaded";
    }

    if (teams->getSize() == 0) {
        throw "There are no Teams loaded";
    }

    if (groups->getSize() == 0) {
        throw "There are no Groups loaded";
    }

    // load the matches scheduled for each stadium. This process must be done 
    // to avoid assigning a match to an incorrect stadium

    ////////////////////////////////////////////////
    // STADIUM 1
    ////////////////////////////////////////////////
    addMatch(new Match(
            matches->getSize() + 1,
            "14 Jun 2018 18:00",
            stadiums->getByIndex(0),
            teams->getByName("A1"), // A1 Russia
            teams->getByName("A2") // A2
            ), matches, stadiums->getByIndex(0));

    addMatch(new Match(
            matches->getSize() + 1,
            "17 Jun 2018 18:00",
            stadiums->getByIndex(0),
            teams->getByName("F1"), // F1
            teams->getByName("F2") // F2   
            ), matches, stadiums->getByIndex(0));

    addMatch(new Match(
            matches->getSize() + 1,
            "20 Jun 2018 15:00",
            stadiums->getByIndex(0),
            teams->getByName("B1"), // B1
            teams->getByName("B3") // B3   
            ), matches, stadiums->getByIndex(0));

    addMatch(new Match(
            matches->getSize() + 1,
            "26 Jun 2018 17:00",
            stadiums->getByIndex(0),
            teams->getByName("C4"), // C4
            teams->getByName("C1") // C1   
            ), matches, stadiums->getByIndex(0));



    ////////////////////////////////////////////////
    // STADIUM 2
    ////////////////////////////////////////////////
    addMatch(new Match(
            matches->getSize() + 1,
            "15 Jun 2018 17:00",
            stadiums->getByIndex(1),
            teams->getByName("B3"), // B3
            teams->getByName("B4") // B4
            ), matches, stadiums->getByIndex(1));

    addMatch(new Match(
            matches->getSize() + 1,
            "19 Jun 2018 15:00",
            stadiums->getByIndex(1),
            teams->getByName("A1"), // Russia
            teams->getByName("A3") // A3  
            ), matches, stadiums->getByIndex(1));

    addMatch(new Match(
            matches->getSize() + 1,
            "22 Jun 2018 21:00",
            stadiums->getByIndex(1),
            teams->getByName("E1"), // E1
            teams->getByName("E3") // E3  
            ), matches, stadiums->getByIndex(1));

    addMatch(new Match(
            matches->getSize() + 1,
            "26 Jun 2018 17:00",
            stadiums->getByIndex(1),
            teams->getByName("D4"), // D4
            teams->getByName("D1") // D1
            ), matches, stadiums->getByIndex(1));



    ////////////////////////////////////////////////
    // STADIUM 3
    ////////////////////////////////////////////////
    addMatch(new Match(
            matches->getSize() + 1,
            "15 Jun 2018 21:00",
            stadiums->getByIndex(2),
            teams->getByName("B1"), // B1
            teams->getByName("B2") // B2
            ), matches, stadiums->getByIndex(2));

    addMatch(new Match(
            matches->getSize() + 1,
            "18 Jun 2018 18:00",
            stadiums->getByIndex(2),
            teams->getByName("G1"), // G1
            teams->getByName("G2") // G2
            ), matches, stadiums->getByIndex(2));

    addMatch(new Match(
            matches->getSize() + 1,
            "23 Jun 2018 18:00",
            stadiums->getByIndex(2),
            teams->getByName("F1"), // F1
            teams->getByName("F3") // F3
            ), matches, stadiums->getByIndex(2));

    addMatch(new Match(
            matches->getSize() + 1,
            "26 Jun 2018 17:00",
            stadiums->getByIndex(2),
            teams->getByName("C2"), // C2
            teams->getByName("C3") // C3
            ), matches, stadiums->getByIndex(2));



    ////////////////////////////////////////////////
    // STADIUM 4
    ////////////////////////////////////////////////
    addMatch(new Match(
            matches->getSize() + 1,
            "15 Jun 2018 17:00",
            stadiums->getByIndex(3),
            teams->getByName("A3"), // A3
            teams->getByName("A4") // A4
            ), matches, stadiums->getByIndex(3));

    addMatch(new Match(
            matches->getSize() + 1,
            "21 Jun 2018 17:00",
            stadiums->getByIndex(3),
            teams->getByName("C1"), // C1
            teams->getByName("C3") // C3
            ), matches, stadiums->getByIndex(3));

    addMatch(new Match(
            matches->getSize() + 1,
            "24 Jun 2018 20:00",
            stadiums->getByIndex(3),
            teams->getByName("H4"), // H4
            teams->getByName("H2") // H2
            ), matches, stadiums->getByIndex(3));

    addMatch(new Match(
            matches->getSize() + 1,
            "27 Jun 2018 19:00",
            stadiums->getByIndex(3),
            teams->getByName("F2"), // F2
            teams->getByName("F3") // F3
            ), matches, stadiums->getByIndex(3));



    ////////////////////////////////////////////////
    // STADIUM 5
    ////////////////////////////////////////////////
    addMatch(new Match(
            matches->getSize() + 1,
            "16 Jun 2018 13:00",
            stadiums->getByIndex(4),
            teams->getByName("C1"), // C1
            teams->getByName("C2") // C2
            ), matches, stadiums->getByIndex(4));

    addMatch(new Match(
            matches->getSize() + 1,
            "20 Jun 2018 21:00",
            stadiums->getByIndex(4),
            teams->getByName("B4"), // B4
            teams->getByName("B2") // B2
            ), matches, stadiums->getByIndex(4));

    addMatch(new Match(
            matches->getSize() + 1,
            "24 Jun 2018 21:00",
            stadiums->getByIndex(4),
            teams->getByName("H1"), // H1
            teams->getByName("H3") // H3
            ), matches, stadiums->getByIndex(4));

    addMatch(new Match(
            matches->getSize() + 1,
            "27 Jun 2018 17:00",
            stadiums->getByIndex(4),
            teams->getByName("F4"), // F4
            teams->getByName("F1") // F1
            ), matches, stadiums->getByIndex(4));



    ////////////////////////////////////////////////
    // STADIUM 6
    ////////////////////////////////////////////////
    addMatch(new Match(
            matches->getSize() + 1,
            "18 Jun 2018 15:00",
            stadiums->getByIndex(5),
            teams->getByName("F3"), // F3
            teams->getByName("F4") // F4
            ), matches, stadiums->getByIndex(5));

    addMatch(new Match(
            matches->getSize() + 1,
            "21 Jun 2018 21:00",
            stadiums->getByIndex(5),
            teams->getByName("D1"), // D1
            teams->getByName("D3") // D3
            ), matches, stadiums->getByIndex(5));

    addMatch(new Match(
            matches->getSize() + 1,
            "24 Jun 2018 15:00",
            stadiums->getByIndex(5),
            teams->getByName("G4"), // G4
            teams->getByName("G2") // G2
            ), matches, stadiums->getByIndex(5));

    addMatch(new Match(
            matches->getSize() + 1,
            "27 Jun 2018 21:00",
            stadiums->getByIndex(5),
            teams->getByName("E2"), // E2
            teams->getByName("E3") // E3
            ), matches, stadiums->getByIndex(5));



    ////////////////////////////////////////////////
    // STADIUM 7
    ////////////////////////////////////////////////
    addMatch(new Match(
            matches->getSize() + 1,
            "17 Jun 2018 21:00",
            stadiums->getByIndex(6),
            teams->getByName("E1"), // E1
            teams->getByName("E2") // E2
            ), matches, stadiums->getByIndex(6));

    addMatch(new Match(
            matches->getSize() + 1,
            "10 Jun 2018 18:00",
            stadiums->getByIndex(6),
            teams->getByName("A4"), // A4
            teams->getByName("A2") // A2
            ), matches, stadiums->getByIndex(6));

    addMatch(new Match(
            matches->getSize() + 1,
            "23 Jun 2018 21:00",
            stadiums->getByIndex(6),
            teams->getByName("F4"), // F4
            teams->getByName("F2") // F2
            ), matches, stadiums->getByIndex(6));

    addMatch(new Match(
            matches->getSize() + 1,
            "26 Jun 2018 21:00",
            stadiums->getByIndex(6),
            teams->getByName("D2"), // D2
            teams->getByName("D3") // D3
            ), matches, stadiums->getByIndex(6));



    ////////////////////////////////////////////////
    // STADIUM 8
    ////////////////////////////////////////////////
    addMatch(new Match(
            matches->getSize() + 1,
            "17 Jun 2018 16:00",
            stadiums->getByIndex(7),
            teams->getByName("E3"), // E3
            teams->getByName("E4") // E4
            ), matches, stadiums->getByIndex(7));

    addMatch(new Match(
            matches->getSize() + 1,
            "20 Jun 2018 19:00",
            stadiums->getByIndex(7),
            teams->getByName("C4"), // C4
            teams->getByName("C2") // C2
            ), matches, stadiums->getByIndex(7));

    addMatch(new Match(
            matches->getSize() + 1,
            "25 Jun 2018 18:00",
            stadiums->getByIndex(7),
            teams->getByName("A4"), // A4
            teams->getByName("A1") // Russia A1
            ), matches, stadiums->getByIndex(7));

    addMatch(new Match(
            matches->getSize() + 1,
            "28 Jun 2018 18:00",
            stadiums->getByIndex(7),
            teams->getByName("H2"), // H2
            teams->getByName("H3") // H3
            ), matches, stadiums->getByIndex(7));



    ////////////////////////////////////////////////
    // STADIUM 9
    ////////////////////////////////////////////////
    addMatch(new Match(
            matches->getSize() + 1,
            "16 Jun 2018 19:00",
            stadiums->getByIndex(8),
            teams->getByName("C3"), // C3
            teams->getByName("C4") // C4
            ), matches, stadiums->getByIndex(8));

    addMatch(new Match(
            matches->getSize() + 1,
            "19 Jun 2018 18:00",
            stadiums->getByIndex(8),
            teams->getByName("H3"), // H3
            teams->getByName("H4") // H4
            ), matches, stadiums->getByIndex(8));

    addMatch(new Match(
            matches->getSize() + 1,
            "25 Jun 2018 21:00",
            stadiums->getByIndex(8),
            teams->getByName("B4"), // B4
            teams->getByName("B1") // B1
            ), matches, stadiums->getByIndex(8));

    addMatch(new Match(
            matches->getSize() + 1,
            "28 Jun 2018 21:00",
            stadiums->getByIndex(8),
            teams->getByName("G2"), // G2
            teams->getByName("G3") // G3
            ), matches, stadiums->getByIndex(8));



    ////////////////////////////////////////////////
    // STADIUM 10
    ////////////////////////////////////////////////
    addMatch(new Match(
            matches->getSize() + 1,
            "18 Jun 2018 21:00",
            stadiums->getByIndex(9),
            teams->getByName("G3"), // G3
            teams->getByName("G4") // G4
            ), matches, stadiums->getByIndex(9));

    addMatch(new Match(
            matches->getSize() + 1,
            "22 Jun 2018 18:00",
            stadiums->getByIndex(9),
            teams->getByName("D4"), // D4
            teams->getByName("D2") // D2
            ), matches, stadiums->getByIndex(9));

    addMatch(new Match(
            matches->getSize() + 1,
            "25 Jun 2018 17:00",
            stadiums->getByIndex(9),
            teams->getByName("A2"), // A2
            teams->getByName("A3") // A3
            ), matches, stadiums->getByIndex(9));

    addMatch(new Match(
            matches->getSize() + 1,
            "28 Jun 2018 17:00",
            stadiums->getByIndex(9),
            teams->getByName("H4"), // H4
            teams->getByName("H1") // H1
            ), matches, stadiums->getByIndex(9));



    ////////////////////////////////////////////////
    // STADIUM 11
    ////////////////////////////////////////////////
    addMatch(new Match(
            matches->getSize() + 1,
            "16 Jun 2018 16:00",
            stadiums->getByIndex(10),
            teams->getByName("D1"), // D1
            teams->getByName("D2") // D2
            ), matches, stadiums->getByIndex(10));

    addMatch(new Match(
            matches->getSize() + 1,
            "19 Jun 2018 15:00",
            stadiums->getByIndex(10),
            teams->getByName("H1"), // H1
            teams->getByName("H2") // H2
            ), matches, stadiums->getByIndex(10));

    addMatch(new Match(
            matches->getSize() + 1,
            "23 Jun 2018 15:00",
            stadiums->getByIndex(10),
            teams->getByName("B1"), // B1
            teams->getByName("B3") // B3
            ), matches, stadiums->getByIndex(10));

    addMatch(new Match(
            matches->getSize() + 1,
            "26 Jun 2018 17:00",
            stadiums->getByIndex(10),
            teams->getByName("C4"), // C4
            teams->getByName("C1") // C1
            ), matches, stadiums->getByIndex(10));



    ////////////////////////////////////////////////
    // STADIUM 12
    ////////////////////////////////////////////////
    addMatch(new Match(
            matches->getSize() + 1,
            "16 Jun 2018 21:00",
            stadiums->getByIndex(11),
            teams->getByName("D3"), // D3
            teams->getByName("D4") // D4
            ), matches, stadiums->getByIndex(11));

    addMatch(new Match(
            matches->getSize() + 1,
            "22 Jun 2018 20:00",
            stadiums->getByIndex(11),
            teams->getByName("E4"), // E4
            teams->getByName("E2") // E2
            ), matches, stadiums->getByIndex(11));

    addMatch(new Match(
            matches->getSize() + 1,
            "25 Jun 2018 20:00",
            stadiums->getByIndex(11),
            teams->getByName("B2"), // B2
            teams->getByName("B3") // B3
            ), matches, stadiums->getByIndex(11));

    addMatch(new Match(
            matches->getSize() + 1,
            "28 Jun 2018 20:00",
            stadiums->getByIndex(11),
            teams->getByName("G4"), // G4
            teams->getByName("G1") // G1
            ), matches, stadiums->getByIndex(11));

}
