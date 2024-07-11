// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

const int QTY_OF_PEOPLE = 3;

int main(){
    string name[QTY_OF_PEOPLE];
    int age [QTY_OF_PEOPLE];

    //Get the info for each individual
    int i = 1;
    while (i <= QTY_OF_PEOPLE)
    {
        cout << "Enter the first name of person " << i << ": ";
        cin >> name[i-1];
        cout << endl;

        cout << "Enter the age of person " << i << ": ";
        cin >> age[i-1];
        cout << endl;

        i += 1;
    }

    cout << endl << "-------------------------------------------------" << endl << endl;
    cout << "The " << QTY_OF_PEOPLE << " individuals entered are:" << endl << endl;
    
    //Display the info for each individual entered
    i = 0;
    while (i < QTY_OF_PEOPLE)
    {
        cout << name[i] << endl;
        cout << "Age: " << age[i] << endl << endl;

        i += 1;
    }

    cout << endl << endl;
    return (0);
}
