#include "text_ascii.h"

char *ANSI_A[] = {
    " █████╗ ",
    "██╔══██╗",
    "███████║",
    "██╔══██║",
    "██║  ██║",
    "╚═╝  ╚═╝"
};
char *ANSI_B[] = {
    "██████╗ ",
    "██╔══██╗",
    "██████╔╝",
    "██╔══██╗",
    "██████╔╝",
    "╚═════╝ "
};

Style ANSI = {
    .height = 6,
    .width = 8,
    .chars = {
        ANSI_A, ANSI_B
    }
};

