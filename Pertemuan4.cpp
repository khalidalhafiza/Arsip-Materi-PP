#include <iostream> // Library untuk input-output
using namespace std;

int main() {
    // -----------------------------
    // Contoh penggunaan for loop
    // -----------------------------
    cout << "For loop output:" << endl;

    // Perulangan dimulai dari i = 0 sampai i < 5
    for (int i = 0; i < 5; i++) {
        // Menampilkan nilai i setiap iterasi
        cout << "Nilai i = " << i << " ";
    }
    cout << endl;

    // -----------------------------
    // Contoh penggunaan while loop
    // -----------------------------
    cout << "While loop output:" << endl;

    int a = 0; // Inisialisasi variabel a

    // Perulangan while berjalan selama kondisi a < 5 bernilai true
    while (a < 5) {
        cout << "Nilai a = " << a << " "; // Menampilkan nilai a
        a++; // Menambah nilai a tiap iterasi agar loop tidak berjalan selamanya
    }
    cout << endl;

    // -----------------------------
    // Contoh penggunaan do-while loop
    // -----------------------------
    cout << "Do-while loop output:" << endl;

    int b = 0; // Inisialisasi variabel b

    // Do-while menjalankan perintah minimal sekali sebelum mengecek kondisi
    do {
        cout << "Nilai b = " << b << " "; // Menampilkan nilai b
        b++; // Menambah nilai b
    } while (b < 5); // Kondisi pengecekan setelah perintah dijalankan
    cout << endl;

    // -----------------------------
    // Contoh penggunaan continue
    // -----------------------------
    cout << "Penggunaan continue di for loop:" << endl;

    for (int i = 0; i < 10; i++) {
        // Jika nilai i adalah 5, skip (lewati) iterasi ini
        if (i == 5) {
            continue; // Melanjutkan ke iterasi berikutnya
        }
        cout << "Nilai i = " << i << " ";
    }
    cout << endl;

    // -----------------------------
    // Contoh penggunaan break
    // -----------------------------
    cout << "Penggunaan break di for loop:" << endl;

    for (int i = 0; i < 10; i++) {
        // Jika i bernilai 5, hentikan seluruh loop
        if (i == 5) {
            break; // Keluar dari perulangan
        }
        cout << "Nilai i = " << i << " ";
    }
    cout << endl;

    // -----------------------------
    // Program selesai
    // -----------------------------
    cout << "Program Selesai." << endl;

    return 0; // Mengakhiri program
}
