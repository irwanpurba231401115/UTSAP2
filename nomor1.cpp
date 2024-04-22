#include <iostream>
#include <string>

using namespace std;

char hitungNilaiHuruf(float nilai) {
    if (nilai >= 85) return 'A';
    else if (nilai >= 70) return 'B';
    else if (nilai >= 60) return 'C';
    else if (nilai >= 50) return 'D';
    else return 'E';
}

int main() {
    string nama, nim, kom, mataKuliah, dosenPA;
    float nilaiTugas, nilaiQuis, nilaiUTS, nilaiUAS;

    cout << "Masukkan Nama Anda: ";
    getline(cin, nama);
    cout << "Masukkan NIM Anda: ";
    getline(cin, nim);
    cout << "Masukkan KOM Anda: ";
    getline(cin, kom);
    cout << "Masukkan Mata Kuliah Anda: ";
    getline(cin, mataKuliah);
    cout << "Masukkan Nilai Tugas Anda: ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai Quis Anda: ";
    cin >> nilaiQuis;
    cout << "Masukkan Nilai UTS Anda: ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS Anda: ";
    cin >> nilaiUAS;
    cin.ignore(); 
    cout << "Masukkan Nama Dosen PA Anda: ";
    getline(cin, dosenPA);

    float nilaiAkhir = (nilaiTugas + nilaiQuis + nilaiUTS + nilaiUAS) / 4;

    char nilaiHuruf = hitungNilaiHuruf(nilaiAkhir);

    cout << "\nData Mahasiswa:\n";
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "KOM: " << kom << endl;
    cout << "Mata Kuliah: " << mataKuliah << endl;
    cout << "Nilai: " << nilaiHuruf << endl;
    cout << "Dosen PA: " << dosenPA << endl;

    return 0;
}