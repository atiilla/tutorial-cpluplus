// Expenses Application

#include <iostream>
using namespace std;

int main()
{
    int choice;
    while (true)
    {
        cout << "1. Add Expenses" << endl;
        cout << "2. Save Money" << endl;
        cout << "3. Total Budget" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "expenses" << endl;
            break;
        case 2:
            cout << "save money" << endl;
            break;
        case 3:
            cout << "Total budget" << endl;
            break;
        case 4:
            cout << "Exit" << endl;
            return 0;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
     return 0;
}