/*
Write a C++ program to create a class Calculator that uses method overloading for compute() to
perform square of a number (1 parameter), sum of two numbers (2 parameters), and average of three
numbers (3 parameters)
*/

#include <iostream>
using namespace std;

class Calculator{
    public:
        int compute(int a){
            return a*a;
        }
        int compute(int a, int b){
            return a + b;
        }
        int compute(int a, int b, int c){
            return (a+b+c)/3;
        }
};

int main(){
    Calculator c1;
    int a;
    int b;
    int c;

    cout << "Enter the number whose square is to be calculated: ";
    cin >> a;
    cout << "Square of " << a << ": " << c1.compute(a) << endl;

    cout << "For calculating the sum of 2 numbers (a+b), enter the value of a: ";
    cin >> a;
    cout << "For calculating the sum of 2 numbers (a+b), enter the value of b: ";
    cin >> b;
    cout << "Sum of " << a << " + " << b << " = " << c1.compute(a, b) << endl;

    cout << "For calculating the average of 3 numbers (a, b, c), enter the value of a: ";
    cin >> a;
    cout << "For calculating the average of 3 numbers (a, b, c), enter the value of b: ";
    cin >> b;
    cout << "For calculating the average of 3 numbers (a, b, c), enter the value of c: ";
    cin >> c;
    cout << "Average of " << a << ", " << b << ", " << c << " = " << c1.compute(a, b, c) << endl;

    return 0;
}