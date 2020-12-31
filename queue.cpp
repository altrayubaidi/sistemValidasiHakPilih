#include <iostream>
#include <malloc.h>
#include <string.h>
using namespace std;

/* 
 * Inisialisasi tipe data struct
 * untuk queue penerima paket  
 */
struct receiver
{
    string name, address;
    int distance;
    receiver *next;
};
receiver *first, *last;

/* 
 * Deklarasi fungsi untuk
 * membuat sebuah queue
 */
void create() {
    first = NULL;
    last = first;
}

/* 
 * Deklarasi fungsi untuk menyisipkan
 * sebuah data ke dalam queue list
 */
void enqueue(string newName, string newAddress, int newDistance) {
    receiver *newReceiver;
    bool eligible = false; //validator data yang akan disisipkan
    newReceiver = new ((receiver *)malloc(sizeof(receiver))) receiver; //alokasi memori agar dapat menggunakan tipe data string
    newReceiver->name = newName;
    newReceiver->address = newAddress;
    newReceiver->distance = newDistance;
    if (first == NULL)
    {
        first = newReceiver;
        eligible = true;
    } else {
        if (newDistance >= last->distance)
        {
            last->next = newReceiver;    
            eligible = true;
        }        
    }
    if (eligible)
    {    
        last = newReceiver;
        last->next = NULL;
    } else
    {
        cout << "Jarak terlalu pendek dari jarak sebelumnya, data tidak akan dimasukkan\n";
    }
    
}

/* 
 * Deklarasi fungsi untuk menghapus sebuah 
 * data dari queue list, akan me-return 
 * distance yang telah dioperasikan
 * dengan distance queue pertama
 */
int dequeue(int distance) {
    receiver *deleteReceiver;
    if (first == NULL)
    {
        cout << "Tidak ada paket untuk dikirim\n";
    } else {
        if (distance >= first->distance)
        {       
            distance -= first->distance; 
            deleteReceiver = first;
            first = deleteReceiver->next;
            free(deleteReceiver);
            cout << "Paket berhasil terkirim\n";
            return distance;
        } else {
            cout << "Bensin tidak cukup untuk jarak yang akan ditempuh\n";
            return distance;
        }
    }    
}

/* 
 * Deklarasi fungsi untuk mencetak  
 * data queue list yang tersedia 
 */
void print() {
    receiver *helper;
    helper = first;
    int iterator = 1;
    if (first == NULL)
    {
        cout << "Belum ada penerima yang diinput\n\n";
    } else {
        while (helper != NULL) 
        {
            cout << "\nPenerima Ke-" << iterator << endl;
            cout << "Nama : " << helper->name << endl;
            cout << "Alamat : " << helper->address << endl;
            cout << "Jarak : " << helper->distance << endl;
            helper = helper->next;
            iterator++;
        }   
    }     
}

/* 
 * Deklarasi fungsi untuk menangani  
 * menu input data-data penerima
 */
void inputReceiverMenu() {
    int totalReceiver ,distance;
    string name, address;
    cout << "Masukkan jumlah penerima : ";
    cin >> totalReceiver;
    cin.ignore();
    for (int i = 0; i < totalReceiver; i++)
    {
        cout << "\nPenerima " << i + 1 << endl;
        cout << "Nama Penerima : ";
        getline(cin, name);
        cout << "Alamat Penerima : ";
        getline(cin, address);
        cout <<  "Jarak : ";
        cin >> distance;
        cin.ignore();
        enqueue(name, address, distance);
    }
    
}