#include <iostream>
using namespace std;

int main(){
    cout << "Hello World!\n";
    cout << "c++ tutorial\t"; // Creates a horizontal tab	

    // integers
    int myInt = 5;
    cout << myInt << endl;
    int myInt2 = myInt + 1;
    cout << myInt2 << endl;
    myInt = 10; // assign a new value to myInt

    // floats
    float myFloat = 5.5;
    cout << myFloat << endl;
    float myFloat2 = myFloat + 1;
    cout << myFloat2 << endl;
    myFloat = 10.5; // assign a new value to myFloat

    // doubles
    double myDouble = 5.5;
    cout << myDouble << endl;
    double myDouble2 = myDouble + 1;
    cout << myDouble2 << endl;
    myDouble = 10.5; // assign a new value to myDouble

    // char
    char myChar = 'a';
    cout << myChar << endl;
    char myChar2 = myChar + 1;
    cout << myChar2 << endl;
    myChar = 'z'; // assign a new value to myChar

    // boolean
    bool myBool = true;
    cout << myBool << endl;
    bool myBool2 = myBool + 1;
    cout << myBool2 << endl;
    myBool = false; // assign a new value to myBool

    // string
    string myString = "Hello Friend!";
    cout << myString << endl;
    string myString2 = myString + "!";
    cout << myString2 << endl;
    myString = "Hello Friend!"; // assign a new value to myString

    // arrays
    int myArray[5];
    myArray[0] = 1;
    myArray[1] = 2;
    myArray[2] = 3;
    myArray[3] = 4;
    myArray[4] = 5;
    cout << myArray[0] << endl;
    cout << myArray[1] << endl;
    cout << myArray[2] << endl;
    cout << myArray[3] << endl;
    cout << myArray[4] << endl;

    string studentNames [5] = {"John", "Jane", "Joe", "Jack", "Jill"};
    cout << studentNames[0] << endl;

    

    // pointers
    int *myPointer = &myInt;
    cout << myPointer << endl;
    cout << *myPointer << endl;
    myPointer = &myInt2;
    cout << myPointer << endl;
    cout << *myPointer << endl;

    // structs
    struct myStruct {
        int myInt;
        float myFloat;
        char myChar;
        bool myBool;
        string myString;
    };
    myStruct myStruct1;
    myStruct1.myInt = 1;
    myStruct1.myFloat = 1.5;
    myStruct1.myChar = 'a';
    myStruct1.myBool = true;
    myStruct1.myString = "Hello Friend!";
    cout << myStruct1.myInt << endl;
    cout << myStruct1.myFloat << endl;
    cout << myStruct1.myChar << endl;
    cout << myStruct1.myBool << endl;
    cout << myStruct1.myString << endl;

    return 0;

}

