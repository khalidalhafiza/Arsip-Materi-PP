#include <ncurses/ncurses.h>
#include <string>
using namespace std;

int main() {
    int x = 10, y = 10; // posisi awal teks
    int ch;

    // Inisialisasi ncurses
    initscr();          // Memulai mode ncurses

    // Mengaktifkan mode input mentah (menerima input apa adanya)
    raw();

    // Mengaktifkan penangkapan tombol khusus seperti panah
    keypad(stdscr, TRUE);

    // Mencegah karakter yang ditekan muncul di layar
    noecho();

    // Instruksi awal
    mvprintw(0, 0, "Gunakan tombol panah untuk menggerakkan teks. Tekan 'q' untuk keluar.");

    // loop untuk menangani input dan pergerakan
    while ((ch = getch()) != 'q') {
        // Membersihkan layar setiap kali pergerakan terjadi
        clear();

        // Menampilkan instruksi
        mvprintw(0, 0, "Gunakan tombol panah untuk menggerakkan teks. Tekan 'q' untuk keluar.");

        // Memeriksa tombol yang ditekan dan memperbarui posisi
        switch (ch) {
            case KEY_UP:
                y = (y > 0) ? y - 1 : y; // ke atas
                break;
            case KEY_DOWN:
                y = (y < LINES - 1) ? y + 1 : y; // ke bawah
                break;
            case KEY_LEFT:
                x = (x > 0) ? x - 1 : x; // ke kiri
                break;
            case KEY_RIGHT:
                x = (x < COLS - 1) ? x + 1 : x; // ke kanan
                break;
        }

        // Debug posisi
        mvprintw(1, 0, "x: %d", x);
        mvprintw(2, 0, "y: %d", y);
        mvprintw(3, 0, "key: %d", ch);

        // Menampilkan teks di posisi baru
        mvprintw(y, x, "X");

        refresh(); // Perbarui layar
    }

    endwin(); // Kembali ke mode normal terminal
    return 0;
}
