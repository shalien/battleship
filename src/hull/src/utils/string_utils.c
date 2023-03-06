//
// Created by Ophelien on 28/02/2023.
//

#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "string_utils.h"

/**
 * Give the half length of a variadic string
 *
 * @param fmt
 * @param ...
 * @return
 */
extern int half_string_length(const char* fmt, ...) {
        char buffer[1024];

        va_list args;
        va_start(args, fmt);

        int length = snprintf(buffer, 1024, fmt, args);

        va_end(args);

        if(length <= 0) {
            return 0;
        } else {
            return length / 2;
        }

}
