/*
Wite a C++ program to create a class Swapper with two private integers a and b respectively. Provide
a function input() to accept the values, a function swapValues() to swap the values of a and b, and
a function display() to display the values before and after swapping.
*/

#include <iostream>
using namespace std;

class Swapper{
    private:
        int a;
        int b;
    public:
        void input(){
            cout << "Enter the value of a: ";
            cin >> this->a;
            cout << "Enter the value of b: ";
            cin >> this->b;
        }

        void swap(){
            int temp = a;
            a = b;
            b = temp;
        }

        void display(){
            cout << "a = " << a << ", b = " << b << endl;
        }
};

int main(){
    Swapper s;
    s.input();
    cout << "Values before swapping: ";
    s.display();
    s.swap();
    cout << "Values swapping: ";
    s.display();
}