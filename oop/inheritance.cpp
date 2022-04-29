// Inheritance example

#include <iostream>
using namespace std;


class User {
public:
    string username;
    string password;
    int permission;
    
    User(string username, string password, int permission) {
        this->username = username;
        this->password = password;
        this->permission = permission;
    }

    void print() {
        cout << "Username: " << username << endl;
        cout << "Password: " << password << endl;
        cout << "Permission: " << permission << endl;
    }


    int is_admin() {
        return permission == 1;
    }

    int is_user() {
        return permission == 0;
    }

    int is_guest() {
        return permission == -1;
    }

    void print_permission() {
        if (is_admin()) {
            cout << "Admin" << endl;
            print();
        } else if (is_user()) {
            cout << "User" << endl;
            print();
        } else if (is_guest()) {
            cout << "Guest" << endl;
            print();
        }
    }



};


class Users : public User {
public:
    Users(string username, string password, int permission) : User(username, password, permission) {
    }
    
    void f() {
        cout << "Derived::f()" << endl;
    }
};

int main() {
    Users u("user", "pass", 0);
    Users a("admin", "pass", 1);
    u.is_admin();
    u.is_user();
    u.is_guest();
    u.print_permission();
    a.print_permission();
    return 0;
}