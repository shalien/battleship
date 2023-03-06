//
// Created by Ophélien DUPARC on 28/02/2023.
//

#ifndef BATTLESHIP_MAIN_MENU_H
#define BATTLESHIP_MAIN_MENU_H

#include "../context.h"

struct CONTEXT* new_main_menu(WINDOW* parent);

void handle_main_menu_input(int c);

#endif //BATTLESHIP_MAIN_MENU_H
