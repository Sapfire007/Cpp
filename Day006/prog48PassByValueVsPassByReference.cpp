#include <iostream>

void swap(std::string &a, std::string &b);

int main(){

    std::string x = "Kool-Aid";
    std::string y = "Water";
    std::string temp;

    temp = x;
    x = y;
    y = temp;

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';


    std::string food1 = "Pizza";
    std::string food2 = "Burger";

    swap(food1, food2);

    std::cout << "Food1: " << food1 << '\n';
    std::cout << "Food2: " << food2 << '\n';

    return 0;
}

void swap(std::string &a, std::string &b){
    std::string temp;
    temp = a;
    a = b;
    b = temp;
} 