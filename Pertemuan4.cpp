#include <iostream>
using namespace std;

int main() {
    cout << "For loop output:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nilai i = " << i << " ";
    }
    cout << endl;
    
    cout << "While loop output:" << endl;
    int a = 0;
    while (a < 5) {
        cout << "Nilai a = " << a << " ";
        a++;
    }
    cout << endl;
    
    cout << "Do-while loop output:" << endl;
    int b = 0;
    do {
        cout << "Nilai b = " << b << " ";
        b++;
    } while (b < 5);
    cout << endl;
    
    cout << "Penggunaan continue di for loop:" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        cout << "Nilai i = " << i << " ";
    }
    cout << endl;
    
    cout << "Penggunaan break di for loop:" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;
        }
        cout << "Nilai i = " << i << " ";
    }
    cout << endl;
    
    cout << "Program Selesai." << endl;
    return 0;
}
