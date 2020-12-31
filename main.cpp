#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char mainMenuSelect, mainMenuReturn;

    do
    {
        system("cls");
        cout << "Sistem Validasi Hak Pilih\n";
        cout << "\nMenu : \n";
        cout << "1. Menu Admin\n";
        cout << "2. Menu Panitia\n";
        cout << "3. Exit\n";
        cout << "Pilih Menu : ";
        cin >> mainMenuSelect;
        switch (mainMenuSelect)
        {
        case '1':
            system("cls");
            cout << "oke";
            cout << "\nKembali ke menu utama?(y/n) ";
            cin >> mainMenuReturn;
            break;

        case '2':
            system("cls");
            cout << "eko";
            cout << "\nKembali ke menu utama?(y/n) ";
            cin >> mainMenuReturn;
            break;           

        default:
            cout << "Program Exit";
            mainMenuReturn = 'n';
            break;
        }
    } while (mainMenuReturn == 'y' || mainMenuReturn == 'Y');
    cout << "Program Exit";
    exit(1);
}