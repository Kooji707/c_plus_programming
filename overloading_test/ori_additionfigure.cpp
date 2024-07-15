#include <iostream>
using namespace std;

#include <iostream>
#include <math.h>
using std::ostream;
using std::istream;

class Addition {
    /*
    friend ostream &operator<<( ostream &, const Addition & );
    friend istream &operator>>( istream &, Addition & );
    */
    //friend Addition &operator+( const Addition& instance_1, Addition& instance_2 );
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
/*
ostream &operator<<( ostream &output, const Addition &addition ) {
    output << addition.value;
    return output; 
}

istream &operator>>( istream &input, Addition &addition ) {
    return input;
}
*/

Addition &operator+( const Addition& instance_1, Addition& instance_2 ) {
    Addition instance_temp;
    instance_temp.setValue() = instance_1.setValue() + instance_2.setValue(); 
    return instance_temp;
}

int main () {
    Addition instance_1(1);
    
    cout << "The value of the first instance" << endl;

    //cin >> instance_1;

    cout << "The value entered was: ";

    cout << instance_1.getValue() << endl << endl;
    
    Addition instance_2(1);
    
    cout << "The value of the second instance" << endl;

    //cin >> instance_2;

    cout << "The value entered was: ";

    cout << instance_2.getValue() << endl << endl;

    cout << "The value of instance_1 + instance_2 is: " << (instance_1 + instance_2).getValue() << endl;
}