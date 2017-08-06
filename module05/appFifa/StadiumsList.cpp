/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: StadiumsList.cpp
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Input:
 * Output:
 * Exceptions:
 */

#include <vector>
#include "StadiumsList.h"

using namespace std;

StadiumsList::StadiumsList()
{
}

StadiumsList::StadiumsList(const StadiumsList& orig)
{
}

StadiumsList::~StadiumsList()
{
}

void StadiumsList::addStadium(Stadium * stadium)
{
    stadiums.push_back(stadium);
}

int StadiumsList::getSize()
{
    return stadiums.size();
}

Stadium * StadiumsList::getByIndex(int index)
{
    if (index > stadiums.size() - 1) {
        throw "Invalid index";
    }

    return stadiums[index];
}
