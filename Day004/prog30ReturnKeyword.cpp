#include <iostream>

double square(double side){
    return side*side;
}

double cube(double side){
    return side*side*side;
}

int main(){
    double side;
    std::cout << "Enter the side of your square: ";
    std::cin >> side;
    std::cout << "Square of entered side: " << square(side) << " sq. units." << '\n';
    std::cout << "Cube of entered side: " << cube(side) << " cu. units." << '\n';
    return 0;
}