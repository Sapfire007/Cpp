#include <iostream>
#include <string>

int main(){

    std::string name;
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << "!\n";
    std::cout << "You are " << age << " years old."; 

    return 0;
}