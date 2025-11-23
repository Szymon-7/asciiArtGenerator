#include "text_ascii.h"
#include <stdio.h>
#include <string.h>

char **get_ascii_char(Style *style, char c) {
    if (c == ' ')
        return style->chars[26]; 
    if (c >= 'a' && c <= 'z')
        c = c - 'a' + 'A';
    if (c >= 'A' && c <= 'Z')
        return style->chars[c - 'A'];
    return style->chars[26];
}

void print_art(Style *style, char *str, int scale) {
    int len = strlen(str);

    for (int row = 0; row < style->height; row++) {
        for (int srow = 0; srow < scale; srow++) {
            for (int i = 0; i < len; i++) {
                char **ascii_char = get_ascii_char(style, str[i]);
                if (ascii_char != NULL) {
                    for (int col = 0; col < style->width; col++) {
                        for (int scol = 0; scol < scale; scol++) {
                            putchar(ascii_char[row][col]);
                        }
                    }
                    putchar(' ');
                }
            }
            putchar('\n');
        }
    }
}

void test_input(char *str) {
    printf("Input: %s\n", str);
}
