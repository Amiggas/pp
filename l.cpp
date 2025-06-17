#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int choice;
    cout << "Choose a song:  " << endl ; 
    cout << "1. не танцуй" << endl ; 

    cout << "2.Show Girls" << endl ;
    cout << "Choice: ";
    cin >> choice;


    switch (choice) {
        case 1: {
           
            string Song1[] = {
                "не танцуй, если музыка не качает ",
                "Если сердце вдруг молчит — выключай это всё ",
                "не молчи, если что-то внутри взрывает ",
                "Эти чувства ты не прячь, покажи мне лицо "
            };

            int i = 0;
            cout << " Open Kids :' не танцуй'\n\n";
            while (i < 4) {
                cout << Song1[i] << endl;
                i++;
            }
            break;
        }

        case 2: {
           
            string Song2[] = {
                "Мы show girls — мы shine bright ",
                "Ярче всех — мы взрываем этот вайб ",
                "все на нас — мы в своём стиле ",   // почему не примает большую в и н
                "в этой игре мы как короли "
            };

            int j = 0;
            cout << " Open Kids :'Show Girls'\n\n";
            do {
                cout << Song2[j] << endl;
                j++;
            } while (j < 4);
            break;
        }

        default:
            cout << "No song" << endl;
    }

    return 0;
}
