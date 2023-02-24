//
// Created by Ophélien DUPARC on 24/02/2023.
//

#include <ncurses.h>
#include "ncurses_utils.h"


/**
 * Write text in the upper left corner of a ncurses window
 *
 * @param window
 * @param format
 * @param ...
 * @return
 */
extern int top_left_text(WINDOW* window, const char* format, ...) {

    if(stdscr == nullptr) return -1;

    int status = 0;

    va_list args;
    va_start(args, format);
    status = mvwprintw(window, 1, 0, format, args);
    va_end(args);

    return status;
}

extern int top_center_text(WINDOW* window, const char* format, ...) {

    if(stdscr == nullptr) return -1;

    int lines, cols, status = 0;

    getmaxyx(window, cols, lines);


    va_list args;
    va_start(args, format);

    int length = snprintf(NULL, 0, format, args);


    status = mvwprintw(window, 1, 0, format, args);
    va_end(args);

    return status;
}