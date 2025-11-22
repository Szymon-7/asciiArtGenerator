#include "text_ascii.h"
#include <stdio.h>
#include <string.h>

char *LETTER_A[] = {
    "  ###  ",
    " #   # ",
    "#     #",
    "#######",
    "#     #",
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
char *LETTER_G[] = {
    " ######",
    "#      ",
    "#      ",
    "#  ####",
    "#     #",
    "#     #",
    " ##### "
};
char *LETTER_H[] = {
    "#     #",
    "#     #",
    "#     #",
    "#######",
    "#     #",
    "#     #",
    "#     #"
};
char *LETTER_I[] = {
    "#######",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   ",
    "#######"
};
char *LETTER_J[] = {
    "#######",
    "     # ",
    "     # ",
    "     # ",
    "     # ",
    "#    # ",
    " ####  "
};
char *LETTER_K[] = {
    "#    # ",
    "#   #  ",
    "#  #   ",
    "###    ",
    "#  #   ",
    "#   #  ",
    "#    # "
};
char *LETTER_L[] = {
    "#      ",
    "#      ",
    "#      ",
    "#      ",
    "#      ",
    "#      ",
    "#######"
};
char *LETTER_M[] = {
    "#     #",
    "##   ##",
    "# # # #",
    "#  #  #",
    "#     #",
    "#     #",
    "#     #"
};
char *LETTER_N[] = {
    "#     #",
    "##    #",
    "# #   #",
    "#  #  #",
    "#   # #",
    "#    ##",
    "#     #"
};
char *LETTER_O[] = {
    " ##### ",
    "#     #",
    "#     #",
    "#     #",
    "#     #",
    "#     #",
    " ##### "
};
char *LETTER_P[] = {
    "###### ",
    "#     #",
    "#     #",
    "###### ",
    "#      ",
    "#      ",
    "#      "
};
char *LETTER_Q[] = {
    " ##### ",
    "#     #",
    "#     #",
    "#     #",
    "#   # #",
    "#    # ",
    " #### #"
};
char *LETTER_R[] = {
    "###### ",
    "#     #",
    "#     #",
    "###### ",
    "#   #  ",
    "#    # ",
    "#     #"
};
char *LETTER_S[] = {
    " ######",
    "#      ",
    "#      ",
    " ##### ",
    "      #",
    "      #",
    "###### "
};
char *LETTER_T[] = {
    "#######",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   "
};
char *LETTER_U[] = {
    "#     #",
    "#     #",
    "#     #",
    "#     #",
    "#     #",
    "#     #",
    " ##### "
};
char *LETTER_V[] = {
    "#     #",
    "#     #",
    "#     #",
    "#     #",
    " #   # ",
    "  # #  ",
    "   #   "
};
char *LETTER_W[] = {
    "#     #",
    "#     #",
    "#     #",
    "#  #  #",
    "# # # #",
    "##   ##",
    "#     #"
};
char *LETTER_X[] = {
    "#     #",
    " #   # ",
    "  # #  ",
    "   #   ",
    "  # #  ",
    " #   # ",
    "#     #"
};
char *LETTER_Y[] = {
    "#     #",
    " #   # ",
    "  # #  ",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   "
};
char *LETTER_Z[] = {
    "#######",
    "     # ",
    "    #  ",
    "   #   ",
    "  #    ",
    " #     ",
    "#######"
};

char *get_ascii_char(char c) {
    switch (c) {
        case 'A': return (char *)LETTER_A;
        case 'B': return (char *)LETTER_B;
        case 'C': return (char *)LETTER_C;
        case 'D': return (char *)LETTER_D;
        case 'E': return (char *)LETTER_E;
        case 'F': return (char *)LETTER_F;
        case 'G': return (char *)LETTER_G;
        case 'H': return (char *)LETTER_H;
        case 'I': return (char *)LETTER_I;
        case 'J': return (char *)LETTER_J;
        case 'K': return (char *)LETTER_K;
        case 'L': return (char *)LETTER_L;
        case 'M': return (char *)LETTER_M;
        case 'N': return (char *)LETTER_N;
        case 'O': return (char *)LETTER_O;
        case 'P': return (char *)LETTER_P;
        case 'Q': return (char *)LETTER_Q;
        case 'R': return (char *)LETTER_R;
        case 'S': return (char *)LETTER_S;
        case 'T': return (char *)LETTER_T;
        case 'U': return (char *)LETTER_U;
        case 'V': return (char *)LETTER_V;
        case 'W': return (char *)LETTER_W;
        case 'X': return (char *)LETTER_X;
        case 'Y': return (char *)LETTER_Y;
        case 'Z': return (char *)LETTER_Z;
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
