// Polymorphism example

#include <iostream>
using namespace std;

class MainClass
{
public:
    string username;
    string password;
    void printUser()
    {
        cout << "MainClass User Service" << endl;
    }
};

class Admin : public MainClass
{
public:
    string role;
    Admin(string username, string password, string role)
    {
        this->role = role;
        this->username = username;
        this->password = password;
    }

    void printUser()
    {
        cout << "Admin Service" << endl;
        cout << "Username: " << username << endl;
        cout << "Password: " << password << endl;
    }
};

class User : public MainClass
{
public:
    User(string username, string password)
    {
        this->username = username;
        this->password = password;
    }

    void printUser()
    {
        cout << "User Service" << endl;
        cout << "Username: " << username << endl;
        cout << "Password: " << password << endl;
    }
};

class Utils{

    public:
    void getMemoryAddress(string data)
    {
        cout << "Memory Address: " << &data << endl;
    }

    void ConsoleWhileloopMenu()
    {
        int choice;
        while(true)
        {
            cout << "1. Print User" << endl;
            cout << "2. Print Admin" << endl;
            cout << "3. Print Guest" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            switch(choice)
            {
                case 1:
                    cout << "Print User" << endl;
                    break;
                case 2:
                    cout << "Print Admin" << endl;
                    break;
                case 3:
                    cout << "Print Guest" << endl;
                    break;
                case 4:
                    cout << "Exit" << endl;
                    return;
                default:
                    cout << "Invalid Choice" << endl;
                    break;
            }
        }
    }

};

int main()
{
    cout << "Polymorphism example" << endl;

    Admin admin("root", "123456", "admin");
    admin.printUser();
    Utils utils;
    utils.getMemoryAddress(admin.username);
    utils.ConsoleWhileloopMenu();
    return 0;
}