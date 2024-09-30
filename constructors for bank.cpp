#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {
        cout << "BankAccount created with account number: " << accountNumber << endl;
    }
        
    // Destructor
    ~BankAccount() {
        cout << "BankAccount with account number " << accountNumber << " is being deleted." << endl;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("123456789", 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    account.display();
    return 0;
}

