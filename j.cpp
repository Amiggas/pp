#include <iostream>
#include <string>
using namespace std;

int main() {
    int song;

    cout << "Enter the number (0 to 3): ";
    cin >> song;

    if (song > 0 && song < 2) {
        cout << "To all the days we were together\n"
             << "To all the time we were apart\n"
             << "Of each other's lives, heart to heart\n"
             << "And so I had a late arrival\n"
             << "So we never saw the start\n"
             << "Of each other's lives, heart to heart" << endl;
    } else if (song == 2) {
        cout << "And though it seems so quick and easy\n"
             << "Sentimentally assumed\n"
             << "Walking parallels, heart to heart\n"
             << "To all the days we were together\n"
             << "To all the time we played apart\n"
             << "In each other's lives, heart to heart" << endl;
    } else if (song == 3) {
        cout << "Heart to heart, heart to heart\n"
             << "Heart to heart, heart to heart\n"
             << "Heart to heart, heart to heart\n"
             << "Heart to heart, heart to heart" << endl;
    } else {
        cout << "Error: Invalid number." << endl;
    }

    return 0;
}

