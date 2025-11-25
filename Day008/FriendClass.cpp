#include <iostream>
using namespace std;

class Account {
private:
    int balance;

public:
    Account(int b){
        this->balance = b;
    }

    friend class Bank;   // Bank can access Account's private data
};

class Bank {
public:
    void showBalance(Account &a) {
        cout << "Balance is: " << a.balance << endl;
    }
};

int main() {
    Account obj(5000);
    Bank b;
    b.showBalance(obj);
    return 0;
}