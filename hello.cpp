#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int balance;

public:
    void input() {
        cout << "Enter account holder name: ";
        getline(cin, name);
        cout << "Enter initial balance: ";
        cin >> balance;
    }
    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }
    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
    }
    void display() {
        cout << "\nAccount Holder: " << name << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.input();
    int amount;
    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    acc.deposit(amount);
    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    acc.withdraw(amount);
    acc.display();

    return 0;
}