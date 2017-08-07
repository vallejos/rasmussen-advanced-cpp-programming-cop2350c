
#ifndef FIRSTSERGEANT_H
#define FIRSTSERGEANT_H

#include <string>
#include "Marine.h"

using namespace std;

class FirstSergeant: public Marine {
public:
    FirstSergeant(string nameIn);
    FirstSergeant(const FirstSergeant& orig);
    virtual ~FirstSergeant();
private:

};

#endif /* FIRSTSERGEANT_H */

