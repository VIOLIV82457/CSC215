#include <iostream>
#include "atm.h"
using namespace std;

int main()
{
    Account accounts[10];
    int count = 2;

    accounts[0] = {"Checking", 1000};
    accounts[1] = {"Savings", 2000};

    if (!login())
    {
        cout << "Too many failed attempts.\n";
        return 0;
    }

    int choice;

    do
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
        case 1:
            showBalances(accounts, count);
            break;

        case 2:
        {
            int acc;
            cout << "Select account #: ";
            cin >> acc;
            if (acc >= 1 && acc <= count)
                deposit(accounts[acc - 1]);
            else
                cout << "Invalid.\n";
            break;
        }

        case 3:
        {
            int acc;
            cout << "Select account #: ";
            cin >> acc;
            if (acc >= 1 && acc <= count)
                withdraw(accounts[acc - 1]);
            else
                cout << "Invalid.\n";
            break;
        }

        case 4:
        {
            int from, to;
            cout << "Transfer FROM #: ";
            cin >> from;
            cout << "Transfer TO #: ";
            cin >> to;

            if (from >= 1 && from <= count && to >= 1 && to <= count && from != to)
                transfer(accounts[from - 1], accounts[to - 1]);
            else
                cout << "Invalid.\n";
            break;
        }

        case 5:
            createAccount(accounts, count);
            break;

        case 6:
            cout << "Goodbye!\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}