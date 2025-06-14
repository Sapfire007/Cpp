#include <iostream>

int main(){

    for(int i = 0; i < 5; i++){
        std::cout << std::string(i + 1, '*') << '\n';
    }
    /*
        Or:
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j <= i; j++) {
                    std::cout << '*';
                }
                std::cout << '\n';
            }
    */
    return 0;
}