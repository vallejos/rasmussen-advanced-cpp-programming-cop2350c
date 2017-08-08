/**
 * Author: Leonardo Vallejos <leonardofabian.hernandezvallej@smail.rasmussen.edu>
 * Date: 08/05/2017
 * FileName: StadiumsList.h
 * Purpose: FIFA 2018 World Cup App.
 *          Course project for COP2350C Advanced C++ Programming course at Rasmussen College.
 * Description: StadiumsList class
 */

#ifndef STADIUMSLIST_H
#define STADIUMSLIST_H

#include <vector>
#include "Stadium.h"

using namespace std;

class StadiumsList {
public:
    StadiumsList();
    StadiumsList(const StadiumsList& orig);
    virtual ~StadiumsList();

    void addStadium(Stadium * stadium);
    int getSize();
    Stadium * getByIndex(int index);

private:
    vector<Stadium *> stadiums;

};

#endif /* STADIUMSLIST_H */

