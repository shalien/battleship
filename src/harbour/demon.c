//
// Created by Ophélien DUPARC on 12/02/2023.
//

#include <stdlib.h>
#include <unistd.h>
#include "demon.h"
#include "../battleship_hull/siren.h"

/**
 * Will demonize the server
 *
 * @return
 */
void demonize() {

    switch(fork()) {
        case -1: //Error
            E("Issue during forking ! Stopping harbour");
            exit(EXIT_FAILURE);
            break;
        case 0: // Child
            L("Harbour child process started");
            L("Getting session id");

            pid_t  sid = setsid();

            if(sid == -1) {
                E("Error getting session !");
                exit(EXIT_FAILURE);
            }
            break;

        default: // Parent
            L("Harbour successfully forked, stopping parent");
            wait(NULL);
            break;
    }
}