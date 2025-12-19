#include <iostream>     // Library untuk input-output (cout, cin)
using namespace std;

int main() {
    int angka1, angka2; // Variabel untuk menyimpan dua angka input
    char operasi;       // Variabel untuk menyimpan jenis operasi (+, -, *, /)

    // Meminta angka pertama dari user
    cout << "Masukkan angka pertama : ";
    cin >> angka1;

    // Meminta angka kedua dari user
    cout << "Masukkan angka kedua : ";
    cin >> angka2;

    // Meminta jenis operasi dari user
    cout << "Masukkan jenis operasi (+, -, *, /) : ";
    cin >> operasi;

    // Mengecek operasi yang diminta user
    if (operasi == '+') {
        // Jika operasi penjumlahan
        cout << "Hasil = " << angka1 + angka2;

    } else if (operasi == '-') {
        // Jika operasi pengurangan
        cout << "Hasil = " << angka1 - angka2;

    } else if (operasi == '*') {
        // Jika operasi perkalian
        cout << "Hasil = " << angka1 * angka2;

    } else if (operasi == '/') {
        // Jika operasi pembagian, cek dulu apakah pembagi 0
        if (angka2 != 0) {
            // Jika pembagi tidak nol, lakukan pembagian
            cout << "Hasil = " << angka1 / angka2;
        } else {
            // Jika pembagi nol, tampilkan pesan error
            cout << "Pembagi tidak boleh bernilai 0";
        }

    } else {
        // Jika user memasukkan simbol operasi yang tidak valid
        cout << "Operasi tidak valid";
    }

    return 0; // Mengakhiri program
}
