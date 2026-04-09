#ifndef ATM_H
#define ATM_H

#include <string>
using namespace std;

struct Account
{
    string name;
    double balance;
};

// Function prototypes
bool login();
void showMenu();
void showBalances(Account accounts[], int count);
void deposit(Account &account);
void withdraw(Account &account);
void transfer(Account &fromAcc, Account &toAcc);
void createAccount(Account accounts[], int &count);

#endif