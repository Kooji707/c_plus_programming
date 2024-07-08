#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Addition.h"

int main () {
    Addition instance_1;
    
    cout << "The value of the first instance" << endl;

    cin >> instance_1;

    cout << "The value entered was: ";

    cout << instance_1 << endl << endl;
    
    Addition instance_2;
    
    cout << "The value of the second instance" << endl;

    cin >> instance_2;

    cout << "The value entered was: ";

    cout << instance_2 << endl << endl;

    cout << "The value of instance_1 + instance_2 is: " << (instance_1 + instance_2) << endl;
}