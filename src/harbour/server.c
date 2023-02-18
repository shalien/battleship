//
// Created by Ophélien DUPARC on 12/02/2023.
//

#include <netinet/in.h>
#include <stdlib.h>
#include "server.h"
#include "../battleship_hull/siren.h"
#include "main.h"

int main_ports[] = {8477, 4777, 7773, 5419};
int main_ports_size = sizeof(main_ports) / sizeof(main_ports[0]);
int opt = 1;

struct sockaddr_in server_address;
socklen_t addrlen = sizeof(server_address);

int incoming_socket;
int sockfd;


void start_server() {
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0) {
        EE("Error while creating socket !");
        exit(EXIT_FAILURE);
    }

    if (setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt)) < 0) {
        EE("Unable to define socket option");
        exit(EXIT_FAILURE);
    }

    server_address.sin_family = AF_INET;
    server_address.sin_addr.s_addr = INADDR_ANY;


    for (int p = 0; p < main_ports_size; p++) {
        int currentprt = main_ports[p];

        server_address.sin_port = htons(currentprt);

        if (bind(sockfd, (struct sockaddr *) &server_address, sizeof(server_address)) < 0) {
            if (p < main_ports_size) {
                EE("Error biding socket with  %d, trying port %d!", currentprt, main_ports[p + 1]);
                continue;
            } else if (p >= main_ports_size) {
                EE("Error biding socket with  %d!", currentprt);
                exit(EXIT_FAILURE);
            }
        } else {
            break;
        }

    }

    if (listen(sockfd, 0) < 0) {
        EE("Error while listening");
        exit(EXIT_FAILURE);
    } else {
        L("Server listening on port %d", server_address.sin_port);
    }

    while (!is_close_requested()) {
        if ((incoming_socket = accept(sockfd,
                                      (struct sockaddr *) &server_address,
                                      (socklen_t *) &addrlen)) < 0) {
            L("New incoming connection on %d", incoming_socket);
        }
    }

    shutdown(sockfd, SHUT_RDWR);
}