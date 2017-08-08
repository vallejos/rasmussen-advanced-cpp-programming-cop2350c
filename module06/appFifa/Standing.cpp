/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: Standing.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: Standing class
 */

#include "Standing.h"

/**
 * Constructor
 * @param {int} idIn
 * @param {Team *} teamIn
 */
Standing::Standing(int idIn, Team * teamIn) :
id(idIn), team(teamIn) {
    played = 0;
    won = 0;
    draw = 0;
    lost = 0;
    goalsFor = 0;
    goalsAgainst = 0;
    goalsDiff = 0;
    points = 0;
}

/**
 * Constructor
 * @param {Standing} orig
 */
Standing::Standing(const Standing& orig) {
}

/**
 * Destructor
 */
Standing::~Standing() {
}

/**
 * Getter for id
 * @return {int}
 */
int Standing::getId() {
    return id;
}

/**
 * Getter for team
 * @return {Team *}
 */
Team * Standing::getTeam() {
    return team;
}

/**
 * Getter for played
 * @return {int}
 */
int Standing::getPlayed() {
    return played;
}

/**
 * Getter for won
 * @return {int}
 */
int Standing::getWon() {
    return won;
}

/**
 * Getter for draw
 * @return {int}
 */
int Standing::getDraw() {
    return draw;
}

/**
 * Getter for lost
 * @return {int}
 */
int Standing::getLost() {
    return lost;
}

/**
 * Getter for goalsFor
 * @return {int}
 */
int Standing::getGoalsFor() {
    return goalsFor;
}

/**
 * Getter for goalsAgainst
 * @return {int}
 */
int Standing::getGoalsAgainst() {
    return goalsAgainst;
}

/**
 * Getter for goalsDiff
 * @return {int}
 */
int Standing::getGoalsDiff() {
    return goalsDiff;
}

/**
 * Getter for points
 * @return {int}
 */
int Standing::getPoints() {
    return points;
}

/**
 * Adds a won match and its points
 */
void Standing::addWon() {
    won++;
    points += 3;
    played++;
}

/**
 * Adds a draw match and its points
 */
void Standing::addDraw() {
    draw++;
    points++;
    played++;
}

/**
 * Adds a lost match
 */
void Standing::addLost() {
    lost++;
    played++;
}

/**
 * Adds positive goals
 * @param {int} goals
 */
void Standing::addGoalsFor(int goals) {
    goalsFor += goals;
    goalsDiff += goals;
}

/**
 * Adds negative goals
 * @param {int} goals
 */
void Standing::addGoalsAgainst(int goals) {
    goalsAgainst += goals;
    goalsDiff -= goals;
}
