/*
Create a C++ program that implements a class Account with fields for account number, holder
name, and balance. Implement methods to initialize an account, deposit money, withdraw
money (with validation for balance sufficiency), and display account details. Illustrate
encapsulation by making variables private and accessing them through public methods.

Sample Input: Create account: Account No = 12345, Name = Shyam, Balance = 1000 Deposit
500 Withdraw 300
Sample Output: Account No: 12345, Name: Shyam, Balance: 1200
*/

#include <iostream>
#include <string>
using namespace std;

class Account {
    private:
        int accNo;
        string name;
        float balance;

    public:
        void init(int a, string n, float b) {
            accNo = a;
            name = n;
            balance = b;
        }

        void deposit(float amt) {
            balance += amt;
        }

        void withdraw(float amt) {
            if (amt > balance)
                cout << "Insufficient Balance!\n";
            else
                balance -= amt;
        }

        void display() {
            cout << "Account No: " << accNo
                << ", Name: " << name
                << ", Balance: " << balance << endl;
        }
};

int main() {
    Account A;

    int no;
    string n;
    float bal;

    cout << "Enter Account No: ";
    cin >> no;

    cout << "Enter Name: ";
    cin >> n;

    cout << "Enter Balance: ";
    cin >> bal;

    A.init(no, n, bal);

    float d, w;

    cout << "Enter deposit amount: ";
    cin >> d;
    A.deposit(d);

    cout << "Enter withdraw amount: ";
    cin >> w;
    A.withdraw(w);

    A.display();

    return 0;
}