#include <iostream>
using namespace std;

int main() {
    cout << "Playing the song .....";

    for (int i = 0; i < 10; i++) {
        if (i == 3) {
            cout << "Shut up, my mom's calling..." << endl; 
            continue; 
        }

        if (i == 6) {
            cout << "Mom said enough music! "<< endl ; 
            break; 
        }

        cout << "Beat drop " << i << endl;
    }

    return 0;
}
