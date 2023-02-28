//
// Created by Ophélien DUPARC on 24/02/2023.
//

#include <curses.h>
#include "curses_utils.h"
#include "../utils/string_utils.h"


/**
 * Write text in the upper left corner of a curses window
 *
 * @param window
 * @param format
 * @param ...
 * @return
 */
extern int top_left_text(WINDOW* window, const char* format, ...) {

    if(stdscr == NULL) return -1;

    int status = 0;

    va_list args;
    va_start(args, format);
    status = mvwprintw(window, 0, 0, format, args);
    va_end(args);

    return status;
}

extern int top_center_text(WINDOW* window, const char* format, ...) {

    if(stdscr == NULL) return -1;

    int cols = getmaxx(window), status = 0;


    va_list args;
    va_start(args, format);

    int pos = (cols / 2) - half_string_length(format, args);

    status = mvwprintw(window, 1, pos, format, args);
    va_end(args);

    return status;
}