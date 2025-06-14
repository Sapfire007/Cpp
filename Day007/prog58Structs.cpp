#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled = true;
};


int main(){

    /*
        struct = A structure that group related variables under one name
                 structs can contain many different data types (string, int, double, bool, etc.)
                 variables in a struct are known as "members"
                 members can be accessed with . "Class Member Access Operator"
    */

    student student1;
    student1.name = "Mohan";
    student1.gpa = 8.5;
    student1.enrolled = true;
    
    student student2;
    student2.name = "Rohit";
    student2.gpa = 9.15;

    student student3;
    student3.name = "Shyam";
    student3.gpa = 8.0;
    student3.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';
    
    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';
    return 0;
}