
#ifndef SOLDIER_H
#define SOLDIER_H

#include <string>

using namespace std;

class Soldier {
public:
    Soldier();
    Soldier(const Soldier& orig);
    virtual ~Soldier();

protected:
    string name;

};

#endif /* SOLDIER_H */

