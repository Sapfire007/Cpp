#include <iostream>

int main(){

    char op;
    double a, b, c;
    std::cout << "********** CALCULATOR **********\n";
    std::cout << "Enter the arithmetic operation you want to perform ( +, -, *, / ): ";
    std::cin >> op;
    switch (op)
    {
        case '+':
            std::cout << "Enter value for first operand: ";
            std::cin >> a;
            std::cout << "Enter value for second operand: ";
            std::cin >> b;
            c = a+b;
            std::cout << "Sum: " << c;        
            break;
        
        case '-':
            std::cout << "Enter value for first operand: ";
            std::cin >> a;
            std::cout << "Enter value for second operand: ";
            std::cin >> b;
            c = a-b;
            std::cout << "Difference: " << c;        
            break;
        
        case '*':
            std::cout << "Enter value for first operand: ";
            std::cin >> a;
            std::cout << "Enter value for second operand: ";
            std::cin >> b;
            c = a*b;
            std::cout << "Product: " << c;        
            break;

        case '/':
            std::cout << "Enter value for first operand: ";
            std::cin >> a;
            std::cout << "Enter value for second operand: ";
            std::cin >> b;
            c = a/b;
            std::cout << "Quotient: " << c;        
            break;

        default:
            std::cout << "Invalid Operator input!" ;
            break;
    }
    std::cout << "\n********************************";
    return 0;
}