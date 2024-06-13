#include <iostream>
using std::cout;
using std::cin;
using std::endl;
//0 1 1 2 3 5 8 13

int fibonacci (int choice) {
    int seriesOutput;
    int currentInt = 0;
    int tempInt = 0;
    int nextInt = 1;

    for (int i = 0; i <= choice; i++) {
        seriesOutput = currentInt;
        tempInt = currentInt + nextInt;
        currentInt = nextInt;
        nextInt = tempInt;
    }

    return seriesOutput;
}

int main () {
    int choice;
    int seriesOutput;

    cout << "What number of the fibonacci series would you like to print?" << endl;
    cin >> choice;
    seriesOutput = fibonacci(choice);
    cout << "Number " << choice << " in the fibonacci series is " << seriesOutput << endl;

    return 0;
}