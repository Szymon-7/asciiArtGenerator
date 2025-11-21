#include "text_ascii.h"
#include <stdio.h>

int main(int argc, char **argv) {

    if (argc > 1)
        print_art(argv[1]);
    else
        printf("Usage: ./bin/ascii_to_art <INPUT>\n");

    return 0;
}
