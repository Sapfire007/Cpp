#include <iostream>

int main(){

    /*
        array = A data structure that can hold multiple values;
                values are accessed by an index number
                "kind of like a variable that holds multiple values"
    */

    std::string cars[] = {"Corvette", "Toyota", "Nissan"};
    
    std::cout << cars << '\n'; // Memory address

    cars[0] = "Lamborghini";
    
    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    std::string animals[5];
    animals[0] = "Humans";
    animals[1] = "Dogs";
    animals[2] = "Cats";
    animals[3] = "Rabbits";
    animals[4] = "Squirrels";

    for(std::string s1:animals){
        std::cout << s1 << " ";
    }


    return 0;
}