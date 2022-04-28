// object oriented programming tutorial 2
#include <iostream>
#include <fstream>
using namespace std;
using std::cout;
using std::string;

class MyClass
{
public:
    string name;
    void getFullName();
    void printArrayItems(int arr[], int size);
    void readFile(string filename);
    void writeFile(string filename);
    void appendFile(string filename);
};

// function defined outside of class
void MyClass::getFullName()
{
    cout << "Full Name: " << this->name << endl;
}

void MyClass::readFile(string filename)
{
    ifstream myfile(filename);
    string line;
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close();
    }
    else
    {
        cout << "Unable to open file";
    }
}

void MyClass::appendFile(string filename)
{
    ofstream myfile;
    myfile.open(filename, ios::app);
    if (myfile.is_open())
    {
        myfile << "This is a new line" << endl;
        myfile.close();
    }
    else
    {
        cout << "Unable to open file";
    }
}

void MyClass::writeFile(string filename)
{
    ofstream myfile(filename);
    if (myfile.is_open())
    {
        myfile << "Test message \n";
        myfile.close();
    }
    else
    {
        cout << "Unable to open file";
    }
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
    myObj.readFile("readme.txt");
    myObj.writeFile("write.txt");
    myObj.appendFile("write.txt");
    return 0;
}