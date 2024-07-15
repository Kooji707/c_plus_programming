#include <iostream>
#include <string>
using namespace std;

#include "baseClass.h"

Vehicle::Vehicle() {
    wheel = "circle";
    steeringWheel = "circle";
    lights = 0;
}

void Vehicle::wheelShape() {
    cout << wheel << endl;
}


