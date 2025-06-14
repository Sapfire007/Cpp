#include <iostream>

int main(){
    std::string students[] = {"Saptarshi", "Anish", "Deepak"};
    for(int i = 0; i < (sizeof(students)/sizeof(students[0])); i++){
        std::cout << students[i] << '\n';
    }
    return 0;
}