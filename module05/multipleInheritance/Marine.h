
#ifndef MARINE_H
#define MARINE_H

#include "Soldier.h"

class Marine : public Soldier {
public:
    Marine();
    Marine(const Marine& orig);
    virtual ~Marine();
private:

};

#endif /* MARINE_H */

