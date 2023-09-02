//Vincent Do, September 2, 2023
//Addition and Subtraction program
#include <iostream>
using namespace std;
int main()
{
    string choice;
    int integer1, integer2, sum, diff;
    cout << "Would you like to add or subtract 2 integers? Type add or sub\n";
    cin >> choice;

    if(choice == "sub") {
    //Subtraction program
        cout << "This program subtracts 2 integers\n";
        cout << "Enter first integer\n";
        cin >> integer1;
        cout << "Enter second integer\n";
        cin >> integer2;
        diff = integer1 - integer2;
        cout << "Difference is " << diff << endl;
    }
    if(choice == "add") {
    //Addition program
        cout << "This program adds 2 integers\n";
        //cout << "Enter first integer\n";
        cin >> integer1;
        cout << "Enter second integer\n";
        cin >> integer2;
        sum = integer1 + integer2;
        cout << "Sum is " << sum << endl;
    }
    return 0;
}