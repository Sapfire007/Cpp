#include <iostream>

int main(){
    int i = 3;
    while(i>0){
        for(int i = 0; i<=10; i++){
            std::cout << i << ' ';
        }
        std::cout << '\n';
        i--;
    }
    int rows, columns;
    char symbol;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    
    std::cout << "Enter the number of columns: ";
    std::cin >> columns;
    
    std::cout << "Enter symbol to fill with: ";
    std::cin >> symbol;
    
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;
}