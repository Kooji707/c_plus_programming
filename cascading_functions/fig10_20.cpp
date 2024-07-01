#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

int main() {
    Time t;

    t.setHour(18);
    t.setMinute(30);
    t.setSecond(22);

    cout << "Universal time: ";
    t.printUniversal();

    cout << "Standard time: ";
    t.printStandard();

    cout << "\n\nNew standard time: ";

    t.setTime(20,20,20);
    t.printStandard();
    cout << endl;
    return 0;
}