//
// Created by Ophélien DUPARC on 12/02/2023.
//

#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/stat.h>

#include "demon.h"
#include "../battleship_hull/siren.h"


/**
 * Will demonize the server
 *
 * @return
 */
void demonize() {
    pid_t pid;

    switch ((pid = fork())) {
        case -1: //Error
            E("Issue during forking ! Stopping harbour");
            exit(EXIT_FAILURE);
        case 0: // Child
            L("Harbour child process started");
            L("Getting session id");

            pid_t sid = setsid();

            if (sid == -1) {
                E("Error getting session !");
                exit(EXIT_FAILURE);
            }

            struct sigaction action;
            action.sa_handler = signal_action;
            sigemptyset(&action.sa_mask);
            action.sa_flags = SA_RESTART;

            L("Forking again !");

            pid_t second_pid;

            switch ((second_pid = fork())) {
                case -1:
                    E("Second fork impossible ! Stopping harbourd !");
                    exit(EXIT_FAILURE);
                case 0: // Child
                    umask(0);
                    chdir(".");
                    break;
                default:
                    L("Second parent stopping => %d", second_pid);
                    exit(EXIT_SUCCESS);
            }
            break;

        default: // Parent
            L("Harbour successfully forked => %d, stopping parent", pid);
            exit(EXIT_SUCCESS);
    }
}

void signal_action(int num) {
    switch (num) {
        case (SIGCHLD): // Signal indicate the end of a child process
            L("Child process exited");
            exit(EXIT_SUCCESS);
        case SIGHUP: // Hang Up
            // Restart ?
            L("SIGHUP received");
            break;
        default:
            break;
    }
}