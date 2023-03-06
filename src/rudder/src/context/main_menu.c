//
// Created by Ophélien DUPARC on 28/02/2023.
//

#include <curses.h>
#include "main_menu.h"
#include "../../../hull/src/utils/array_utils.h"
#include "../window.h"
#include "../context.h"
#include "../../../hull/src/curses/curses_utils.h"

char menu_options[2][7] = { "Jouer", "Quitter" };
char item[10];

int i = 0, key_code, text_width = 10;
WINDOW* menu_window;
WINDOW* parent_window;

struct CONTEXT* new_main_menu(WINDOW* parent) {

    parent_window = parent;

    if(stdscr == NULL) return NULL;

    menu_window = subwin(parent, 4, 12, 10, 35);

    box(menu_window, 0, 0);

    for(; i < array_length(menu_options); i++) {
        if(i == 0) {
            wattron(menu_window, A_STANDOUT);
        } else {
            wattroff(menu_window, A_STANDOUT);
        }

        snprintf(item, 10, "%-7s", menu_options[i]);
        mvwprintw(menu_window, i + 1, 2, "%s", item);

    }

    wnoutrefresh(menu_window);
    set_refresh_needed(true);

    struct CONTEXT* main_menu_context = new_context(menu_window, handle_main_menu_input);

    return main_menu_context;
}

void handle_main_menu_input(int c) {
    switch(c) {
        case KEY_UP:
            break;
        case KEY_DOWN:
            break;
        case KEY_ENTER:
        case 10:
            bottom_left_text(menu_window, "Enter");
            set_refresh_needed(true);
            break;
        default:
            break;
    }
}




