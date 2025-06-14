#include <iostream>
#include <ctime>

int main(){

    srand(time(0));
    int randNum = rand() % 5 + 1;
    switch(randNum){
        case 1: std::cout << "You won a new smartphone!\n";
                break;
        case 2: std::cout << "You won a Manga Set!\n";
                break;
        case 3: std::cout << "You won a brand new Tablet!\n";
                break;
        case 4: std::cout << "You won a vacation trip to Switzerland!\n";
                break;
        case 5: std::cout << "You won a brand new Telivision!\n";
                break;
    } 
    return 0;
}