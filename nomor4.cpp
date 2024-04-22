#include <iostream>
#include <cstdlib> // Library untuk menggunakan fungsi system("CLS")
using namespace std; // Menggunakan namespace std agar tidak perlu menuliskan std:: sebelum cin, cout, dll.

int main () {
    system("CLS"); // Menggunakan fungsi system("CLS") untuk membersihkan layar

    string a;

    umur: // Menambahkan label untuk goto statement

    int umur; // Mendeklarasikan variabel umur

    cout << "Tebak Umur Saya : "; // Menambahkan titik koma (;) di akhir statement
    cin >> umur; // Menggunakan cin untuk mengambil input umur dari pengguna dan menyimpannya ke dalam variabel umur

    if (umur == 19){ // Menggunakan operator perbandingan (==) untuk memeriksa kesamaan nilai
        cout << "Jawaban Anda Benar" << endl;
    } else { // Menghapus else if karena tidak ada kondisi yang diperlukan setelahnya
        cout << "Jawaban Salah, Coba Lagi..." << endl;
        goto umur; // Menggunakan goto statement untuk kembali ke label umur jika jawaban salah
    }
    
    cout << "Program Selesai";

    return 0;
}