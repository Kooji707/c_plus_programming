#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class Rectangle {
private:
    float length = 1.0;
    float width = 1.0;
public:
    void rectPerimeter();
    void rectArea();
    void getRectangleSideValues();
    void setRectangleSideValues(float l, float w);
    ~Rectangle();
};

void Rectangle::setRectangleSideValues ( float a, float b) {
    cout << "Enter length of rectangle (Value must be between 0.0 and 20.0)" << endl;
    cin >> a;
    length = ( a >= 0.0 && a <= 20.0 ) ? a : 1;
    cout << "Enter width of rectangle (Value must be between 0.0 and 20.0)" << endl;
    cin >> b;
    width = ( b >= 0.0 && b <= 20.0 ) ? b : 1;
    
}

void Rectangle::getRectangleSideValues() {
    cout << "Length: " << length << "\tWidth: " << width << endl;
}

void Rectangle::rectPerimeter() {
    cout << "The perimeter of the rectangle is: " << ((length * 2) + (width * 2)) << endl;
}

void Rectangle::rectArea() {
    cout << "The area of the rectangle is: " << (length * width) << endl;
}

Rectangle::~Rectangle() {
    cout << "This is execution of the destructor." << endl;
}

int main () {
    Rectangle s;
    s.setRectangleSideValues(3.4, 5.6);
    s.rectArea();
    s.rectPerimeter();
    s.getRectangleSideValues();

    return 0;
}