/**
 * Author: Leonardo Vallejos
 * Date: 07/23/2017
 * FileName: PersonalInfo.cpp
 * Purpose:
 * Input:
 * Output:
 * Exceptions:
 */

#include <string>
#include "PersonalInfo.h"

using namespace std;

PersonalInfo::PersonalInfo() {
}

PersonalInfo::PersonalInfo(int idIn, string firstNameIn, string lastNameIn, int ageIn, long phoneIn):
id(idIn), firstName(firstNameIn), lastName(lastNameIn), age(ageIn), phone(phoneIn)
{
}

PersonalInfo::PersonalInfo(const PersonalInfo& orig) {
}

PersonalInfo::~PersonalInfo() {
}

int PersonalInfo::getId() const
{
    return id;
}

string PersonalInfo::getFirstName() const
{
    return firstName;
}

string PersonalInfo::getLastName() const
{
    return lastName;
}

int PersonalInfo::getAge() const
{
    return age;
}

long PersonalInfo::getPhone() const
{
    return phone;
}

void PersonalInfo::setId(int idIn)
{
    id = idIn;
};

void PersonalInfo::setFirstName(std::string firstNameIn)
{
    firstName = firstNameIn;
};

void PersonalInfo::setLastName(std::string lastNameIn)
{
    lastName = lastNameIn;
};

void PersonalInfo::setAge(int ageIn)
{
    age = ageIn;
};

void PersonalInfo::setPhone(long phoneIn)
{
    phone = phoneIn;
};