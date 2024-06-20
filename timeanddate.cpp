#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class DateAndTime {
private:
    int hour;
    int minute;
    int second;

    int month;
    int day;
    int year;
public:
    Time (int = 0, int = 0, int = 0);
    void setTime (int, int, int);
    int getHour();
    int &badSetHour(int); //dangerous reference return

    Date(int = 1, int = 1, int = 2000);
    void print();
};

DateAndTime::Time (int hr, int min, int sec) {
    setTime(hr, min, sec);
}

void Time::setTime (int h, int m, int s) {
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60) ? m : 0;
    second = (s >= 0 && s < 60) ? s : 0;
}

