//
// Created by Ophélien DUPARC on 11/02/2023.
//

#include <stdio.h>

#ifndef BATTLESHIP_SIREN_H
#define BATTLESHIP_SIREN_H

#define L(format, ...) log_message(__FILE_NAME__, __LINE__, format, ##__VA_ARGS__)

#define E(format, ...) log_error(__FILE_NAME__, __LINE__, format, ##__VA_ARGS__)


/**
 * Logging function
 *
 * @param content the text content to print
 * @param ... the formatted data
 */
extern void log_message(const char *file, int line, const char *format, ...);

extern void log_error(const char *file, int line, const char *format, ...);

#endif //BATTLESHIP_SIREN_H
