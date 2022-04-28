// function
#include <iostream>
using namespace std;
using std::cout;
int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
string names[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void myFunction()
{
    cout << "Hello World!" << endl;
}

void myFunction2(int a, int b)
{
    cout << "Total: " << a + b << endl;
}

void CallbackParam(int a, int b, void (*callback)(int, int))
{
    callback(a, b);
}

void NumbersPrint(int arr[], int size){
    for(int i = 0; i < 10; i++){
        cout << arr[i] << endl;
    }
}

void StringsPrint(string arr[], int size){
    for(int i = 0; i < 10; i++){
        cout << arr[i] << endl;
    }
}

void OddNumbersPrint(int arr[], int size){
    for(int i = 0; i < 10; i++){
        if(arr[i] % 2 == 1){
            cout << arr[i] << endl;
        }
    }
}

void EvenNumbersPrint(int arr[], int size){
    for(int i = 0; i < 10; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << endl;
        }
    }
}


int main(){
    myFunction();
    myFunction2(10, 20);
    CallbackParam(10, 20, myFunction2);
    NumbersPrint(numbers, 10);
    StringsPrint(names, 10);
    EvenNumbersPrint(numbers, 10);
    OddNumbersPrint(numbers, 10);
    return 0;
}