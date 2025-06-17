#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    string pass;
    cout << "Input a password (not less than 6 characters): ";
    cin >> pass;

    if (pass.size() >= 6) {
        cout << "Password accepted." << endl;
    } else {
        cout << "Password is too short." << endl;
    }

    return 0;
}
