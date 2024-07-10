// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;

    cout << "Please enter your first name: " << flush;
    cin >> str;

    cout << "You entered: " << str << endl;

    cout << endl << endl;

    return (0);
}
