#include <iostream>

using namespace std;

string pass = "11122";

bool isValid (string password) {
    bool isEqual = password == pass;
    return isEqual;
}

bool is validAge (float age) {
    return age > 10;
}

int main () {

    bool isValidPass = isValid("11122");
    bool isValidRange = isValidAge(18.67);
    bool isNotDisable = true;
    bool specialPass = true;

    if(isValidPass && isValidRange && isNotDisable){
        cout << "Access is Granted";
    }
    else if(specialPass){
        cout << "Special Access Granted";
    }
    else{
        cout << "Access is Denied";
    }
    cout << "checking done";
    return 0;
}