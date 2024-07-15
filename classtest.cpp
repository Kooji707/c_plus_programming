#include <iostream>

using namespace std;

class Addition {
public: 
    Addition (int val) {
        setValue(val);
    }

    void setValue(int val) {
        value = val;
    }

    int getValue () {
        return value;
    }
private:
    int value;
};

int main () {
    Addition obj1(1);
    cout << obj1.getValue() << endl;

    Addition obj2(5);
    cout << obj2.getValue() << endl;


    return 0;
}