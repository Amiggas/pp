#include <iostream>
#include <string>

using namespace std;

int main() {
   
    string greeting1 = "Hello" ;
    char greeting2[] = "Hello" ;

    
    string myString = "Hello" ;
    cout << "First character of myString: " << myString[0] << endl;

   
    string name;
    cout << "\nEnter your full name: ";
    getline(cin, name);

    cout << "\n\tWelcome, \"" << name << "\"!" << endl;
    cout << "C++ string greeting: " << greeting1 << endl;
    cout << " C-style string greeting: " << greeting2 << endl;

    return 0;
}
