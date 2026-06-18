#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

    static double interestRate;     // Same for all accounts
    static int nextAccountNumber;   // To generate unique account numbers

public:
    // Static function to set interest rate
    static void setInterestRate(double rate) {
        interestRate = rate;
    }

    // Constructor (initialize account)
    BankAccount(double initialBalance = 0.0) {
        accountNumber = nextAccountNumber++;
        balance = (initialBalance >= 0) ? initialBalance : 0.0;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    // Withdraw function
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Invalid or insufficient funds!\n";
        }
    }

    // Display account details
    void display() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "---------------------------\n";
    }
};

// Static member initialization
double BankAccount::interestRate = 0.0;
int BankAccount::nextAccountNumber = 1001;

// Main function to test
int main() {
    // Set interest rate for all accounts
    BankAccount::setInterestRate(5.0);

    // Create accounts
    BankAccount acc1(500.0);
    BankAccount acc2;

    // Perform operations
    acc1.deposit(200);
    acc1.withdraw(100);

    acc2.deposit(300);
    acc2.withdraw(50);

    // Display details
    acc1.display();
    acc2.display();

    return 0;
}