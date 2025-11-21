#include "text_ascii.h"
#include <stdio.h>
#include <string.h>

char *LETTER_A[] = {
    "  ###  ",
    " #   # ",
    "#     #",
    "#     #",
    "#######",
    "#     #",
    "#     #"
};
char *LETTER_B[] = {
    "###### ",
    "#     #",
    "#     #",
    "###### ",
    "#     #",
    "#     #",
    "###### "
};
char *LETTER_C[] = {
    " ######",
    "#      ",
    "#      ",
    "#      ",
    "#      ",
    "#      ",
    " ######"
};
char *LETTER_D[] = {
    "#####  ",
    "#    # ",
    "#     #",
    "#     #",
    "#     #",
    "#    # ",
    "#####  "
};
char *LETTER_E[] = {
    "#######",
    "#      ",
    "#      ",
    "#####  ",
    "#      ",
    "#      ",
    "#######"
};
char *LETTER_F[] = {
    "#######",
    "#      ",
    "#      ",
    "#####  ",
    "#      ",
    "#      ",
    "#      "
};

char *get_ascii_char(char c) {
    switch (c) {
        case 'A': return (char *)LETTER_A;
        case 'B': return (char *)LETTER_B;
        case 'C': return (char *)LETTER_C;
        case 'D': return (char *)LETTER_D;
        case 'E': return (char *)LETTER_E;
        case 'F': return (char *)LETTER_F;
        default: return NULL;
    }
}

void print_art(char *str) {
    int len = strlen(str);
    for (int row = 0; row < CHAR_HEIGHT; row++) {
        for (int i = 0; i < len; i++) {
            char **ascii_char = (char **)get_ascii_char(str[i]);
            if (ascii_char != NULL)
                printf("%s ", ascii_char[row]);
        }
        printf("\n");
    }
}

void test_input(char *str) {
    printf("Input: %s\n", str);
}
