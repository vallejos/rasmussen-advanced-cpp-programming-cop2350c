/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: StadiumsList.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: StadiumsList class
 */

#include <vector>
#include "StadiumsList.h"

using namespace std;

/**
 * Constructor
 */
StadiumsList::StadiumsList() {
}

/**
 * Constructor
 * @param {StadiumsList} orig
 */
StadiumsList::StadiumsList(const StadiumsList& orig) {
}

/**
 * Destructor
 */
StadiumsList::~StadiumsList() {
}

/**
 * Adds a stadium to the list
 * @param {Stadium *} stadium
 */
void StadiumsList::addStadium(Stadium * stadium) {
    stadiums.push_back(stadium);
}

/**
 * Returns the size of the list
 * @return {int}
 */
int StadiumsList::getSize() {
    return stadiums.size();
}

/**
 * Returns a stadium from the list given its position
 * @param {int} index
 * @return {Stadium *}
 */
Stadium * StadiumsList::getByIndex(int index) {
    if (index < 0 || index > stadiums.size() - 1) {
        throw "StadiumsList: Invalid index";
    }

    return stadiums[index];
}
