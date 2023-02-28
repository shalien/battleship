//
// Created by Ophelien on 28/02/2023.
//

#include "array_utils.h"


extern int array_length(void** array) {
    return sizeof(array) / sizeof((char *) array[0]);
}