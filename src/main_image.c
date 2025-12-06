#include <stdio.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("Usage: %s <IMAGE_FILE> <scale>\n", argv[0]);
        return 1;
    }

    float scale = atof(argv[2]);
    if (scale <= 0 || scale > 1) {
        printf("Scale must be between 0 and 1.\n");
        return 1;
    }

    char *ASCII = "@%#*+=-:. ";
    int width, height, channels;
    unsigned char *img = stbi_load(argv[1], &width, &height, &channels, 3);
    if (img == NULL) {
        printf("Error: Image not found\n");
        return 1;
    }

    int scaled_w = width * scale;
    int scaled_h = height * scale * 0.5;

    FILE *out = fopen("output.txt", "w");

    for (int y = 0; y < scaled_h; y++) {
        for (int x = 0; x < scaled_w; x++) {
            int src_x = x / scale;
            int src_y = y / (scale * 0.5);

            int idx = (src_y * width + src_x) * 3;

            unsigned char r = img[idx + 0];
            unsigned char g = img[idx + 1];
            unsigned char b = img[idx + 2];
            
            int brightness = (r + g + b) / 3;
            int i = (brightness * 9) / 255;

            fprintf(out, "\x1b[38;2;%d;%d;%dm%c", r, g, b, ASCII[i]);
        }
        fprintf(out, "\x1b[0m\n");
    }

    printf("Generated: output.txt (%dx%d scaled to %dx%d)\n", width, height, scaled_w, scaled_h);

    stbi_image_free(img);
    fclose(out);
    return 0;
}
