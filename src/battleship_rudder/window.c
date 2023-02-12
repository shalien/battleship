//
// Created by Ophélien DUPARC on 11/02/2023.
//

#include <ncurses.h>
#include "window.h"
#include "../battleship_hull/siren.h"
#include "../battleship_hull/logo.h"

int rows, cols;

extern void init_screen() {
    initscr();

    getmaxyx(stdscr, rows, cols);
    resizeterm(120, 120);

    keypad(stdscr, TRUE);
    noecho();
    cbreak();

    WINDOW* title = newwin(100, 100, 20, 20);
    wprintw(title, logo_txt);
    wrefresh(title);



}