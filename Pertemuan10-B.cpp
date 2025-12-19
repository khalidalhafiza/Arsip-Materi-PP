#include <ncurses/curses.h>

// Deklarasi fungsi untuk menampilkan menu
void print_menu(WINDOW *menu_win, int pilihanTerpilih, const char *opsi[], int jumlahOpsi);

int main() {
    // Inisialisasi ncurses
    initscr();          // Mulai mode ncurses
    clear();            // Bersihkan layar
    noecho();           // Jangan tampilkan input pengguna
    cbreak();           // Nonaktifkan buffering input
    curs_set(0);        // Sembunyikan kursor
    
    int awalY = 0, awalX = 0;   // Posisi awal window
    int lebar = 20, tinggi = 8;  // Dimensi window (tinggi disesuaikan dengan jumlah opsi)
    
    // Buat window untuk menu
    WINDOW *menu_win = newwin(tinggi, lebar, awalY, awalX);
    keypad(menu_win, TRUE);     // Aktifkan input keyboard khusus
    
    // Daftar opsi menu
    const char *opsi[] = {
        "Pilihan 1",
        "Pilihan 2",
        "Pilihan 3",
        "Keluar"
    };
    int jumlahOpsi = sizeof(opsi) / sizeof(opsi[0]);  // Hitung jumlah opsi
    int pilihanTerpilih = 0;    // Opsi yang sedang dipilih (highlight)
    int pilihan = -1;           // Opsi yang dipilih dengan Enter (-1 = belum dipilih)
    
    // Loop utama program
    while (1) {
        // Tampilkan menu
        print_menu(menu_win, pilihanTerpilih, opsi, jumlahOpsi);
        
        // Ambil input dari pengguna
        int tombol = wgetch(menu_win);
        
        // Proses input
        switch(tombol) {
            case KEY_UP:    // Tombol panah atas
                if (pilihanTerpilih <= 0)
                    pilihanTerpilih = jumlahOpsi - 1;  // Ke opsi terakhir
                else
                    --pilihanTerpilih;                  // Ke opsi sebelumnya
                break;
                
            case KEY_DOWN:  // Tombol panah bawah
                if (pilihanTerpilih >= jumlahOpsi - 1)
                    pilihanTerpilih = 0;               // Ke opsi pertama
                else
                    ++pilihanTerpilih;                  // Ke opsi berikutnya
                break;
                
            case 10:        // Tombol Enter (kode ASCII 10)
                pilihan = pilihanTerpilih;              // Simpan pilihan
                break;
                
            default:
                break;      // Abaikan tombol lainnya
        }
        
        // Keluar dari loop jika memilih "Keluar" (opsi ke-3)
        if (pilihan == 3)
            break;
    }
    
    // Bersihkan dan akhiri ncurses
    clrtoeol();     // Hapus hingga akhir baris
    refresh();      // Perbarui layar
    endwin();       // Akhiri mode ncurses
    
    return 0;
}

// Fungsi untuk menampilkan menu dengan highlight pada opsi terpilih
void print_menu(WINDOW *menu_win, int pilihanTerpilih, const char *opsi[], int jumlahOpsi) {
    box(menu_win, 0, 0);  // Buat border di sekitar window
    
    // Loop melalui semua opsi
    for (int i = 0; i < jumlahOpsi; ++i) {
        // Jika ini adalah opsi yang sedang dipilih
        if (i == pilihanTerpilih) {
            wattron(menu_win, A_REVERSE);                    // Aktifkan mode reverse video
            mvwprintw(menu_win, i + 1, 1, "%s", opsi[i]);    // Tampilkan opsi dengan highlight
            wattroff(menu_win, A_REVERSE);                   // Nonaktifkan mode reverse video
        } else {
            mvwprintw(menu_win, i + 1, 1, "%s", opsi[i]);    // Tampilkan opsi normal
        }
    }
    
    wrefresh(menu_win);  // Perbarui window menu
}