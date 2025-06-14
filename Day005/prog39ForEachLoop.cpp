#include <iostream>

int main(){

    /*
        foreach loop = loop that eases the traversal over an
                       iterable data set
    */

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