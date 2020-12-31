#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int choose;
    char loops;
    do{
        cout << "Menu : " << endl;
        cout << "1. Sorting berdasarkan NIK" << endl;
        cout << "2. Sorting berdasarkan huruf" << endl;
        cout << "3. Sorting berdasarkan usia" << endl;
        cout << "Pilihan : "; cin >> choose;
        cout << endl;
        switch(choose){
            case 1:
                cout << "Program Sorting berdasarkan NIK" << endl;
                 cout << "Kembali ke menu sorting?(y/n) : "; cin >> loops;
                break;
            case 2:
                cout << "Program Sorting berdasarkan Huruf" << endl;
                 cout << "Kembali ke menu sorting?(y/n) : "; cin >> loops;
                break;
            case 3:
                cout << "Program Sorting berdasarkan Usia" << endl;
                 cout << "Kembali ke menu sorting?(y/n) : "; cin >> loops;
                break;
            default:
                loops = 'n';
                break;
        }
    }while (loops == 'y' || loops  == 'Y');
}