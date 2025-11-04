#include <iostream>
using namespace std;

class Account
{
private:
    double balance;

public:
    Account(double initialBalance)
    {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
        {
            balance = 0;
            cout << "Initial balance invalid. Setting balance to 0." << endl;
        }
    }

    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
        else
            cout << "Deposit amount must be positive." << endl;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Withdrawal amount invalid or exceeds balance." << endl;
    }

    double getBalance() const
    {
        return balance;
    }
};

int main()
{
    Account myAccount(100.0);
    cout << "Initial balance: $" << myAccount.getBalance() << endl;

    myAccount.deposit(50.0);
    cout << "Balance after deposit: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(30.0);
    cout << "Balance after withdrawal: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(150.0); // Attempt to withdraw more than the balance

    return 0;
}