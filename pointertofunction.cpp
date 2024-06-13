#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void function0( int );
void function1( int );
void function2( int );

int main () {
    void (*f[3])(int) = {function0, function1, function2};

    int choice;

    cout << "Enter a number between 0 and 2. \n0 is addition, 1 is subtraction, and 2 is multiplication.\n3 to end: ";
    cin >> choice;

    while ((choice >= 0) && (choice <3)) {
        (*f[choice])(choice);

        cout << "Enter a number between 0 and 2. 3 to end: ";
        cin >> choice;
    }

    cout << "Program execution completed." << endl;
    return 0;
}

void function0 (int a) {
    int addnum1;
    int addnum2;
    
    cout << "You entered " << a << " so function0 was called\n\n";
    cout << "Enter 2 numbers you would like to add.\n";
    cin >> addnum1 >> addnum2;
    cout << "The answer is " << (addnum1 + addnum2) << endl;

}

void function1 (int b) {
    int subnum1;
    int subnum2;

    cout << "You entered " << b << " so function1 was called\n\n";
    cout << "Enter 2 numbers you would like to subtract.\n";
    cin >> subnum1 >> subnum2;
    cout << "The answer is " << (subnum1 - subnum2) << endl;
}

void function2 (int c) {
    int multinum1;
    int multinum2;

    cout << "You entered " << c << " so function2 was called\n\n";
    cout << "Enter 2 numbers you would like to multiply.\n";
    cin >> multinum1 >> multinum2;
    cout << "The answer is " << (multinum1 * multinum2) << endl;
}
