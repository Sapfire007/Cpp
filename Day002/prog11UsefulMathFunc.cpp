#include <iostream>
#include <cmath>

int main(){

    double x = 3;
    double y = 4;
    double z1;
    z1 = std::max(x,y);
    std::cout << z1 << '\n';

    double z2;
    z2 = std::min(x,y);
    std::cout << z2 << '\n';
    
    double z3;
    z3 = pow(2,5);
    std::cout << "2^5 = " << z3 << '\n';
    
    double z4;
    z4 = sqrt(9);
    std::cout << "9^0.5 = " << z4 << '\n';
    
    double z5;
    z5 = abs(-7);
    std::cout << z5 << '\n';

    double z6,z7,z8;
    z6 = round(3.2);
    z7 = round(3.5);
    z8 = round(3.8);
    std::cout << z6 << '\n';
    std::cout << z7 << '\n';
    std::cout << z8 << '\n';

    double z9,z10,z11;
    z9 = round(-3.2);
    z10 = round(-3.5);
    z11 = round(-3.8);
    std::cout << z9 << '\n';
    std::cout << z10 << '\n';
    std::cout << z11 << '\n';

    double z12;
    z12 = ceil(3.99);
    std::cout << z12 << '\n';
    double z13;
    z13 = ceil(3.5);
    std::cout << z13 << '\n';
    double z16;
    z16 = ceil(3.1); 
    std::cout << z16 << '\n';
    double z14;
    z14 = ceil(-3.99);
    std::cout << z14 << '\n';
    double z15;
    z15 = ceil(-3.5);
    std::cout << z15 << '\n';
    double z17;
    z17 = ceil(-3.1); 
    std::cout << z17 << '\n';

    double z18;
    z18 = floor(3.99);
    std::cout << z18 << '\n';
    double z19;
    z19 = floor(3.5);
    std::cout << z19 << '\n';
    double z20;
    z20 = floor(3.1); 
    std::cout << z20 << '\n';
    double z21;
    z21 = floor(-3.99);
    std::cout << z21 << '\n';
    double z22;
    z22 = floor(-3.5);
    std::cout << z22 << '\n';
    double z23;
    z23 = floor(-3.1); 
    std::cout << z23 << '\n';



    
    return 0;
}