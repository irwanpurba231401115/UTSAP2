#include <iostream>

using namespace std;

int jumlahKuadratGanjil(int n) {
    int total = 0;
    for (int i = 1; i <= n; i += 2) {
        total += i * i;
    }
    return total;
}

int main() {
    int n;

    cout << "Masukkan nilai n: ";
    cin >> n;

    int hasil = jumlahKuadratGanjil(n);

    cout << "n : " << n << " = " << hasil << endl;

    return 0;
}