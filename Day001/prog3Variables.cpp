#include <iostream>

int main(){

    int x;          // declaration
    int a = 2;
    int b = 5;
    x = 1;          // assignment

    int y = (a+b);

    std::cout << (y*x) << '\n';
    
    int age = 18;
    int year = 2025;
    int days = 2.5; // Output : 2
    
    
    double price = 10.99;
    double num6 = 3E-5; // 3x10^-5
    
    
    float gpa = 8.75f;
    float num3 = 3E-5f; // 3x10^-5


    char grade = 'S';
    char c1 = 'HelloWorlD';         //<- warning; prints last character here: 'D'
    std::cout << c1;
    

    std::cout << "\n";
    
    
    bool forSale = false;
    bool student = true;
    std::cout << student; // Output: 1
    
    std::cout << "\n";

    std::string name = "Saptarshi Bose";
    std::cout << name << std::endl;
    std::cout << "Hello " << name << "!";
    
    return 0;
}