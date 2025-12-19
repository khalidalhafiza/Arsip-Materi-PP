#include <ncurses/ncurses.h>
#include <windows.h>
using namespace std;

int main() {
    initscr();  // Mulai ncurses

    for (int i = 0; i < 3; i++) {

        mvprintw(26, 100, "Loading...");
        mvprintw(27, 100, "--------------------"); // 20 strip
        mvprintw(28, 100, "|                    |");
        mvprintw(29, 100, "--------------------");

        for (int f = 1; f < 18; f++) {
            mvprintw(28, 100 + f, ">");
            refresh();   // Perbarui tampilan
            Sleep(200);  // Delay 0.2 detik
        }
    }

    endwin();  // Akhiri ncurses
    return 0;
}
