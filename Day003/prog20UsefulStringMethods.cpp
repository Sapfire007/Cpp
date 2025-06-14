#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.length()>12){
        std::cout << "Your name cant be over 12 characters long!\n";
    }else if(name.empty()){
        std::cout << "You didnt enter your name!\n";
    } else {
        std::cout << "Welcome " << name << '\n';
    }

    std::cout << "Vanishing your name... \n";
    name.clear();
    std::cout << "Hello " << name << '\n';

    name = "Sap";
    name.append("007");
    std::cout << "Your usercode is; " << name << '\n';

    std::cout << "The character in your name at position 2 is: " << name.at(2) << '\n';

    name.insert(0, "@");
    std::cout << name << '\n';

    name = "Saptarshi Bose";
    std::cout << "Index of 1st whitespace in the input name is at index position: " << name.find(' ') << '\n';
    
    name.erase(0,10);
    std::cout << name;
    return 0;
}