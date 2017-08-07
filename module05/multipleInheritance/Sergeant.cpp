
#include "Sergeant.h"
#include <iostream>

using namespace std;

Sergeant::Sergeant(string nameIn): Marine() {
    name = nameIn;
    cout << nameIn << " is a Sergeant" << endl;
}

Sergeant::Sergeant(const Sergeant& orig) {
}

Sergeant::~Sergeant() {
}

