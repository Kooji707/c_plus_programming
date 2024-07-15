#include <iostream>
#include <string>
using namespace std;

//#include "baseClass.h"
#include "bicycle.h"

int main () {
    Vehicle car;
    cout << "The shape of the vehicle's wheel(s) is/are ";
    car.wheelShape();

    Bicycle bike;

    return 0;
}