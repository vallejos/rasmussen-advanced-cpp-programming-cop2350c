/**
 * Author: Leonardo Vallejos
 * Date: 07/23/2017
 * FileName: Person.cpp
 * Purpose:
 * Input:
 * Output:
 * Exceptions:
 */

#include <string>
#include "Person.h"

using namespace std;

Person::Person() {
}

Person::Person(int idIn, string firstNameIn, string lastNameIn, int ageIn, long phoneIn, string employerName, long employerPhone)
{    
    // add the personal info
    try {
        PersonalInfo *newInfo = new PersonalInfo(idIn, firstNameIn, lastNameIn, ageIn, phoneIn);

        info = newInfo;
    } catch (std::exception e) {
        throw "Could not add the new contact to the Address Book";
    }
    
    // add the employer
    try {
        Employer *newEmployer = new Employer();
        newEmployer->setName(employerName);
        newEmployer->setPhone(employerPhone);
        
        employer = newEmployer;
    } catch (std::exception e) {
        throw "Could not add the new contact to the Address Book";
    }
}

Person::Person(const Person& orig) {
}

Person::~Person() {
}

int Person::getId() const
{
    return info->getId();
}

string Person::getFirstName() const
{
    return info->getFirstName();
}

string Person::getLastName() const
{
    return info->getLastName();
}

int Person::getAge() const
{
    return info->getAge();
}

long Person::getPhone() const
{
    return info->getPhone();
}

void Person::setId(int idIn)
{
    info->setId(idIn);
};

void Person::setFirstName(std::string firstNameIn)
{
    info->setFirstName(firstNameIn);
};

void Person::setLastName(std::string lastNameIn)
{
    info->setLastName(lastNameIn);
};

void Person::setAge(int ageIn)
{
    info->setAge(ageIn);
};

void Person::setPhone(long phoneIn)
{
    info->setPhone(phoneIn);
};

int Person::getEmployerId() const
{
    return employer->getId();
}

string Person::getEmployerName() const
{
    return employer->getName();
}

long Person::getEmployerPhone() const
{
    return employer->getPhone();
}

void Person::setEmployer(Employer *employerIn)
{
    employer = employerIn;
};
