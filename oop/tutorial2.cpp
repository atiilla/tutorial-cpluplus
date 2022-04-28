// object oriented programming tutorial 2
#include <iostream>
using namespace std;
using std::cout;
using std::string;

class MyClass
{
public:
    string name;
    void getFullName();
    void printArrayItems(int arr[], int size);
};

// function defined outside of class
void MyClass::getFullName()
{
    cout << "Full Name: " << this->name << endl;
}

void MyClass::printArrayItems(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
    
}

int main()
{
    MyClass myObj;    // object of class MyClass
    myObj.name = "John Doe";
    myObj.getFullName(); // method call
    int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    myObj.printArrayItems(numbers, 10);
    return 0;
}