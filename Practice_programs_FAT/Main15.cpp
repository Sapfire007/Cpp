/*
Implement a Rectangle class in C++ that supports constructors for initializing length and width,
a copy constructor, and methods to calculate and display the area and perimeter. Allow objects
of this class to be compared based on area, and implement operator overloading for "==" to
check if two Rectangle objects have the same area.

Sample Input:
Rectangle 1: Length = 5, Width = 4
Rectangle 2: Length = 10, Width = 2
Sample Output:
Rectangle 1: Length = 5, Width = 4
Rectangle 2: Length = 10, Width = 2
Rectangles have the same area: Yes
*/

#include <iostream>
using namespace std;

class Rectangle {
    private:
        float length, width;

    public:
        Rectangle(float l, float w) {
            length = l;
            width = w;
        }

        // Copy constructor
        Rectangle(const Rectangle &r) {
            length = r.length;
            width = r.width;
        }

        float area() const {
            return length * width;
        }

        float perimeter() const {
            return 2 * (length + width);
        }

        void display() const {
            cout << "Length = " << length << ", Width = " << width << endl;
        }

        // Operator overloading for == (compare areas)
        bool operator==(const Rectangle &r) const {
            return this->area() == r.area();
        }
};

int main() {
    float l1, w1, l2, w2;

    cout << "Enter Rectangle 1 (length width): ";
    cin >> l1 >> w1;

    cout << "Enter Rectangle 2 (length width): ";
    cin >> l2 >> w2;

    Rectangle R1(l1, w1);
    Rectangle R2(l2, w2);

    Rectangle copyOfR1 = R1;  // Copy constructor example (not mandatory to print)

    cout << "\nRectangle 1: ";
    R1.display();

    cout << "Rectangle 2: ";
    R2.display();

    cout << "\nRectangles have the same area: ";
    if (R1 == R2)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}