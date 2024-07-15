#include <iostream>
#include <string>
using namespace std;

#include "bicycle.h"

Bicycle::Bicycle () {
    wheelCounter();
    cout << "This vehicle has " << wheelCount << " wheels!" << endl;
}

void Bicycle::wheelCounter () {
    wheelCount = 2;
}

void Bicycle::printVehicleType () {
    cout << "I am a bicycle";
}