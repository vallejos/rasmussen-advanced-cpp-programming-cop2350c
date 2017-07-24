/**
 * Author: Leonardo Vallejos
 * Date: 07/23/2017
 * FileName: Employer.h
 * Purpose:
 * Input:
 * Output:
 * Exceptions:
 */

#ifndef EMPLOYER_H
#define EMPLOYER_H

#include <string>

class Employer {
public:
    explicit Employer();
    explicit Employer(const Employer& orig);
    virtual ~Employer();

    int getId() const;
    std::string getName() const;
    long getPhone() const;

    void setName(std::string nameIn);
    void setPhone(long phoneIn);

private:
    int id;
    std::string name;
    long phone;
};

#endif /* EMPLOYER_H */

