//
// Created by Ophélien DUPARC on 11/02/2023.
//

#include <ncurses.h>
#include <string.h>
#include "window.h"
#include "../battleship_hull/siren.h"

int lines, cols;

void init_screen() {

    initscr();
    getmaxyx(stdscr, lines, cols);

    noecho();
    nocbreak();
    keypad(stdscr, TRUE);

    WINDOW* main = newwin(lines, cols, 0, 0);

    box(main, 0, 0);
    mvwprintw(main, 1, center_text("Battleship"), "Battleship");

    mvwprintw(main, lines - 1, bottom_right_text("xx x yy") - 1, "%d x %d", lines, cols);
    // refreshes the screen
    refresh();
    wrefresh(main);
    wrefresh(main);

    // pause the screen output
    do {



    } while (getch() != 'c');
    // deallocates memory and ends ncurses
    endwin();

}

/**
 *
 * Quick function to find the starting point for centering the text
 *
 * @param format
 * @return
 */
int center_text(const char* format) {

    int txtlen = strlen(format);

    return (cols / 2) - (txtlen / 2);

}

int bottom_right_text(const char* format) {
    int txtlen = strlen(format);

    return cols - txtlen;
}