#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;
    string ownerName;

public:
    BankAccount(const string& accountNumber, const string& ownerName, double initialBalance) {
        this->accountNumber = accountNumber;
        this->ownerName = ownerName;
        this->balance = initialBalance; 

    }

    void credit(double amount) {
        balance += amount;
    }

    void debit(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void displayBalance() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("12345", "Alice", 1000.0);

    account.credit(500.0);
    account.debit(200.0);
    account.displayBalance();

    return 0;
}