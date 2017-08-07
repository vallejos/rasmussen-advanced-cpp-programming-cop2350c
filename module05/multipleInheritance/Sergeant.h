
#ifndef SERGEANT_H
#define SERGEANT_H

#include <string>
#include "Marine.h"

using namespace std;

class Sergeant: public Marine {
public:
    Sergeant(string nameIn);
    Sergeant(const Sergeant& orig);
    virtual ~Sergeant();
private:

};

#endif /* SERGEANT_H */

