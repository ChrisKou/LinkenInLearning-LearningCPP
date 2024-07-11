// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

int main(){
    int qty_of_people;
    cout << "Please enter the quantity of people you'll be entering in the system, up to 10.\n"
    << "Quantity: ";
    cin >> qty_of_people;
    cout << endl;
    
    string name[10];
    int age[10];

    //Get the info for each individual
    int i = 1;
    while (i <= qty_of_people)
    {
        cout << "Enter the first name of person " << i << ": ";
        cin >> name[i-1];

        cout << "Enter the age of person " << i << ": ";
        cin >> age[i-1];
        cout << endl;

        i += 1;
    }

    cout << endl << "-------------------------------------------------" << endl << endl;
    cout << "The " << qty_of_people << " individuals entered are:" << endl << endl;
    
    //Display the info for each individual entered
    i = 0;
    while (i < qty_of_people)
    {
        cout << name[i] << endl;
        cout << "Age: " << age[i] << endl << endl;

        i += 1;
    }

    cout << endl << endl;
    return (0);
}
