#include <iostream>

class Animal{
    public:
        bool alive = true;
    
        void eat(){
            std::cout << "This animal is eating" << '\n';
        }
};

class Dog : public Animal{
    public:
        void bark(){
            std::cout << "Dog barks!" << '\n';
        }
};

class Cat : public Animal{
    public:
        void meow(){
            std::cout << "Cat meows!" << '\n';
        }
};

int main(){

    /*
        inheritance = A class can receive attributes and methods from another class
                      children classes inherit from a Parent class
                      Helps to reuse similar code foun
    */

    Dog dog;
    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();
    
    Cat cat;
    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meow();

    return 0;
}