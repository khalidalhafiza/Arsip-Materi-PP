#include <iostream>
using namespace std;

int main() {
    int angka1, angka2;
    char operasi;

    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukkan angka kedua : ";
    cin >> angka2;
    cout << "Masukkan jenis operasi (+, -, *, /) : ";
    cin >> operasi;
    
    if (operasi == '+') {
        cout << "Hasil = " << angka1 + angka2;
    } else if (operasi == '-') {
        cout << "Hasil = " << angka1 - angka2;
    } else if (operasi == '*') {
        cout << "Hasil = " << angka1 * angka2;
    } else if (operasi == '/') {
        if (angka2 != 0) {
            cout << "Hasil = " << angka1 / angka2;
        } else {
            cout << "Pembagi tidak boleh bernilai 0";
        }
    } else {
        cout << "Operasi tidak valid";
    }

    return 0;
}
