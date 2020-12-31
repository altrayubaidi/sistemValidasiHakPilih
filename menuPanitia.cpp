#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char choose, loops;

    do
    {
        system("cls");
        cout << "Menu Panitia : \n";
        cout << "1. Lihat Data\n";
        cout << "2. Panggil Nomor Antrian\n";
        cout << "3. Hitung Voting\n";
        cout << "Pilih Menu : ";
        cin >> choose;
        switch (choose)
        {
        case '1':
            system("cls");
            cout << "oke";
            cout << "\nKembali ke menu Panitia?(y/n) ";
            cin >> loops;
            break;

        case '2':
            system("cls");
            cout << "eko";
            cout << "\nKembali ke menu Panitia?(y/n) ";
            cin >> loops;
            break;     

        case '3':
            system("cls");
            cout << "keo";
            cout << "\nKembali ke menu Panitia?(y/n) ";
            cin >> loops;
            break;             

        default:
            cout << "Program Exit";
            loops = 'n';
            break;
        }
    } while (loops == 'y' || loops == 'Y');
    cout << "Program Exit";
    exit(1);
}