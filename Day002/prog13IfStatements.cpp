#include <iostream>

int main(){

    /*
        if statemets = do something if a condition is true. 
                       if not, then don't do it. 
    */
    
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age>18){
        std::cout << "Entered age: " << age << '\n';
        std::cout << "You are eligible to vote";
    }else if (age==18)
    {
        std::cout << "Entered age: " << age << '\n';
        std::cout << "You are eligible to vote from this year!";
    }else{
        std::cout << "Entered age: " << age << '\n';
        std::cout << "You are eligible to vote after " << (18-age) << " years.";
    }
    
    return 0;
}