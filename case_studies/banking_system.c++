#include <iostream>
using namespace std;

float balance = 0;  // global variable

void deposit() {
    float amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    balance = balance + amount;
    cout << "Amount deposited successfully\n";
}

void withdraw() {
    float amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > balance) {
        cout << "Insufficient balance\n";
    } else {
        balance = balance - amount;
        cout << "Withdrawal successful\n";
    }
}

void checkBalance() {
    cout << "Current balance: " << balance << endl;
}

int main() {
    int choice;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            deposit();
        } 
        else if (choice == 2) {
            withdraw();
        } 
        else if (choice == 3) {
            checkBalance();
        }

    } while (choice != 4);

    return 0;
}