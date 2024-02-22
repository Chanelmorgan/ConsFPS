#include <iostream>
#include <ncurses.h>

using namespace std;

int nScreenWidth = 120;
int nScreenHeight = 40;

int main() {
    // initialize ncurses
    initscr();
    noecho();
    curs_set(0);

    // create the screen buffer
    wchar_t *screen = new wchar_t[nScreenWidth * nScreenHeight];

    // main game loop
    while (true) {
        // clear the screen
        erase();

        // your rendering and game logic here

        // refresh the screen
        refresh();

        // wait for a short duration (simulate frame rate)
        napms(16);  // 16 milliseconds delay for approximately 60 fps
    }

    // clean up
    endwin();
    delete[] screen;



    return 0;
}
