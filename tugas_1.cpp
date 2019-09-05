#include <iostream>
using namespace std;

int main() {
    char nim[12];
    char nama[20];
    char alamat[50];
    int usia;
    float ipk;

    cout << "Nim : ";
    cin.getline(nim, 12);

    cout << "Nama : ";
    cin.getline(nama, 20);

    cout << "Alamat : ";
    cin.getline(alamat, 50);

    cout << "Usia : ";
    cin >> usia;

    cout << "Ipk : ";
    cin >> ipk;

    cout << endl << endl;

    cout << "==========BIODATA==========" << endl;
    cout << "NIM        : " << nim << endl;
    cout << "NAMA       : " <<  nama << endl;
    cout << "ALAMAT     : " << alamat << endl;
    cout << "USIA       : " << usia << endl;
    cout << "IPK        : " << ipk << endl;
    cout << "===========================" << endl;
}

