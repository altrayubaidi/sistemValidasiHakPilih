#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    char dataListMenuSelect, dataListMenuReturn;

    do
    {
        system("cls");
        cout << "Menu Lihat Data : \n";
        cout << "1. Lihat Data Seluruh Penduduk\n";
        cout << "2. Lihat Data Penduduk 17 Tahun Ke Atas\n";
        cout << "3. Exit\n";
        cout << "Pilih Menu : ";
        cin >> dataListMenuSelect;
        switch (dataListMenuSelect)
        {
        case '1':
            system("cls");
            cout << "oke";
            cout << "\nKembali ke menu lihat data(y/n) ";
            cin >> dataListMenuReturn;
            break;

        case '2':
            system("cls");
            cout << "eko";
            cout << "\nKembali ke menu lihat data(y/n) ";
            cin >> dataListMenuReturn;
            break;      

        default:
            cout << "Program Exit";
            dataListMenuReturn = 'n';
            break;
        }
    } while (dataListMenuReturn == 'y' || dataListMenuReturn == 'Y');
    cout << "Program Exit";
    exit(1);
}