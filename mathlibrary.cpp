// Vincent Do, May 28, 2024
#include <iostream>
#include <cmath>

using namespace std;
int main()
{ 
    float testNumber = ceil(0.5);
    if (testNumber == 1.0) {
        cout << "ceiling function works as intended.";
    } else {
        cout << "ceiling function does NOT work as intended.";
    }
    
    return 0;
}