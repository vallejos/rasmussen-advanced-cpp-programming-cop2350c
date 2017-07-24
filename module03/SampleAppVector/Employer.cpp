/**
 * Author: Leonardo Vallejos
 * Date: 07/23/2017
 * FileName: Employer.cpp
 * Purpose:
 * Input:
 * Output:
 * Exceptions:
 */

#include <string>
#include "Employer.h"

using namespace std;

Employer::Employer() {
}

Employer::Employer(const Employer& orig) {
}

Employer::~Employer() {
}

int Employer::getId() const
{
    return id;
}

string Employer::getName() const
{
    return name;
}

long Employer::getPhone() const
{
    return phone;
}

void Employer::setName(std::string nameIn)
{
    name = nameIn;
};

void Employer::setPhone(long phoneIn)
{
    phone = phoneIn;
};

