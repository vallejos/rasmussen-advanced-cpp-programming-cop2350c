
#include <cstdlib>
#include <string>
#include <iostream>
#include "Sergeant.h"
#include "Captain.h"
#include "FirstSergeant.h"
#include "Private.h"
#include "SergeantMajor.h"

using namespace std;

/**
 * main function to demo multiple inheritance
 */
int main(int argc, char** argv) {
    Captain cap1("John");
    Sergeant serg1("Ann");
    Private priv1("Tom");
    FirstSergeant first1("Rupert");
    SergeantMajor major1("Rambo");

    
    
    return 0;
}

