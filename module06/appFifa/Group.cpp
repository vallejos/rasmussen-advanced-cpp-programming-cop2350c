/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Group.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Group class
 */

#include <string>
#include <vector>
#include "Group.h"

using namespace std;

/**
 * Constructor
 * @param {string} nameIn
 */
Group::Group(string nameIn) :
name(nameIn) {
    teams = new TeamsList();
    standings = new StandingsList();
}

/**
 * Constructor
 * @param {Group} orig
 */
Group::Group(const Group& orig) {
}

/**
 * Destructor
 */
Group::~Group() {
}

/**
 * Gets the name
 * @return {string}
 */
string Group::getName() {
    return name;
}

/**
 * Adds a team toe the teams list, and the standings list
 * @param {Team *} team
 */
void Group::addTeam(Team *team) {
    teams->addTeam(team);
    standings->addStanding(new Standing(standings->getSize() + 1, team));
}

/**
 * Gets the list of teams
 * @return {TeamsList *}
 */
TeamsList * Group::getTeams() {
    return teams;
}

/**
 * Returns a Team by its position in the standings list
 * @param {int} position
 * @return {Team *}
 */
Team * Group::getTeamByPosition(int position) {
    if (position < 1 || position > standings->getSize()) {
        throw "Invalid position";
    }

    return standings->getByIndex(position - 1)->getTeam();
}

/**
 * Returns standings list
 * @return {StandingsList *}
 */
StandingsList * Group::getStandings() {
    return standings;
}

/**
 * Adds a standing to the standings list
 * @param {Standing *} standing
 */
void Group::addStanding(Standing * standing) {
    standings->addStanding(standing);
}

/**
 * Sets the complete teams list
 * @param {TeamsList *} teamsIn
 */
void Group::setTeams(TeamsList * teamsIn) {
    teams = teamsIn;
}

/**
 * Sets the complete standings list
 * @param {StandingsList *} standingsIn
 */
void Group::setStandings(StandingsList * standingsIn) {
    standings = standingsIn;
}