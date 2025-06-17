#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Choose a part of the song 'I Love You So' (1 to 3): ";
    cin >> choice;

    cout << "Lyrics from 'I Love You So': ";

    switch (choice) {
        case 1:
            cout << "I just need someone in my life to give it structure\n"
             << "To handle all the selfish ways I'd spend my time without her" << endl;
            break;
        case 2:
            cout << "You're breaking me slowly but I've got a good heart\n"
             << "I love you so\n"
             << "I love you so\n"
             << "I love you so" << endl;
            break;
        case 3:
            cout << "I'm gonna pack my things and leave you behind\n"
                << "This feeling's old and I know that I've made up my mind" ; 
    }
}