#include <iostream>
#include <string>

using namespace std;

class Bankaccount {
private:
    double balance;

public:
    // Setter
    void setbalance(double b) {
        balance = b;
    }

    // Getter
    double getbalance() {
        return balance;
    }

    // Deposit
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited funds: " << amount << endl;
        } else {
            cout << "Invalid deposit" << endl;
        }
    }

    // Withdraw
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount" << endl;
        } 
        else if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } 
        else {
            balance -= amount;
            cout << "Withdrawal successful: " << amount << endl;
        }
    }
};

int main() {
    Bankaccount a1;

    a1.setbalance(25000);

    cout << "Initial Balance: " << a1.getbalance() << endl;

    a1.deposit(5000);
    cout << "Balance after deposit: " << a1.getbalance() << endl;

    a1.withdraw(7000);
    cout << "Balance after withdrawal: " << a1.getbalance() << endl;

    return 0;
}