#include "text_ascii.h"
#include <stdio.h>
#include <string.h>

char **get_ascii_char(Style *style, char c) {
    if (style == &ANSI) {
        if (c == ' ')
            return style->chars[36];

        if (c >= 'A' && c <= 'Z')
            return style->chars[(c - 'A')];

        if (c >= 'a' && c <= 'z')
            return style->chars[(c - 'a')];

        if (c >= '0' && c <= '9')
            return style->chars[(c - '0') + 26];

        return style->chars[36];
    }

    if (c == ' ')
        return style->chars[62];

    if (c >= 'A' && c <= 'Z')
        return style->chars[c - 'A'];

    if (c >= 'a' && c <= 'z')
        return style->chars[(c - 'a') + 26];

    if (c >= '0' && c <= '9')
        return style->chars[(c - '0') + 52];

    return style->chars[62];
}

void print_art(Style *style, char *str, int scale) {
    int len = strlen(str);

    putchar('\n');

    for (int row = 0; row < style->height; row++) {
        for (int srow = 0; srow < scale; srow++) {
            for (int i = 0; i < len; i++) {
                char **ascii_char = get_ascii_char(style, str[i]);
                if (ascii_char != NULL) {
                    char *row_str = ascii_char[row];
                    for (int col = 0; row_str[col] != '\0'; col++) {
                        for (int scol = 0; scol < scale; scol++) {
                            putchar(row_str[col]);
                        }
                    }
                    putchar(' ');
                }
            }
            putchar('\n');
        }
    }
}

