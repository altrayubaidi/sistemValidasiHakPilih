#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char adminMenuSelect, adminMenuReturn;

    do
    {
        system("cls");
        cout << "Menu Admin : \n";
        cout << "1. Input Data\n";
        cout << "2. Lihat Data\n";
        cout << "3. Riwayat Voting\n";
        cout << "4. Exit\n";
        cout << "Pilih Menu : ";
        cin >> adminMenuSelect;
        switch (adminMenuSelect)
        {
        case '1':
            system("cls");
            cout << "oke";
            cout << "\nKembali ke menu admin?(y/n) ";
            cin >> adminMenuReturn;
            break;

        case '2':
            system("cls");
            cout << "eko";
            cout << "\nKembali ke menu admin?(y/n) ";
            cin >> adminMenuReturn;
            break;     

        case '3':
            system("cls");
            cout << "keo";
            cout << "\nKembali ke menu admin?(y/n) ";
            cin >> adminMenuReturn;
            break;             

        default:
            cout << "Program Exit";
            adminMenuReturn = 'n';
            break;
        }
    } while (adminMenuReturn == 'y' || adminMenuReturn == 'Y');
    cout << "Program Exit";
    exit(1);
}