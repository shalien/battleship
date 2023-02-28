//
// Created by Ophélien DUPARC on 11/02/2023.
//

#include <string.h>
#include <menu.h>

#include "window.h"
#include "../../hull/src/log/siren.h"
#include "../../hull/src/curses/curses_utils.h"

int lines, cols;

void init_screen() {

    initscr();
    getmaxyx(stdscr, lines, cols);

    noecho();
    nocbreak();
    keypad(stdscr, TRUE);

    WINDOW* main = newwin(lines, cols, 0, 0);

    box(main, 0, 0);

    top_center_text(main, "Battleship");

    // refreshes the screen
    refresh();
    wrefresh(main);

    // pause the screen output
    do {


    } while (getch() != 'c');
    // deallocates memory and ends curses
    endwin();

}