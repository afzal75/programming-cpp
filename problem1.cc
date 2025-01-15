// Write a program that checks if a number entered by the user is positive, negative, or zero.

#include <iostream>

using namespace std;

int main () {
    double number;

    cout << "Enter a number: ";
    cin >> number;

    if(number > 0) {
        cout << "The number is positive." << endl;
    }
    else if(number < 0) {
        cout << "The nunber is negative." << endl;
    }
    else{
        cout << "The number is zero." << endl;
    }
}