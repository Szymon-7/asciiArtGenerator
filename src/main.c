#include "text_ascii.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    char *input = NULL;
    int scale = 1;          // default scale
    Style *font = &DEFAULT; // default font
    char buffer[100];

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--font") == 0 && i + 1 < argc) {
            strcpy(buffer, argv[i + 1]);
            to_lowercase(buffer);
            if (strcmp(buffer, "ansi") == 0)
                font = &ANSI;
            else if (strcmp(argv[i + 1], "default") == 0)
                font = &DEFAULT;
            i++;
        }
        else if (strcmp(argv[i], "--scale") == 0 && i + 1 < argc) {
            scale = atoi(argv[i + 1]); // convert to int
            if (scale <= 0) {
                printf("Scale must be a positive integer.\n");
                return 1;
            }
            i++;
        } 
        else {
            input = argv[i];
        }
    }

    if (!input) {
        printf("Usage: %s <INPUT> [--font <FONT>] [--scale <N>]\n", argv[0]);
        return 1;
    }

    print_art(font, input, scale);

    return 0;
}

