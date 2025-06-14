#include <iostream>

int main(){

    // memory address = a location in memory where data is stored
    // a memory address can be accessed with & (address-of operator)

    std::string name = "Saptarshi";
    int age = 18;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}