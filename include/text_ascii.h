#ifndef TEXT_ASCII_H
#define TEXT_ASCII_H

#define NUM_CHARS 27

typedef struct {
    int height;
    int width;
    char **chars[NUM_CHARS];
} Style;

extern Style DEFAULT;

char **get_ascii_char(Style *style, char c);
void print_art(Style *style, char *str, int scale);

void test_input(char *str);

#endif
