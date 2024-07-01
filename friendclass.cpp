#include <iostream>
using namespace std;

class MyClass {
    friend void test(MyClass);
    private:
    int member1;
};

void test(MyClass obj) {
    obj.member1 = 5;
    cout << obj.member1;
}

int main () {
    MyClass d;
    test(d);

    return 0;
}