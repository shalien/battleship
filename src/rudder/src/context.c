//
// Created by Ophélien DUPARC on 06/03/2023.
//

#include <stdlib.h>
#include "context.h"


typedef struct CONTEXT CONTEXT;

struct CONTEXT* new_context(WINDOW* window, void* handle_input) {
    struct CONTEXT* my_struct = malloc(sizeof(CONTEXT));
    my_struct->windows = window;
    my_struct->handle_input = handle_input;

    return my_struct;
}

void del_context(CONTEXT* context) {
    free(context);
}

