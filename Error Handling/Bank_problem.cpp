#include <iostream>
#include <stdexcept>
using namespace std;

class InsufficientFunds : public exception {
    double amount;
    double balance;
public:
    InsufficientFunds(double a, double b) : amount(a), balance(b) {}

    const char* what() const noexcept override {
        return "Insufficient funds: withdrawal exceeds balance";
    }

    void details() {
        cout << "Attempted: Rs " << amount
             << ", Available: Rs " << balance << endl;
    }
};

class BankAccount {
    double balance;
public:
    BankAccount(double b) : balance(b) {}

    void withdraw(double amount) {
        if (amount > balance)
            throw InsufficientFunds(amount, balance);
        balance -= amount;
        cout << "Withdrawal successful. Remaining: Rs "
             << balance << endl;
    }

    double getBalance() { return balance; }
};

int main() {
    BankAccount account(50000);

    try {
        account.withdraw(20000);   // it is valid
        account.withdraw(40000);   //  and here is exceeds balance — throws
        account.withdraw(5000);    // --> never reached
    }
    catch (InsufficientFunds& e) {
        cout << e.what() << endl;
        e.details();
    }

    cout << "Program continues normally." << endl;
    cout << "Final balance: Rs " << account.getBalance() << endl;

    return 0;
}