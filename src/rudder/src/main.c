//
// Created by Ophélien DUPARC on 11/02/2023.
//

#include <stdbool.h>
#include "window.h"
#include "../../hull/src/log/siren.h"

bool is_close_requested = false;

int main() {

    L("Starting rudder");
    L("Starting curses mode");

    init_screen();
}