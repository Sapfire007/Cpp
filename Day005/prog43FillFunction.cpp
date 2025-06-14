#include <iostream>

int main(){
    /*
        fill() = Fills a range of elements with a specified value
                 fill(begin, end, value)
    */

    const int SIZE = 100;
    std::string foods[SIZE];
    fill(foods, foods + (SIZE/2), "pizza");
    fill(foods + (SIZE/2), foods+SIZE, "hotdogs");
    for(std::string food:foods){
        std::cout << food << '\n';
    }
    std::cout << (sizeof(foods)/sizeof(std::string)) << '\n';

    std::cout << '\n';
    
    const int SIZE2 = 99;
    std::string colors[SIZE2];
    fill(colors, colors + (SIZE2/3), "red");
    fill(colors + (SIZE2/3), colors + (SIZE2/3)*2, "green");
    fill(colors + (SIZE/3)*2, colors+SIZE, "blue");
    for(std::string food:colors){
        std::cout << food << '\n';
    }
    std::cout << (sizeof(colors)/sizeof(std::string)) << '\n';

    return 0;
}