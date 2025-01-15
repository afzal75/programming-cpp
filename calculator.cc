#include <iostream>

using namespace std;
/**
 * This program reads an integer input from the user, representing a score,
 * and outputs the corresponding grade based on the following scale:
 * 
 * - 95 to 100: A+
 * - 90 to 94: A
 * - 80 to 89: B   
 * - 70 to 79: C
 * - 60 to 69: D
 * - Below 60: F
 */
int main () {
    int number = 98;
    cin>> number;

    if(number >= 95 && number <= 100) {
        cout << "A+";
    }
    else if(number >= 90 && number <=94) {
        cout << "A";
    }
    else if(number >= 80 && number <= 89){
        cout << "B";
    }
    else if (number >= 70 && number <= 79){
        cout << "C";
    }
    else if(number >= 60 && number <= 69){
        cout << "D";
    } 
    else if(number >= 0 && number <= 59){
        cout << "F";
    }
    return 0;
}