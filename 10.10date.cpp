#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setfill;
using std::setw;

class Date
{
private:
    int month;
    int day;
    int year;

    int checkDay(int) const;
public:
    Date(int = 1, int = 1, int = 1900);
    void print() const;
    ~Date();
};

Date::Date(int mn, int dy, int yr) {
    if (mn > 0 && mn <= 12) 
        month = mn;
    else {
        month = 1;
        cout << "Invalid month (" << mn << ") set to 1.\n";
    }

    year = yr;
    day = checkDay(dy);

    cout << "Date object constructor for date ";
    print();
    cout << endl;
}

void Date::print() const {
    cout << month << '/' << day << '/' << year << endl;
    cout << setfill('0') << setw(2) << month << '/' << setw(2) << day << '/' << setprecision(2) << year << endl;
}

Date::~Date() {
    cout << "Date destructor for date: ";
    print(); 
    cout << endl;
}

int Date::checkDay(int testDay) const {
    static const int daysPerMonth [13] = { 0,31,28,31,30,31,30,31,31, 30, 31, 30, 31 };

    if (testDay > 0 && testDay <= daysPerMonth[month])
        return testDay;

    if (month == 2 && testDay == 29 && (year % 400 == 0 || (year %4 == 0 && year % 100 != 0)))
        return testDay;

    cout << "Invalid day (" << testDay << ") set to 1.\n";
        return 1;
}

int main () {
    Date birth(7, 24, 1949);
    
}