// Object Oriented Programming Tutorial 1

#include <iostream>
using namespace std;

class MyClass
{
public:
    int age;
    int birthyear;
    string name;

    MyClass(int age, int birthyear, string name)
    {
        this->age = age;
        this->birthyear = birthyear;
        this->name = name;
    }

    void setAge(int age)
    {
        this->age = age;
    }
    void getAge()
    {
        cout << "Age: " << this->age << endl;
    }

    void setName(string name)
    {
        this->name = name;
    }
    void getName()
    {
        cout << "Name: " << this->name << endl;
    }

    void setBirthYear(int birthyear)
    {
        this->birthyear = birthyear;
    }

    void getBirthYear()
    {
        cout << "Birth Year: " << this->birthyear << endl;
    }

    void print()
    {
        cout << "Age: " << this->age << endl;
        cout << "Name: " << this->name << endl;
        cout << "Birth Year: " << this->birthyear << endl;
    }

    ~MyClass()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    MyClass myclass(10, 1991, "Muhittin");
    // myclass.age = 20;
    // myclass.birthyear = 1991;
    // myclass.name = "Muhittin";
    // cout << myclass.age << endl;
    // cout << myclass.birthyear << endl;
    // cout << myclass.name << endl;
    myclass.print();
    return 0;
}