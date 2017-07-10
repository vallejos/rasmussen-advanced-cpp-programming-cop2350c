/**
 * Author:
 * Date:
 * FileName:
 * Purpose:
 * Input:
 * Output:
 * Exceptions:
 */

#include "Record.h"

using namespace std;

Record::Record()
{
}

Record::Record(int idIn, string firstNameIn, string lastNameIn, int ageIn, long phoneIn):
id(idIn), firstName(firstNameIn), lastName(lastNameIn), age(ageIn), phone(phoneIn)
{
}

Record::Record(const Record& orig)
{
}

Record::~Record()
{
}

int Record::getId() const
{
    return id;
}

string Record::getFirstName() const
{
    return firstName;
}

string Record::getLastName() const
{
    return lastName;
}

int Record::getAge() const
{
    return age;
}

long Record::getPhone() const
{
    return phone;
}

void Record::setId(int idIn)
{
    id = idIn;
};

void Record::setFirstName(std::string firstNameIn)
{
    firstName = firstNameIn;
};

void Record::setLastName(std::string lastNameIn)
{
    lastName = lastNameIn;
};

void Record::setAge(int ageIn)
{
    age = ageIn;
};

void Record::setPhone(long phoneIn)
{
    phone = phoneIn;
};
