
#ifndef CAPTAIN_H
#define CAPTAIN_H

#include <string>
#include "Marine.h"

using namespace std;

class Captain: public Marine {
public:
    Captain(string nameIn);
    Captain(const Captain& orig);
    virtual ~Captain();
private:

};

#endif /* CAPTAIN_H */

