#include <iostream>
#include <string>

using namespace std;

int main() {
    int pilihan;
    string namaPresiden;

    cout << "Daftar Calon Presiden:\n";
    cout << "1. Susilo Bambang Yudhoyono\n";
    cout << "2. Joko Widodo\n";
    cout << "3. Prabowo Subianto\n";

    cout << "Masukkan Nomor Presiden Pilihan Anda: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            namaPresiden = "Susilo Bambang Yudhoyono";
            break;
        case 2:
            namaPresiden = "Joko Widodo";
            break;
        case 3:
            namaPresiden = "Prabowo Subianto";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            return 1;
    }

    cout << "Pilihan Anda telah disimpan, pilihan Anda adalah " << pilihan << ". " << namaPresiden << endl;

    return 0;
}