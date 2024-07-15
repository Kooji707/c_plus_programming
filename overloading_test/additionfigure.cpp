#include <iostream>
using namespace std;

#include <math.h>
using std::ostream;
using std::istream;

class Addition {
friend Addition &operator + ( Addition& instance_1, Addition& instance_2 );
private:
    int value;

public: 
    Addition(){};
    Addition(int value){};
    void printValue() {
        cout << value;
    }
    int getValue(){
        return value;
    }
};

    Addition &operator + ( Addition& instance_1, Addition& instance_2 ) {
    int tmp;
    tmp = instance_1.getValue() + instance_2.getValue();
    cout << tmp;
}

int main () {
    Addition instance_1(3);

    cout << "The value of instance_1 is: ";

    cout << instance_1.getValue() << endl << endl;
    
    Addition instance_2(4);

    cout << "The value of instance_2 is: ";

    cout << instance_2.getValue() << endl << endl;

    instance_1 + instance_2;

    //cout << "The value of instance_1 + instance_2 is: " << instance_temp.getValue() << endl;
}