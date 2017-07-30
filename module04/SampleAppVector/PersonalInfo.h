/**
 * Author: Leonardo Vallejos
 * Date: 07/23/2017
 * FileName: PersonalInfo.h
 * Purpose:
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef PERSONALINFO_H
#define PERSONALINFO_H

#include <string>

class PersonalInfo {
public:
    explicit PersonalInfo();
    explicit PersonalInfo(int idIn, std::string firstNameIn, std::string lastNameIn, int ageIn, long phoneIn);
    explicit PersonalInfo(const PersonalInfo& orig);
    virtual ~PersonalInfo();

    int getId() const;
    std::string getFirstName() const;
    std::string getLastName() const;
    int getAge() const;
    long getPhone() const;

    void setId(int idIn);
    void setFirstName(std::string firstNameIn);
    void setLastName(std::string lastNameIn);
    void setAge(int ageIn);
    void setPhone(long phoneIn);

private:
    int id;
    std::string firstName;
    std::string lastName;
    int age;
    long phone;
};

#endif /* PERSONALINFO_H */

