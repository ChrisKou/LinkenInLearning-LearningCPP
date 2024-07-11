// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    auto a = 2;
    auto b = 1515151551515;
    auto c = 4.99f;
    auto d = 4.99;
    auto e = false;
    auto f = 'f';
    auto g = "I like cheese";

    cout << "Variable a type is: " << typeid(a).name() << endl;
    cout << "Variable a type is: " << typeid(b).name() << endl;
    cout << "Variable a type is: " << typeid(c).name() << endl;
    cout << "Variable a type is: " << typeid(d).name() << endl;
    cout << "Variable a type is: " << typeid(e).name() << endl;
    cout << "Variable a type is: " << typeid(f).name() << endl;
    cout << "Variable a type is: " << typeid(g).name() << endl;

    cout << endl << endl;
    return (0);
}
