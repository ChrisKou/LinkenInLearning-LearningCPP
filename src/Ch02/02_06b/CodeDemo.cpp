// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>
using namespace std;

#define MILES 50
#define DEBUG

int main(){
    int distance_to_work = MILES;
    int current_distance = 15;

    cout << "My place of work is " << distance_to_work << " miles away from home." << endl;
    cout << "I've already driven " << current_distance << " miles towards my place of work." << endl;

#ifdef DEBUG
    cout << "[Performing subtraction now]" << endl;
#endif

    distance_to_work -= current_distance;

    cout << "I have " << distance_to_work << " miles remaining until I reach my place of work." << endl;

    cout << endl << endl;
    return (0);
}
