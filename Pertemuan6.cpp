#include <iostream>
using namespace std;

int main() {

    // ==============================================================
    // 1. INPUT ARRAY
    // ==============================================================

    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int data[n];

    // Input elemen array dari pengguna
    cout << "Masukkan " << n << " angka:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }


    // ==============================================================
    // 2. BUBBLE SORT
    //    Algoritma untuk mengurutkan data secara ascending (kecil → besar)
    // ==============================================================

    // Bubble sort bekerja dengan cara menukar (swap) elemen secara berulang
    // selama elemen sebelumnya lebih besar dari elemen berikutnya.
    for (int i = 0; i < n - 1; i++) {

        // Loop ini untuk membandingkan elemen-berurutan
        for (int j = 0; j < n - i - 1; j++) {

            // Jika elemen saat ini > elemen berikutnya, maka ditukar
            if (data[j] > data[j + 1]) {

                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;

            }
        }
    }

    cout << "\nData setelah diurutkan (Bubble Sort): ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;


    // ==============================================================
    // 3. SEQUENTIAL SEARCH
    //    Algoritma untuk mencari nilai dalam array
    // ==============================================================

    int cari;
    cout << "\nMasukkan angka yang ingin dicari: ";
    cin >> cari;

    bool ditemukan = false;   // penanda apakah data ditemukan
    int posisi = -1;          // menyimpan posisi indeks jika ditemukan

    // Sequential search: periksa satu per satu dari indeks 0 → n-1
    for (int i = 0; i < n; i++) {

        // Jika elemen array sama dengan angka yg dicari
        if (data[i] == cari) {
            ditemukan = true;
            posisi = i;       // simpan posisi indeks
            break;           // hentikan pencarian
        }
    }

    // Menampilkan hasil pencarian
    if (ditemukan) {
        cout << "Angka " << cari << " ditemukan pada indeks ke-"
            << posisi << " (urutan ke-" << posisi + 1 << ")" << endl;
    } else {
        cout << "Angka " << cari << " TIDAK ditemukan dalam array." << endl;
    }

    return 0;
}
