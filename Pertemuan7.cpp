#include <iostream>
using namespace std;

// ===============================================================
// FUNCTION VOID
// Tidak mengembalikan nilai, hanya menjalankan perintah.
// ===============================================================
void sapaPengguna() {
    cout << "Halo! Selamat datang di program function C++" << endl;
}

// ===============================================================
// FUNCTION DENGAN RETURN VALUE
// Mengembalikan nilai (dalam contoh ini tipe int).
// Function ini menjumlahkan dua angka dan mengembalikan hasilnya.
// ===============================================================
int tambah(int a, int b) {
    int hasil = a + b;
    return hasil;   // Mengembalikan nilai ke pemanggil function
}

int main() {

    // Memanggil fungsi void
    sapaPengguna();

    // Memanggil function yang mengembalikan nilai
    int x = 5, y = 7;
    int jumlah = tambah(x, y);

    cout << "Hasil penjumlahan " << x << " + " << y
        << " = " << jumlah << endl;

    return 0;
}
