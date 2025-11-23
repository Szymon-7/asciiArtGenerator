#include "text_ascii.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    if (argc < 2) {
        printf("Usage: %s <INPUT> [SCALE]\n", argv[0]);
        return 1;
    }

    char *input = argv[1];
    int scale = 1; // default 

    if (argc >= 3) {
        scale = atoi(argv[2]); // convert to int 
        if (scale <= 0) {
            printf("Scale must be a positive integer.\n");
            return 1;
        }
    }

    print_art(&DEFAULT, input, scale);

    return 0;
}
