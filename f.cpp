#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "\n\tWelcome, \"" << name << "\"!\n";
    cout << "This is an example with special characters like \\n and \\t." << endl;

    return 0;
}
