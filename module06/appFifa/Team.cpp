/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 07/30/2017
 * FileName: Team.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Team class
 */

#include <string>
#include "Group.h"
#include "Team.h"

using namespace std;

/**
 * Constructor
 */
Team::Team() {
    name = "0";
    country = "";
    group = NULL;
}

/**
 * Constructor
 * @param {string} nameIn
 * @param {Group *} groupIn
 * @param {string} countryIn
 */
Team::Team(string nameIn, Group * groupIn, string countryIn) :
name(nameIn), group(groupIn), country(countryIn) {
}

/**
 * Constructor
 * @param orig
 */
Team::Team(const Team& orig) {
}

/**
 * Destructor
 */
Team::~Team() {
}

/**
 * Getter for name
 * @return {string}
 */
string Team::getName() {
    return name;
}

/**
 * Getter for country
 * @return {string}
 */
string Team::getCountry() {
    return country;
}

/**
 * Setter for country
 * @param {string} countryIn
 */
void Team::setCountry(string countryIn) {
    country = countryIn;
}

/**
 * Getter for group
 * @return {Group *}
 */
Group * Team::getGroup() {
    return group;
}

/**
 * Setter for group
 * @param {Group *} groupIn
 */
void Team::setGroup(Group * groupIn) {
    group = groupIn;
}
