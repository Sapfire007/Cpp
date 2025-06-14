#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;

typedef int number_t;


int main(){

    /*
        typedef = reserved keyword used to create an additional name (alias) for another data type.
        New identifier for an existing type helps with readability and reduces types
    */

    pairlist_t plst;
    text_t firstName = "Saptarshi";

    std::cout << firstName << '\n';

    number_t age = 18;

    std::cout << age << '\n';

    return 0;
}