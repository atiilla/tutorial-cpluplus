// Expenses Application

#include <iostream>
using namespace std;
using std::cin;
#define GREEN "\033[32m"  /* Green */
#define RED "\033[31m"    /* Red */
#define YELLOW "\033[33m" /* Yellow */
#define RESET "\033[0m"

class Budget
{
public:
    int total_budget = 0;
    int total_expenses = 0;
    int total_remaining = 0;

    Budget(int total_budget, int total_expenses, int total_remaining)
    {
        this->total_budget = total_budget;
        this->total_expenses = total_expenses;
        this->total_remaining = total_remaining;
    }

    void set_budget(int budget)
    {
        total_budget = budget;
    }

    void set_expenses(int expenses)
    {
        total_expenses = expenses;
    }

    void set_remaining(int remaining)
    {
        total_remaining = remaining;
    }

    int get_budget()
    {
        return total_budget;
    }

    int get_expenses()
    {
        return total_expenses;
    }

    int get_remaining()
    {
        return total_remaining;
    }

    void print_budget()
    {
        cout << YELLOW << "Budget: " << total_budget << RESET << endl;
    }

    void print_expenses()
    {
        cout << YELLOW << "Expenses: " << total_expenses << RESET << endl;
    }

    void print_remaining()
    {
        cout << YELLOW << "Remaining: " << total_remaining << RESET << endl;
    }

    void print_total()
    {
        cout << YELLOW << "Total: " << total_budget - total_expenses << RESET << endl;
    }

    void print_all()
    {
        print_budget();
        print_expenses();
        print_remaining();
        print_total();
    }
};

int main()
{
    int choice;
    int money;
    Budget budget(0, 0, 0);
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
            cout << YELLOW << "How much do you want add?" << RESET << endl;
            cin >> money;
            budget.set_budget(money);
            cout << YELLOW << budget.get_budget() << " amount added " << RESET << endl;
            break;
        case 3:
            budget.print_budget();
            break;
        case 4:
            cout << "Exit" << endl;
            exit(1);
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
    return 0;
}