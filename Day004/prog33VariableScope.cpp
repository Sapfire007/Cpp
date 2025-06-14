#include <iostream>

int top1 = 7;

void printNum(){
    int myNum = 2;
    std::cout << "Top value: " << top1 << '\n';
    std::cout << myNum << '\n';
}

int main(){

    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions

    std::cout << "Top value: " << top1 << '\n';
    int myNum = 1;
    std::cout << myNum << '\n';
    printNum();
    return 0;
}