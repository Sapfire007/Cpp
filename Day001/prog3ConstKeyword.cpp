#include <iostream>

int main(){

    //The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)


    //Calculate the circumference of a circle:

    // double pi = 3.14159;
    // pi = 333242;
    // We do not want this to be happening

    const double PI = 3.14159;
    // PI = 1234; Cant be reassigned now

    double radius = 7;
    double circumference = 2*PI*radius;

    std::cout << circumference << "cm";

    return 0;
}