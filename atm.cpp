#include <iostream>
#include "atm.h"
using namespace std;

bool login()
{
    int pin, attempts = 0;
    const int correctPIN = 2007;

    while (attempts < 3)
    {
        cout << "Enter PIN: ";
        cin >> pin;

        if (pin == correctPIN)
        {
            cout << "Access granted.\n";
            return true;
        }

        cout << "Incorrect PIN.\n";
        attempts++;
    }

    return false;
}

void showMenu()
{
    cout << "\n====== ATM MENU ======\n";
    cout << "1. Show Accounts\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Transfer\n";
    cout << "5. Create Account\n";
    cout << "6. Exit\n";
    cout << "Choice: ";
}

void showBalances(Account accounts[], int count)
{
    cout << "\n--- Accounts ---\n";
    for (int i = 0; i < count; i++)
    {
        cout << i + 1 << ". " << accounts[i].name
             << ": $" << accounts[i].balance << endl;
    }
}

void deposit(Account &account)
{
    double amount;
    cout << "Enter deposit amount: ";
    cin >> amount;

    if (amount > 0)
    {
        account.balance += amount;
        cout << "Deposit successful!\n";
    }
    else
        cout << "Invalid amount.\n";
}

void withdraw(Account &account)
{
    double amount;
    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (amount > 0 && amount <= account.balance)
    {
        account.balance -= amount;
        cout << "Withdrawal successful!\n";
    }
    else
        cout << "Invalid or insufficient funds.\n";
}

void transfer(Account &fromAcc, Account &toAcc)
{
    double amount;
    cout << "Enter transfer amount: ";
    cin >> amount;

    if (amount > 0 && amount <= fromAcc.balance)
    {
        fromAcc.balance -= amount;
        toAcc.balance += amount;
        cout << "Transfer complete!\n";
    }
    else
        cout << "Invalid transfer.\n";
}

void createAccount(Account accounts[], int &count)
{
    if (count >= 10)
    {
        cout << "Account limit reached.\n";
        return;
    }

    cout << "Enter account name: ";
    cin >> accounts[count].name;

    cout << "Enter starting balance: ";
    cin >> accounts[count].balance;

    if (accounts[count].balance < 0)
    {
        cout << "Invalid balance.\n";
        return;
    }

    cout << "Account created!\n";
    count++;
}