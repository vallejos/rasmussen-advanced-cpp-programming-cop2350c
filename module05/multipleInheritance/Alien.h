
#ifndef ALIEN_H
#define ALIEN_H

#include <string>

using namespace std;

class Alien {
public:
    Alien();
    Alien(const Alien& orig);
    virtual ~Alien();

protected:
    string race;

};

#endif /* ALIEN_H */

