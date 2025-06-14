#include <iostream>

namespace first{
    int x = 1;
    int z = 7;
}

namespace second{
    int x = 2;
    int z = 5;
}

int main(){

    /*
        Namespace = provides a solution for preventing name conflicts in large projects.
        Each entity needs a unique name.
        A namespace allows for identically named entities as long as the namespaces are different. 
    */

    int x = 0;
    std::cout << x << std::endl;
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;
    
    using namespace second;
    std::cout << z << std::endl;
    std::cout << first::z << std::endl;

    return 0;
}