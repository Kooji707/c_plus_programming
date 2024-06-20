#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setfill;
using std::setw;

class Time {
public: 
    Time (int = 0, int = 0, int = 0);

    void setTime (int, int, int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    int getHour();
    int getMinute();
    int getSecond();

    void printUniversal();
    void printStandard();
private:
    int hour;
    int minute;
    int second;
};

Time::Time (int hr, int min, int sec) {
    setTime(hr, min, sec);
}

void Time::setTime(int h, int m, int s) {
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h) {
    hour = ( h >= 0 && h < 24 ) ? : 0;
}

void Time::setMinute(int m) {
    minute = ( m >= 0 && m < 60 ) ? : 0;
}

void Time::setSecond(int s) {
    second = ( s >= 0 && s < 60 ) ? : 0;
}

int Time::getHour() {
    return hour;
}

int Time::getMinute() {
    return minute;
}

int Time::getSecond() {
    return second;
}

void Time::printUniversal() {
    cout << setfill('0') << setw(2) << getHour () << ":" << setw(2) << getSecond() << (hour < 12 ? " AM" : " PM");
}

void Time::printStandard() {
    cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12 ) << ":" << setfill ('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond () << (hour < 12 ? " AM" : " PM");
}

int main() {
    Time t1;
    Time t2(2);
    Time t3(21, 34);
    Time t4(12, 25, 42);
    Time t5(27, 74, 99);

    t1.printUniversal();
    cout << "\n";
    t1.printStandard();

    cout << "\n\n";   

    t2.printUniversal();
    cout << "\n";
    t2.printStandard();

    cout << "\n\n";   

    t3.printUniversal();
    cout << "\n";
    t3.printStandard();

    cout << "\n\n";   

    t4.printUniversal();
    cout << "\n";
    t4.printStandard();

    cout << "\n\n";   

    t5.printUniversal();
    cout << "\n";
    t5.printStandard();

    cout << endl;

    return 0;
}