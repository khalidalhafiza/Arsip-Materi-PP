#include <iostream>
using namespace std;

int main() {

    // ============================================================
    // 1. ARRAY 1 DIMENSI – mengakses elemen array menggunakan indeks
    // ============================================================

    int tanggal[12] = {3, 8, 15, 6, 27, 19, 13, 20, 31, 22, 4, 10};

    // Menampilkan elemen array indeks ke-9
    cout << "Tanggal = " << tanggal[9] << endl;


    // Array string berisi nama hari
    string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis",
                      "Jumat", "Sabtu", "Minggu"};

    // Menampilkan hari indeks ke-4 (Jumat)
    cout << "Hari = " << hari[4] << endl << endl;


    // ============================================================
    // 2. ARRAY KARAKTER (char) DAN STRING
    // ============================================================

    char namaP[3] = {'K', 'a', 'i'};
    cout << "Nama panggilan (char) : " << namaP << endl;

    string namaL = "Kai Penakluk Dunia";
    cout << "Nama lengkap (string) : " << namaL << endl << endl;


    // ============================================================
    // 3. PERULANGAN while untuk menampilkan seluruh elemen array hari
    // ============================================================

    int i = 0;
    while (i < 7) { // selama i kurang dari jumlah elemen array hari
        cout << "Hari ke-" << (i + 1) << " : " << hari[i] << endl;
        i++;
    }

    cout << endl;


    // ============================================================
    // 4. MENGHITUNG PANJANG ARRAY menggunakan sizeof
    // ============================================================

    int panjang = sizeof(hari) / sizeof(hari[0]);

    cout << "Panjang array hari adalah : " << panjang << endl;
    cout << "Kai Menaklukkan Dunia dalam " << panjang << " hari." << endl << endl;


    // ============================================================
    // 5. TOTAL & RATA-RATA PENJUALAN CHICKEN KATSU
    // ============================================================

    int jumlahHari = 7;
    int penjualan[jumlahHari];
    int totalPenjualan = 0;
    float rataRata;

    // Input penjualan selama 7 hari
    cout << "Masukkan penjualan porsi Chicken Katsu selama "
        << jumlahHari << " hari:" << endl;

    for (int j = 0; j < jumlahHari; j++) {
        cout << "Penjualan hari " << hari[j] << " = ";
        cin >> penjualan[j];
        totalPenjualan += penjualan[j];
    }

    // Menghitung rata-rata
    rataRata = (float) totalPenjualan / jumlahHari;

    cout << "\nTotal porsi Chicken Katsu terjual : "
        << totalPenjualan << " porsi." << endl;

    cout << "Rata-rata penjualan selama " << jumlahHari
        << " hari : " << rataRata << " porsi." << endl << endl;


    // ============================================================
    // 6. ARRAY 2 DIMENSI (MATRIX)
    // ============================================================

    int matriks[100][100];       // Menyediakan kapasitas 100x100
    int jumlahBaris, jumlahKolom;

    cout << "Masukkan jumlah bulan dan tanggal buka kedai Chicken Katsu:" << endl;

    cout << "Input jumlah bulan (baris matriks) : ";
    cin >> jumlahBaris;

    cout << "Input jumlah tanggal (kolom matriks) : ";
    cin >> jumlahKolom;


    // ===========================
    // Input elemen matriks
    // ===========================

    for (int x = 0; x < jumlahBaris; x++) {
        for (int y = 0; y < jumlahKolom; y++) {
            cout << "Baris " << x + 1 << ", Kolom " << y + 1 << " = ";
            cin >> matriks[x][y];
        }
    }

    cout << "\nKedai Chicken Katsu buka selama : "
        << jumlahBaris << " bulan di tanggal tertentu." << endl;


    // ===========================
    // Output tampilan matriks
    // ===========================

    for (int x = 0; x < jumlahBaris; x++) {
        for (int y = 0; y < jumlahKolom; y++) {
            cout << matriks[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}
