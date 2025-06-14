#include <iostream>
#include <iomanip>     // Req. for line 59

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 1000;
    int choice = 0;
    
    do{
        
        std::cout << "******************************\n";
        std::cout << "Enter your choice: " << '\n';
        std::cout << "******************************\n";
        std::cout << "1. Show Balance \n";
        std::cout << "2. Deposit Money \n";
        std::cout << "3. Withdraw Money \n";
        std::cout << "4. Exit \n";
        std::cout << ">>> Enter your choice: ";
        std::cin >> choice; 

        std::cin.clear(); // This function will reset any error flags when the standard input fails to interpret the input.
        fflush(stdin); // This will clear the input buffer
        
        switch (choice)
        {
            case 1:
            showBalance(balance);
            break;
            
            case 2:
            balance += deposit();
            showBalance(balance);            
            break;
            
            case 3:
            balance -= withdraw(balance);
            showBalance(balance);            
            break;
            
            case 4: 
            std::cout << "Thanks for visiting!\n";
            break;
            
            default:
            std::cout << "Invalid choice!\n";
            break;
        }
    }while(choice!=4);

    std::cout << "******************************\n";

    return 0;
}

void showBalance(double balance){
    std::cout << "Your Balance: " << std::setprecision(2) << std::fixed << balance << "Rs." << '\n'; // 'std::setprecision(2) << std::fixed' : this will set value upto 2 decimal places
}
double deposit(){
    int amt;
    std::cout << "Enter the amount to be deposited: ";
    std::cin >> amt;
    if(amt>0){
        std::cout << "Successfully deposited: " << amt <<"Rs. in your account!" << '\n';
        return amt;
    } else {
        std::cout << "That's not a valid amount!" << '\n';
        return 0;
    }
}
double withdraw(double balance){
    int withdrawAmt;
    std::cout << "Enter the amount to be withdrawn: ";
    std::cin >> withdrawAmt;
    if(withdrawAmt<=balance){
        if(withdrawAmt>0){
            std::cout << "Successfully withdrawn: " << withdrawAmt <<"Rs. from your account!" << '\n';
            return withdrawAmt;
        } else {
            std::cout << "That's not a valid amount!" << '\n';
            return 0;
        }
    } else {
        std::cout << "You do not have enough funds in your account to withdraw!" << '\n';
        return 0;
    }
}