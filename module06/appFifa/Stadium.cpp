/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Stadium.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Stadium class
 */

#include <string>
#include <vector>
#include "Match.h"
#include "Stadium.h"
#include "MatchesList.h"

using namespace std;

/**
 * Constructor
 * @param {int} idIn
 * @param {string} nameIn
 * @param {string} locationIn
 * @param {int} capacityIn
 */
Stadium::Stadium(int idIn, string nameIn, string locationIn, int capacityIn) :
id(idIn), name(nameIn), location(locationIn), capacity(capacityIn) {
    matches = new MatchesList();
}

/**
 * Constructor
 * @param {Stadium} orig
 */
Stadium::Stadium(const Stadium& orig) {
}

/**
 * Destructor
 */
Stadium::~Stadium() {
}

/**
 * Getter for id
 * @return {int}
 */
int Stadium::getId() {
    return id;
}

/**
 * Getter for name
 * @return {string}
 */
string Stadium::getName() {
    return name;
}

/**
 * Getter for location
 * @return {string}
 */
string Stadium::getLocation() {
    return location;
}

/**
 * Getter for capacity
 * @return {int}
 */
int Stadium::getCapacity() {
    return capacity;
}

/**
 * Adds a match to the matches list
 * @param {Match *} match
 */
void Stadium::addMatch(Match * match) {
    matches->addMatch(match);
}

/**
 * Returns list of matches
 * @return {MatchesList *}
 */
MatchesList * Stadium::getMatches() {
    return matches;
}
