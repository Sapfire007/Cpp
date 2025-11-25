/*
Create a class containing private fields that hold the account number and the account balance.
Include a constant static field that holds the annual interest rate (3 percent) earned on accounts at
Parkville Bank. Create three public member functions for the class, as follows:

i. An enterAccountData()function that prompts the user for values for the account number and
balance. Allow neither a negative account number nor one less than 1000, and do not allow a
negative balance; continue to prompt the user until valid values are entered.

ii. A computeInterest()function that accepts an integer argument that represents the number of
years the account will earn interest. The function displays the account number, then displays
the ending balance of the account each year, based on the interest rate attached to the
BankAccount.

iii. A displayAccount()function that displays the details of the BankAccount.

Create a C++ program with main()function that declares an array of 10 BankAccount objects.
After the first BankAccount object is entered, ask the user if he or she wants to continue. Prompt
the user for BankAccount values until the user wants to quit or enters 10 BankAccount objects,
whichever comes first. For each BankAccount entered, display the BankAccount details.
*/

#include <iostream>
using namespace std;

class BankAccount{
    private:
        int accNumber;
        double balance;

    public:
        static const double interestRate;

        void enterAccountData(){
            do{
                cout << "Enter account number: ";
                cin >> accNumber;
            }while(accNumber < 1000);

            do{
                cout << "Enter account balance: ";
                cin >> balance;
            }while(balance < 0);
        }

        void computeInterest(int years){
            cout << "\nAccount Number: " << accNumber << endl;
            double tempBal = balance;
            
            for(int i = 0; i < years; i++){
                tempBal += tempBal * interestRate;
                cout << "End of Year " << i << ": " << tempBal << endl;
            }
        }

        void displayAcc(){
            cout << "\nAccount Details:\n";
            cout << "Account Number: " << accNumber << endl;
            cout << "Balance: " << balance << endl;
        }
};

const double BankAccount::interestRate = 0.03;


int main(){
    BankAccount accounts[10];
    int count = 0;
    char choice;

    do {
        cout << "\n--- Enter Bank Account #" << (count + 1) << " ---\n";
        accounts[count].enterAccountData();

        accounts[count].displayAcc();

        int years;
        cout << "Enter number of years to compute interest: ";
        cin >> years;
        accounts[count].computeInterest(years);

        count++;

        if (count == 10) {
            cout << "\nMaximum of 10 accounts reached.\n";
            break;
        }

        cout << "\nDo you want to enter another account? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    return 0;
}