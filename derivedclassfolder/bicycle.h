#ifndef BICYCLE
#define BICYCLE

#include "baseClass.h"

class Bicycle : public Vehicle {
private:
    int wheelCount;
public:
    Bicycle();
    void wheelCounter();
    void printVehicleType();
};

#endif