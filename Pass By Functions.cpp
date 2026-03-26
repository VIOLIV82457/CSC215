#include <iostream>
using namespace std;

// Function declarations
void showBalances(int acc1, int acc2);
void normalTransaction(int acc1, int acc2); //Passby values = Copy
void hackedTransaction(int &acc1, int &acc2); //Passby references = Real

int main()
{   //creating values for the accounts
    int account1 = 1000;
    int account2 = 2000;

    cout << "=== Original Balances ===" << endl; //titles
    showBalances(account1, account2);

    // Normal transaction (pass by value)
    cout << "\n=== Normal Transaction (No Change Expected) ===" << endl;
    normalTransaction(account1, account2);

    cout << "After normal transaction:" << endl;
    showBalances(account1, account2);

    // Hacked transaction (pass by reference)
    cout << "\n=== Hacked Transaction (Swapping Balances) ===" << endl;
    hackedTransaction(account1, account2);

    cout << "After hacked transaction:" << endl;
    showBalances(account1, account2);

    return 0;
}

// Function to display balances
void showBalances(int acc1, int acc2)
{
    cout << "Account 1 Balance: $" << acc1 << endl;
    cout << "Account 2 Balance: $" << acc2 << endl;
}

// Pass by value (does NOT affect original values)
void normalTransaction(int acc1, int acc2)
{
    acc1 += 500;
    acc2 -= 500;

    cout << "Inside normalTransaction:" << endl;
    cout << "Account 1: $" << acc1 << endl;
    cout << "Account 2: $" << acc2 << endl;
}

// Pass by reference (DOES affect original values)
void hackedTransaction(int &acc1, int &acc2)
{
    int temp = acc1;
    acc1 = acc2;
    acc2 = temp;

    cout << "Inside hackedTransaction (balances swapped):" << endl;
    cout << "Account 1: $" << acc1 << endl;
    cout << "Account 2: $" << acc2 << endl;
}