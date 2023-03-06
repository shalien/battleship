//
// Created by Ophélien DUPARC on 06/03/2023.
//

#ifndef BATTLESHIP_CONTEXT_H
#define BATTLESHIP_CONTEXT_H

#include "window.h"

struct CONTEXT {
    WINDOW* windows;
    void (*handle_input)(int c);
};

struct CONTEXT* new_context(WINDOW* window, void* handle_input);

void del_context(struct CONTEXT* context);

#endif //BATTLESHIP_CONTEXT_H
