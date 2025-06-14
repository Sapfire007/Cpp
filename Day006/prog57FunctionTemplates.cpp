#include <iostream>

int max(int x, int y){
    return (x > y) ? x : y; 
}

double max(double x, double y){
    return (x > y) ? x : y; 
}

char max(char x, char y){
    return (x > y) ? x : y; 
}


template <typename T>
T min(T x, T y){
    return (x < y) ? x : y;
}



template <typename T, typename U>
auto min(T x, U y){
    return (x < y) ? x : y;
}

int main(){

    /*
        function template = describes what a function looks like.
                            Can be used to generate as many overloaded functions
                            as needed, each using different data types
    */


    std::cout << max(1, 2) << '\n';
    std::cout << max(1.1, 2.1) << '\n';
    std::cout << max('1', '2') << '\n';

    std::cout << min(1, 2) << '\n';
    std::cout << min(1.1, 2.1) << '\n';
    std::cout << min('1', '2') << '\n';



    std::cout << min(1.36540, 2) << '\n';

    return 0;
}