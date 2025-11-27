/*
Develop a C++ program that defines a class Complex with data members real and imag. Create a
friend function to add two complex numbers, where objects are passed as parameters. The function
should return a new Complex object representing the result.
*/

#include <iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;

    public:
        // Constructor
        Complex(float r = 0, float i = 0) {
            real = r;
            imag = i;
        }

        // Friend function declaration
        friend Complex addComplex(Complex c1, Complex c2);

        // Function to display complex number
        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

// Friend function definition
Complex addComplex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    Complex result = addComplex(c1, c2);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum: ";
    result.display();

    return 0;
}