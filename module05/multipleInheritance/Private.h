
#ifndef PRIVATE_H
#define PRIVATE_H

#include <string>
#include "Marine.h"

using namespace std;

class Private: public Marine {
public:
    Private(string nameIn);
    Private(const Private& orig);
    virtual ~Private();
private:

};

#endif /* PRIVATE_H */

