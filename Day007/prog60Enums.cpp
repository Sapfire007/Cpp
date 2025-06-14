#include <iostream>

enum Day{Sunday = 0, Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6};

int main(){

    /*
        enums = a user-defined data type that consists of paired named-integer constants.
                GREAT if you have a set of potential options
    */

    // std::string today = "Saturday";
    Day today = Saturday;
    
    switch (today)
    {
        // case "Monday":
        //     std::cout << "It is Monday! " << '\n';
        //     break;
        // case "Tuesday":
        //     std::cout << "It is Tuesday!" << '\n';
        //     break;
        // case "Wednesday":
        //     std::cout << "It is Wednesday!" << '\n';
        //     break;
        // case "Thursday":
        //     std::cout << "It is Thursday!" << '\n';
        //     break;
        // case "Friday":
        //     std::cout << "It is Friday!" << '\n';
        //     break;
        // case "Saturday":
        //     std::cout << "It is Saturday!" << '\n';
        //     break;
        // case "Sunday":
        //     std::cout << "It is Sunday!" << '\n';
        //     break;
        
        case Monday:
            std::cout << "It is Monday! " << '\n';
            break;
        case Tuesday:
            std::cout << "It is Tuesday!" << '\n';
            break;
        case Wednesday:
            std::cout << "It is Wednesday!" << '\n';
            break;
        case Thursday:
            std::cout << "It is Thursday!" << '\n';
            break;
        case Friday:
            std::cout << "It is Friday!" << '\n';
            break;
        case Saturday:
            std::cout << "It is Saturday!" << '\n';
            break;
        case Sunday:
            std::cout << "It is Sunday!" << '\n';
            break;
        default:
            break;
    }
    
    Day tomorrow = Sunday;

    switch (tomorrow)
    {
        case 1:
            std::cout << "It is Monday! " << '\n';
            break;
        case 2:
            std::cout << "It is Tuesday!" << '\n';
            break;
        case 3:
            std::cout << "It is Wednesday!" << '\n';
            break;
        case 4:
            std::cout << "It is Thursday!" << '\n';
            break;
        case 5:
            std::cout << "It is Friday!" << '\n';
            break;
        case 6:
            std::cout << "It is Saturday!" << '\n';
            break;
        case 0:
            std::cout << "It is Sunday!" << '\n';
            break;
        default:
            break;
    }
    return 0;
}