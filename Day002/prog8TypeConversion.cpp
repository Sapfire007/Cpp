#include <iostream>

int main(){

    /*
        type conversion = conversion of a value of one datatype to another
                    ----> Implicit = automatic
                    ----> Explicit = Precede value with new data type
    */

    int x = 3.14;
    std::cout << x << '\n';
    
    double y = 3.14;
    std::cout << y << '\n';
    
    double z = (int) 3.14;
    std::cout << z << '\n';
    
    char a1 = 100;
    std::cout << a1 << '\n';

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    std::cout << score << "%";


    return 0;
}