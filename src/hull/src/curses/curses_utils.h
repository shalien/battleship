//
// Created by Ophélien DUPARC on 24/02/2023.
//

#ifndef BATTLESHIP_CURSES_UTILS_H
#define BATTLESHIP_CURSES_UTILS_H

extern int top_left_text(WINDOW* window, const char* format, ...);

extern int top_center_text(WINDOW* window, const char* format, ...);

extern int top_right_text(WINDOW* window, const char* format, ...);

extern int bottom_left_text(WINDOW* window, const char* format, ...);

extern int bottom_center_text(WINDOW* window, const char* format, ...);

extern int bottom_right_text(WINDOW* window, const char* format, ...);

#endif //BATTLESHIP_CURSES_UTILS_H
