//
// Created by Ophélien DUPARC on 11/02/2023.
//

#include <unistd.h>
#include <sys/wait.h>
#include "../battleship_hull/siren.h"
#include "demon.h"

int main() {
    L("starting harbour");
    L("Forking to demonize the server");

    demonize();

    wait(NULL);

    // exit(EXIT_SUCCESS);
}