//
// Created by Ophélien DUPARC on 11/02/2023.
//


#include "window.h"
#include "../../hull/src/log/siren.h"
#include "../../hull/src/curses/curses_utils.h"
#include "context.h"
#include "context/main_menu.h"


bool window_refresh = true;
int c;

const int SCREEN_LINES = 24;
const int SCREEN_COLS = 20;

int current_mode = -1;

const int STARTING= -1, MAIN_MENU = 0, SERVER = 1, GAME = 2;

void init_screen() {

    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);

    curs_set(0);

    clear();

    WINDOW *main = stdscr;
    box(main, 0, 0);

    top_center_text(main, "B A T T L E S H I P");

    bottom_center_text(main, "V E R S I O N - 0 . 0 . 1");

    struct CONTEXT* context = new_main_menu(main);

    do {


        context->handle_input(c);

       if(window_refresh) {
           wnoutrefresh(main);
           doupdate();
           window_refresh = false;
       }

    } while ((c = getch()) != 'q');

    delwin(main);
    endwin();

}

void set_refresh_needed(bool refresh) {
    window_refresh = refresh;
}