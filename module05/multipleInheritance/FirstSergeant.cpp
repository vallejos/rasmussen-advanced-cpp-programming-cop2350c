
#include "FirstSergeant.h"
#include <iostream>

using namespace std;

FirstSergeant::FirstSergeant(string nameIn): Marine() {
    name = nameIn;
    cout << nameIn << " is a First Sergeant" << endl;
}

FirstSergeant::FirstSergeant(const FirstSergeant& orig) {
}

FirstSergeant::~FirstSergeant() {
}

