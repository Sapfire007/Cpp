#include <iostream>

int main(){

    /*
        ternary operator ?: = replacement to an if/else statement
        condition ? expression1 : expression2;
    */

    int grade = 75;
    if(grade >= 60){
        std::cout << "You pass!" << '\n';
    }else{
        std::cout << "You fail!" << '\n';
    }

    int grade2 = 50;
    (grade2 >= 60) ? std::cout << "You pass!\n" : std::cout << "You fail!\n";

    int number = 9;
    number % 2 == 1 ? std::cout << "Odd\n" : std::cout << "Even\n";

    bool hungry = true;
    hungry? std::cout << "Serve food\n" : std::cout << "You are full!\n";

    std::cout << (hungry?"You are hungry\n" : "You are full\n");
    return 0;
}