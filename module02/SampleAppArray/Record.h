/**
 * Author: Leonardo Vallejos
 * Date: 07/16/2017
 * FileName: Record.h
 * Purpose:
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef RECORD_H
#define RECORD_H

#include <string>

class Record {
public:
    explicit Record();
    explicit Record(int idIn, std::string firstNameIn, std::string lastNameIn, int ageIn, long phoneIn);
    explicit Record(const Record& orig);
    virtual ~Record();

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

#endif /* RECORD_H */

