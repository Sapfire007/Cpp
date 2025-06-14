#include <iostream>
#include <string>  // This is needed for std::string and std::getline

// cout << (insertion operator)
// cin >> (extraction operator)

int main(){

    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name;
    // std::getline(std::cin, name);  // Reads full name with spaces
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // if std::cin >> was used earlier (e.g., before std::getline())
    
    std::cout << "Hello " << name << "!\n";
    
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Age: " << age;


    return 0;
}