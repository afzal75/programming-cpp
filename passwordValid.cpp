#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class PasswordChecker {
private:
    static const int MIN_LENGTH = 8;
    static const int MAX_LENGTH = 20;
    
public:
    bool checkPassword(const string& password) {
        if (!checkLength(password)) {
            cout << "পাসওয়ার্ড " << MIN_LENGTH << " থেকে " << MAX_LENGTH << " অক্ষরের মধ্যে হতে হবে।" << endl;
            return false;
        }
        
        if (!hasUpperCase(password)) {
            cout << "পাসওয়ার্ডে কমপক্ষে একটি বড় হাতের অক্ষর থাকতে হবে।" 
            << endl;
            return false;
        }
        
        if (!hasLowerCase(password)) {
            cout << "পাসওয়ার্ডে কমপক্ষে একটি ছোট হাতের অক্ষর থাকতে হবে।" 
            << endl;
            return false;
        }
        
        if (!hasDigit(password)) {
            cout << "পাসওয়ার্ডে কমপক্ষে একটি সংখ্যা থাকতে হবে।" << endl;
            return false;
        }
        
        if (!hasSpecialChar(password)) {
            cout << "পাসওয়ার্ডে কমপক্ষে একটি বিশেষ চিহ্ন থাকতে হবে (!@#$%^&*)।" << endl;
            return false;
        }
        
        return true;
    }
    
private:
    bool checkLength(const string& password) {
        return password.length() >= MIN_LENGTH && password.length() <= MAX_LENGTH;
    }
    
    bool hasUpperCase(const string& password) {
        return any_of(password.begin(), password.end(), ::isupper);
    }
    
    bool hasLowerCase(const string& password) {
        return any_of(password.begin(), password.end(), ::islower);
    }
    
    bool hasDigit(const string& password) {
        return any_of(password.begin(), password.end(), ::isdigit);
    }
    
    bool hasSpecialChar(const string& password) {
        string specialChars = "!@#$%^&*";
        return any_of(password.begin(), password.end(), 
            [&specialChars](char c) { return specialChars.find(c) != string::npos; });
    }
};

int main() {
    PasswordChecker checker;
    string password;
    
    cout << "পাসওয়ার্ড নিয়মাবলী:" << endl;
    cout << "১। ৮-২০টি অক্ষর" << endl;
    cout << "২। কমপক্ষে একটি বড় হাতের অক্ষর" << endl;
    cout << "৩। কমপক্ষে একটি ছোট হাতের অক্ষর" << endl;
    cout << "৪। কমপক্ষে একটি সংখ্যা" << endl;
    cout << "৫। কমপক্ষে একটি বিশেষ চিহ্ন (!@#$%^&*)" << endl;
    
    while (true) {
        cout << "\nপাসওয়ার্ড লিখুন (প্রোগ্রাম বন্ধ করতে 'exit' লিখুন): ";
        getline(cin, password);
        
        if (password == "exit") {
            break;
        }
        
        if (checker.checkPassword(password)) {
            cout << "অভিনন্দন! আপনার পাসওয়ার্ড সঠিক।" << endl;
        }
    }
    
    return 0;
}