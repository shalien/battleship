//
// Created by Ophélien DUPARC on 28/02/2023.
//

#include <curses.h>
#include "main_menu.h"
#include "../../../hull/src/utils/array_utils.h"
#include "../window.h"

char menu_options[2][7] = { "Jouer", "Quitter" };
char item[10];

int i = 0, key_code, text_width = 10;

WINDOW* new_main_menu(WINDOW* parent) {

    if(stdscr == NULL) return NULL;

    WINDOW* menu_window = subwin(parent, 4, 12, 10, 35);

    box(menu_window, 0, 0);

    for(; i < array_length(menu_options); i++) {
        if(i == 0) {
            wattron(menu_window, A_STANDOUT);
        } else {
            wattroff(menu_window, A_STANDOUT);
        }

        sprintf(item, "%-7s", menu_options[i]);
        mvwprintw(menu_window, i + 1, 2, "%s", item);

    }

    wnoutrefresh(menu_window);
    set_refresh_needed(true);

    return menu_window;
}

void handle_input(int c) {
    switch(c) {
        case KEY_UP:
            break;
        case KEY_DOWN:
            break;
        case KEY_ENTER:
            break;
        default:
            break;
    }
}




