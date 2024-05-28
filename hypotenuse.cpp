// Vincent Do, May 28, 2024
#include <iostream>
#include <cmath>

using namespace std;
int main()
{ 
    double leg1 = 0;
    double leg2 = 0;
    cout << "Welcome to the hypotenuse calculator!\n\n" << "Input the length of the first leg: ";
    cin >> leg1;
    cout << "Input the length of the second leg: ";
    cin >> leg2;
    cout << endl;

    float hypotenuse = sqrt((leg1*leg1)+(leg2*leg2));

    cout << "The length of the hypotenuse is " << hypotenuse;
    
    return 0;
}