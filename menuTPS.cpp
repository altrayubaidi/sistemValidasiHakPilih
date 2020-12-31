#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int ruangtps = 0, tps, choose;
    char loops;
    do{
    cout << "Ruang TPS Kelurahan XXX" << endl;
    cout << "1. Buat TPS baru" << endl;
    cout << "2. Pilih TPS yang telah ada" << endl;
    cout << "Masukkan pilihan anda : "; cin >> choose;
    switch(choose){
        case 1:
            cout << "Masukkan berapa TPS yang ingin anda buat : "; cin >> ruangtps;
            cout << "Kembali ke menu TPS?(y/n) : "; cin >> loops;
            break;
        case 2:
            if(ruangtps == 0){
                cout << "Silahkan buat ruang TPS terlebih dahulu.";
            }
            else{
                cout << "Silahkan pilih TPS yang tersedia : " << endl;
                for(int i = 0; i < ruangtps; i++){
                    cout << "TPS " << i+1 << endl;
                }
                cout << "Pilih TPS : "; cin >> tps;
            }
            cout << "Kembali ke menu TPS?(y/n) : "; cin >> loops;
            break;
        default:
            loops = 'n';
            break;
    }
    }while(loops == 'y' || loops  == 'Y');
}