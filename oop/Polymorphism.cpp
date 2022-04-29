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

int main()
{
    cout << "Polymorphism example" << endl;

    Admin admin("root", "123456", "admin");
    admin.printUser();
    return 0;
}