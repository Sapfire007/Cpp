#include <iostream>

int main(){

    /*
        sizeof() = determines the size in bytes of a:
                    variable, data type, class, objects, etc. 
    */

    double gpa = 9.18;

    std::string name = "Saptarshi";
    std::string name2 = "Saptarshi007Sapfire007";

    char grade = 'A';

    bool student = true;

    char grades[] = {'S', 'A', 'B', 'C', 'D', 'E', 'F'};

    std::string cars[] = {"Corvette", "Toyota", "Nissan"};

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(double) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(name2) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(cars) << " bytes\n";
    std::cout << (sizeof(cars)/sizeof(cars[0])) << " bytes\n"; // same as: std::cout << (sizeof(cars)/sizeof(std::string)) << " bytes\n";
    return 0;
}