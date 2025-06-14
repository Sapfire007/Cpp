#include <iostream>

int calcLength(long long x);
int doubledSecondDigit(long long x);
int addOdd(long long x);
bool validator(long long x);

int main(){

    /*
        Luhn Algorithm
        -------------------------------------

        1. Double every second digit from the right to left.
           If doubled number is 2 digits, split them.

        2. Add all single digits from step 1
        
        3. Add all odd numbered digits from right to left

        4. Sum results from steps 2 & 3

        5. If step 4 is divisible by 10, # is valid
    */

    long long input;
    int creditCardLength;

    std::cout << "Enter your credit card number: ";
    std::cin >> input;
    
    while(input<=0){
        std::cout << "Invalid credit card number!\nPlease check carefully and re-input the credit card number: ";
        std::cin >> input;
        creditCardLength = calcLength(input);
    }

    creditCardLength = calcLength(input);

    while(creditCardLength < 14 || creditCardLength > 16){
        std::cout << "Invalid credit card format!\nPlease check carefully and re-input the credit card number: ";
        std::cin >> input;
        creditCardLength = calcLength(input);
    }

    if(validator(input)){
        std::cout << "Your Credit Card is valid!";
    }else{
        std::cout << "Sorry, invalid Credit Card!";
    }
    
    return 0;
}

int calcLength(long long x){
    int output=0;
    while(x>0){
        x = x / 10;
        output++;
    }
    return output;
}

int doubledSecondDigit(long long x){
    int sum=0;
    while(x>0){
        int remExtract = x%100;
        remExtract /= 10;
        remExtract *= 2;
        while(remExtract>=10){
            remExtract = remExtract-9;
        }
        sum += remExtract;
        x = x/100;
    }
    return sum;
}

int addOdd(long long x){
    int sum = 0;
    while(x>0){
        int remExtract = x%100;
        remExtract %= 10;
        sum += remExtract;
        x /= 100; 
    }
    return sum;
}

bool validator(long long x){
    int doubledSecondDigitValue = doubledSecondDigit(x);
    int addOddValue = addOdd(x);
    int sum = doubledSecondDigitValue + addOddValue;
    if(sum%10==0){
        return true;
    }else{
        return false;
    }
}