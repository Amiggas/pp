#include <iostream>
using namespace std;

int main() {
  
    cout << "For loop (counting 1 to 3):" << endl;
    for (int i = 1; i <= 3; i++) {
        cout << i << endl;
    }

  
    cout << "While loop (counting 1 to 3):" << endl;
    int j = 1;
    while (j <= 3) {
        cout << j << endl;
        j++;
    }

   
    cout << "Do/while loop (counting 1 to 3):" << endl;
    int k = 1;
    do {
        cout << k << endl;
        k++;
    } while (k <= 3);

    return 0;
}
