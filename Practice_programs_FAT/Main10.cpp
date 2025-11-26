/*
Write a C++ program to define a class Circle with a private data member radius, a default constructor
(radius=1), a parameterized constructor to accept radius value from the user, a member function
area() to return the area of the circle. Demonstrate both constructors in the main().
*/


#include <iostream>
using namespace std;

class Circle{
    private:
        float radius;
    public:
        Circle(){
            this->radius = 1;
        }
        Circle(float radius){
            this->radius = radius;
        }

        float area(){
            const float pi = 3.14;
            return pi*(radius*radius);
        }
};

int main(){
    Circle cDefault; // Demonstrating default constructor
    cout << "Area of default circle: " << cDefault.area() << endl;

    float r;
    cout << "Enter radius: ";
    cin >> r;

    Circle c1(r); // parameterized constructor
    cout << "Area of your circle: " << c1.area() << endl;
    
    return 0;
}