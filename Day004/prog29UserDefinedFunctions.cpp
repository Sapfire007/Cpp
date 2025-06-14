#include <iostream>
#include <string>

void identity(std::string n, int a);

void helloWorld(){
    std::cout << "Hello World\n";
}

void greet(std::string name){
    std::cout << "Hello " << name << "!\n";
}

int main(){
    helloWorld();
    helloWorld();
    helloWorld();
    helloWorld();

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    greet(name);
    int age;
    std::cout << "Enter yor age: ";
    std::cin >> age;
    identity(name, age);
    return 0;
}

void identity(std::string x, int y){
    std::cout << "Hey " << x << "! You are " << y << " years old!";
}