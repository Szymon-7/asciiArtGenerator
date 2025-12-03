#include <stdio.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <IMAGE_FILE>\n", argv[0]);
        return 1;
    }

    char *file_path = argv[1];

    FILE *fptr = fopen(file_path, "rb");
    if (fptr == NULL) {
        printf("File not found\n");
        return 1;
    }

    fclose(fptr);
    return 0;
}
