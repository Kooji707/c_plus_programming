#include <iostream>
using std::cout;
using std::cin;
using std::endl;

template <class T>
T addition(T firstNum, T secondNum) {
    T thirdNum = firstNum + secondNum;
    return thirdNum;
}

int main () {
    int firstInt, secondInt;
    cout << "Input 2 integers that you want to add together." << endl;
    cin >> firstInt >> secondInt;
    cout << "These numbers added together equals " << addition(firstInt, secondInt) << endl << endl;

    double firstDouble, secondDouble;
    cout << "Input 2 doubles that you want to add together." << endl;
    cin >> firstDouble >> secondDouble;
    cout << "These numbers added together equals " << addition(firstDouble, secondDouble) <<endl;
}