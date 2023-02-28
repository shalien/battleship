//
// Created by Ophélien DUPARC on 11/02/2023.
//

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include "../../hull/src/log/siren.h"
#include "server.h"

bool close_requested = false;

int main() {
    L("starting harbour");
    L("Forking to demonize the server");

//    demonize();

    start_server();

    return EXIT_SUCCESS;
}

bool is_close_requested() {
    return close_requested;
}