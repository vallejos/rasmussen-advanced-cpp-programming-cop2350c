
#include "Private.h"
#include <iostream>

using namespace std;

Private::Private(string nameIn): Marine() {
    name = nameIn;
    cout << nameIn << " is a Private" << endl;
}

Private::Private(const Private& orig) {
}

Private::~Private() {
}

