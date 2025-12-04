#include <stdio.h>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <IMAGE_FILE>\n", argv[0]);
        return 1;
    }

    char *ASCII = "@%#*+=-:. ";
    int width, height, channels;
    unsigned char *img = stbi_load(argv[1], &width, &height, &channels, 1);
    if (img == NULL) {
        printf("Error: Image not found\n");
        return 1;
    }

    FILE *out = fopen("output.txt", "w");

    for (int y = 0; y < height; y += 3) {
        for (int x = 0; x < width; x++) {
            unsigned char pixel = img[y * width + x];
            int i = (pixel * 9) / 255;
            fprintf(out, "%c", ASCII[i]);
        }
        fprintf(out, "\n");
    }

    printf("Generated: output.txt\n");

    stbi_image_free(img);
    fclose(out);
    return 0;
}
