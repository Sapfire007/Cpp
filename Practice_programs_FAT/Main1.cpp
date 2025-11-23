/*
Write a C++ program that uses recursion to compute the value of the mathematical expression
f(n)=(n^2)+f(n-1), where n is a positive integer provided by the user. Define a recursive function
computeExpression that takes an integer n as a parameter and returns the result of the expression.
The function should have a base case where, if n is zero, it returns zero. In the main function, prompt
the user to enter a positive integer, call the computeExpression function, and display the result.
Additionally, explain how value of f(n) is updated after each iteration.
*/

#include <iostream>
#include <cmath>
using namespace std;

int func1(int n){
    if(n==0){
        return 0;
    } else {
        return (pow(n, 2) + func1(n-1));
    }
}

int main(){
    int n;
    cout << "Enter the value of n to be evaluated for the function f(n) = (n^2) + f(n-1): ";
    cin >> n;
    if(n < 0){
        cout << "Entered integer is a negative integer, calculation not possible!";
        return 1;
    }
    int result = func1(n);
    cout << "Your result for the performed expression: " << result; 
    return 0;
}