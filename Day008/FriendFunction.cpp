#include <iostream>
using namespace std;

// Simple class
class Box {
private:
    double width;

public:
    // Constructor using this->
    Box(double w) {
        this->width = w;
    }

    // Declare a friend function
    friend void printWidth(Box b);
};

// Friend function definition
void printWidth(Box b) {
    // Can access private member 'width' directly
    cout << "Width of the box is: " << b.width << endl;
}

int main() {
    Box b1(10.5); // Create object with width 10.5
    printWidth(b1); // Friend function can access private member

    return 0;
}