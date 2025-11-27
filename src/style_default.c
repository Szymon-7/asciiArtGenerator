#include "text_ascii.h"

char *DEFAULT_A[] = {
    "  ###  ",
    " #   # ",
    "#     #",
    "#######",
    "#     #",
    "#     #",
    "#     #"
};
char *DEFAULT_B[] = {
    "###### ",
    "#     #",
    "#     #",
    "###### ",
    "#     #",
    "#     #",
    "###### "
};
char *DEFAULT_C[] = {
    " ######",
    "#      ",
    "#      ",
    "#      ",
    "#      ",
    "#      ",
    " ######"
};
char *DEFAULT_D[] = {
    "#####  ",
    "#    # ",
    "#     #",
    "#     #",
    "#     #",
    "#    # ",
    "#####  "
};
char *DEFAULT_E[] = {
    "#######",
    "#      ",
    "#      ",
    "#####  ",
    "#      ",
    "#      ",
    "#######"
};
char *DEFAULT_F[] = {
    "#######",
    "#      ",
    "#      ",
    "#####  ",
    "#      ",
    "#      ",
    "#      "
};
char *DEFAULT_G[] = {
    " ######",
    "#      ",
    "#      ",
    "#  ####",
    "#     #",
    "#     #",
    " ##### "
};
char *DEFAULT_H[] = {
    "#     #",
    "#     #",
    "#     #",
    "#######",
    "#     #",
    "#     #",
    "#     #"
};
char *DEFAULT_I[] = {
    "#######",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   ",
    "#######"
};
char *DEFAULT_J[] = {
    "#######",
    "     # ",
    "     # ",
    "     # ",
    "     # ",
    "#    # ",
    " ####  "
};
char *DEFAULT_K[] = {
    "#    # ",
    "#   #  ",
    "#  #   ",
    "###    ",
    "#  #   ",
    "#   #  ",
    "#    # "
};
char *DEFAULT_L[] = {
    "#      ",
    "#      ",
    "#      ",
    "#      ",
    "#      ",
    "#      ",
    "#######"
};
char *DEFAULT_M[] = {
    "#     #",
    "##   ##",
    "# # # #",
    "#  #  #",
    "#     #",
    "#     #",
    "#     #"
};
char *DEFAULT_N[] = {
    "#     #",
    "##    #",
    "# #   #",
    "#  #  #",
    "#   # #",
    "#    ##",
    "#     #"
};
char *DEFAULT_O[] = {
    " ##### ",
    "#     #",
    "#     #",
    "#     #",
    "#     #",
    "#     #",
    " ##### "
};
char *DEFAULT_P[] = {
    "###### ",
    "#     #",
    "#     #",
    "###### ",
    "#      ",
    "#      ",
    "#      "
};
char *DEFAULT_Q[] = {
    " ##### ",
    "#     #",
    "#     #",
    "#     #",
    "#   # #",
    "#    # ",
    " #### #"
};
char *DEFAULT_R[] = {
    "###### ",
    "#     #",
    "#     #",
    "###### ",
    "#   #  ",
    "#    # ",
    "#     #"
};
char *DEFAULT_S[] = {
    " ######",
    "#      ",
    "#      ",
    " ##### ",
    "      #",
    "      #",
    "###### "
};
char *DEFAULT_T[] = {
    "#######",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   "
};
char *DEFAULT_U[] = {
    "#     #",
    "#     #",
    "#     #",
    "#     #",
    "#     #",
    "#     #",
    " ##### "
};
char *DEFAULT_V[] = {
    "#     #",
    "#     #",
    "#     #",
    "#     #",
    " #   # ",
    "  # #  ",
    "   #   "
};
char *DEFAULT_W[] = {
    "#     #",
    "#     #",
    "#     #",
    "#  #  #",
    "# # # #",
    "##   ##",
    "#     #"
};
char *DEFAULT_X[] = {
    "#     #",
    " #   # ",
    "  # #  ",
    "   #   ",
    "  # #  ",
    " #   # ",
    "#     #"
};
char *DEFAULT_Y[] = {
    "#     #",
    " #   # ",
    "  # #  ",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   "
};
char *DEFAULT_Z[] = {
    "#######",
    "     # ",
    "    #  ",
    "   #   ",
    "  #    ",
    " #     ",
    "#######"
};
char *DEFAULT_a[] = {
    "       ",
    "       ",
    " ##### ",
    "      #",
    " ######",
    "#     #",
    " ##### "
};
char *DEFAULT_b[] = {
    "#      ",
    "#      ",
    "###### ",
    "#     #",
    "#     #",
    "#     #",
    "###### "
};
char *DEFAULT_c[] = {
    "       ",
    "       ",
    " ##### ",
    "#      ",
    "#      ",
    "#      ",
    " ##### "
};
char *DEFAULT_d[] = {
    "      #",
    "      #",
    " ######",
    "#     #",
    "#     #",
    "#     #",
    " ######"
};
char *DEFAULT_e[] = {
    "       ",
    "       ",
    " ##### ",
    "#     #",
    "#######",
    "#      ",
    " ##### "
};
char *DEFAULT_f[] = {
    "   ### ",
    "  #    ",
    " ####  ",
    "  #    ",
    "  #    ",
    "  #    ",
    "  #    "
};
char *DEFAULT_g[] = {
    "       ",
    "       ",
    " ##### ",
    "#     #",
    " ######",
    "      #",
    " ##### "
};
char *DEFAULT_h[] = {
    "#      ",
    "#      ",
    "###### ",
    "#     #",
    "#     #",
    "#     #",
    "#     #"
};
char *DEFAULT_i[] = {
    "   #   ",
    "       ",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   "
};
char *DEFAULT_j[] = {
    "     # ",
    "       ",
    "     # ",
    "     # ",
    "     # ",
    "#    # ",
    " ####  "
};
char *DEFAULT_k[] = {
    "#      ",
    "#   #  ",
    "#  #   ",
    "###    ",
    "#  #   ",
    "#   #  ",
    "#    # "
};
char *DEFAULT_l[] = {
    "  #    ",
    "  #    ",
    "  #    ",
    "  #    ",
    "  #    ",
    "  #    ",
    "   ##  "
};
char *DEFAULT_m[] = {
    "       ",
    "       ",
    "##  ## ",
    "# ## # ",
    "# ## # ",
    "#    # ",
    "#    # "
};
char *DEFAULT_n[] = {
    "       ",
    "       ",
    "#####  ",
    "#    # ",
    "#    # ",
    "#    # ",
    "#    # "
};
char *DEFAULT_o[] = {
    "       ",
    "       ",
    " ##### ",
    "#     #",
    "#     #",
    "#     #",
    " ##### "
};
char *DEFAULT_p[] = {
    "       ",
    "       ",
    "###### ",
    "#     #",
    "###### ",
    "#      ",
    "#      "
};
char *DEFAULT_q[] = {
    "       ",
    "       ",
    " ######",
    "#     #",
    "#     #",
    " ######",
    "      #"
};
char *DEFAULT_r[] = {
    "       ",
    "       ",
    "#####  ",
    "#    # ",
    "#      ",
    "#      ",
    "#      "
};
char *DEFAULT_s[] = {
    "       ",
    "       ",
    " ##### ",
    "#      ",
    " ##### ",
    "      #",
    " ##### "
};
char *DEFAULT_t[] = {
    "  #    ",
    "  #    ",
    "#####  ",
    "  #    ",
    "  #    ",
    "  #    ",
    "   ### "
};
char *DEFAULT_u[] = {
    "       ",
    "       ",
    "#     #",
    "#     #",
    "#     #",
    "#     #",
    " ##### "
};
char *DEFAULT_v[] = {
    "       ",
    "       ",
    "#     #",
    "#     #",
    " #   # ",
    "  # #  ",
    "   #   "
};
char *DEFAULT_w[] = {
    "       ",
    "       ",
    "#     #",
    "#  #  #",
    "# # # #",
    "##   ##",
    "#     #"
};
char *DEFAULT_x[] = {
    "       ",
    "       ",
    " #   # ",
    "  # #  ",
    "   #   ",
    "  # #  ",
    " #   # "
};
char *DEFAULT_y[] = {
    "       ",
    "       ",
    "#     #",
    "#     #",
    " ######",
    "      #",
    " ##### "
};
char *DEFAULT_z[] = {
    "       ",
    "       ",
    "#######",
    "    #  ",
    "   #   ",
    "  #    ",
    "#######"
};
char *DEFAULT_0[] = {
    " ##### ",
    "#     #",
    "#   # #",
    "#  #  #",
    "# #   #",
    "#     #",
    " ##### "
};
char *DEFAULT_1[] = {
    "  ##   ",
    " # #   ",
    "   #   ",
    "   #   ",
    "   #   ",
    "   #   ",
    " ##### "
};
char *DEFAULT_2[] = {
    " ##### ",
    "#     #",
    "      #",
    "  #### ",
    " #     ",
    "#      ",
    "#######"
};
char *DEFAULT_3[] = {
    " ##### ",
    "#     #",
    "      #",
    "  #### ",
    "      #",
    "#     #",
    " ##### "
};
char *DEFAULT_4[] = {
    "#    # ",
    "#    # ",
    "#    # ",
    "#######",
    "     # ",
    "     # ",
    "     # "
};
char *DEFAULT_5[] = {
    "#######",
    "#      ",
    "#      ",
    "###### ",
    "      #",
    "#     #",
    " ##### "
};
char *DEFAULT_6[] = {
    " ######",
    "#      ",
    "#      ",
    "###### ",
    "#     #",
    "#     #",
    " ##### "
};
char *DEFAULT_7[] = {
    "#######",
    "     # ",
    "    #  ",
    "   #   ",
    "  #    ",
    "  #    ",
    "  #    "
};
char *DEFAULT_8[] = {
    " ##### ",
    "#     #",
    "#     #",
    " ##### ",
    "#     #",
    "#     #",
    " ##### "
};
char *DEFAULT_9[] = {
    " ##### ",
    "#     #",
    "#     #",
    " ######",
    "      #",
    "      #",
    " ##### "
};
char *DEFAULT_SPACE[] = {
    "       ",
    "       ",
    "       ",
    "       ",
    "       ",
    "       ",
    "       "
};

Style DEFAULT = {
    .height = 7,
    .width = 7,
    .chars = {
        DEFAULT_A, DEFAULT_B, DEFAULT_C, DEFAULT_D, DEFAULT_E, DEFAULT_F,
        DEFAULT_G, DEFAULT_H, DEFAULT_I, DEFAULT_J, DEFAULT_K, DEFAULT_L,
        DEFAULT_M, DEFAULT_N, DEFAULT_O, DEFAULT_P, DEFAULT_Q, DEFAULT_R,
        DEFAULT_S, DEFAULT_T, DEFAULT_U, DEFAULT_V, DEFAULT_W, DEFAULT_X,
        DEFAULT_Y, DEFAULT_Z,

        DEFAULT_a, DEFAULT_b, DEFAULT_c, DEFAULT_d, DEFAULT_e, DEFAULT_f,
        DEFAULT_g, DEFAULT_h, DEFAULT_i, DEFAULT_j, DEFAULT_k, DEFAULT_l,
        DEFAULT_m, DEFAULT_n, DEFAULT_o, DEFAULT_p, DEFAULT_q, DEFAULT_r,
        DEFAULT_s, DEFAULT_t, DEFAULT_u, DEFAULT_v, DEFAULT_w, DEFAULT_x,
        DEFAULT_y, DEFAULT_z,

        DEFAULT_0, DEFAULT_1, DEFAULT_2, DEFAULT_3, DEFAULT_4,
        DEFAULT_5, DEFAULT_6, DEFAULT_7, DEFAULT_8, DEFAULT_9,

        DEFAULT_SPACE
    }
};

