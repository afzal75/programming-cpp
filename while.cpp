#include <iostream>

using namespace std;

int main () {
    // counter
    int counter = 1;
    while (counter <= 5) {
        cout <<counter;
        counter++;
    }
    cout<< endl;
    cout<< counter << endl;
    counter = counter + 1;
    counter++;
    cout<< counter << endl;
    return 0;

}