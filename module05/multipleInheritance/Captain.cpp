
#include "Captain.h"
#include <iostream>

using namespace std;

Captain::Captain(string nameIn): Marine() {
    name = nameIn;
    cout << nameIn << " is a Captain" << endl;
}

Captain::Captain(const Captain& orig) {
}

Captain::~Captain() {
}

