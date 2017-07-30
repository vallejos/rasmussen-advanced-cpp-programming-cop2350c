/**
 * Author: Leonardo Vallejos
 * Date: 07/23/2017
 * FileName: Person.h
 * Purpose:
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "SalesEmployer.h"
#include "ServiceEmployer.h"
#include "ManufacturingEmployer.h"
#include "PersonalInfo.h"

class Person {
public:
    explicit Person();
    explicit Person(int idIn, std::string firstNameIn, std::string lastNameIn, int ageIn, long phoneIn, int employerType, std::string employerName, long employerPhone);
    explicit Person(const Person& orig);
    virtual ~Person();

    int getId() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    int getAge() const;
    long getPhone() const;

    int getEmployerId() const;
    std::string getEmployerName() const;
    long getEmployerPhone() const;

    void setId(int idIn);
    void setFirstName(std::string firstNameIn);
    void setLastName(std::string lastNameIn);
    void setAge(int ageIn);
    void setPhone(long phoneIn);

    void setEmployer(Employer *employer);

private:
    PersonalInfo *info;
    Employer *employer;
};

#endif /* PERSON_H */

