#include <iostream>

int main(){

    /*
        switch = alternative to using many "else-if" statements
                 compare one value against matching cases
    */

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "Selected month = January";
        break;

    case 2:
        std::cout << "Selected month = February";
        break;

    case 3:
        std::cout << "Selected month = March";
        break;

    case 4:
        std::cout << "Selected month = April";
        break;

    case 5:
        std::cout << "Selected month = May";
        break;

    case 6:
        std::cout << "Selected month = June";
        break;

    case 7:
        std::cout << "Selected month = July";
        break;

    case 8:
        std::cout << "Selected month = August";
        break;
    
    case 9:
        std::cout << "Selected month = September";
        break;
        
    case 10:
        std::cout << "Selected month = October";
        break;

    case 11:
        std::cout << "Selected month = November";
        break;

    case 12:
        std::cout << "Selected month = December";
        break;
    
    default:
        std::cout << "You have selected an invalid month";
        break;
    }
    return 0;
}