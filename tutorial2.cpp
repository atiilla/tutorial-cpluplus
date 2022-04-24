#include <iostream>
#include <string>
using namespace std;
using std::string;
using std::cout;
using std::endl;
using std::cerr;
using std::cin;
using std::flush;
int main(){
    string myStudents[5] = {"John", "Paul", "George", "Ringo", "Pete"};
    int index=0;

    // while loop 
    while(sizeof(myStudents) >= 0){

        if(myStudents[index] == "John"){
            cout << "John is in the class" << endl;
        }
        else{
            cout << "John is not in the class" << endl;
        }
        cout << myStudents[index] << endl;
        index++;
    }

    // for loop
    for(int i=0; i<sizeof(myStudents); i++){
        
        if(myStudents[i] == "John"){
            cout << "John is in the class" << endl;
        }
        else{
            cout << "John is not in the class" << endl;
        }
        cout << myStudents[i] << endl;
    }

    // do while loop
    do{
        cout << myStudents[index] << endl;
        index++;
    }while(sizeof(myStudents) >= 0);
    
    return 0;
}