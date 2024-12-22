//write a program that defines a class rectangle withe the following:Two private data members:length and width. A default constructor that initializes length and width to 1. A member function area() to calculate and return the area of the rectangle. A main function to create an object of the rectange class, call the area() function, and print the result.
#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;  

public:
    Rectangle() : length(1), width(1) {}
    double area() {
        return length * width;
    }
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }
};

int main() {
    Rectangle rect;
    cout << "Area of the rectangle: " << rect.area() << endl;
    rect.setDimensions(5, 3);
    cout << "New area of the rectangle: " << rect.area() << endl;

    return 0;
}