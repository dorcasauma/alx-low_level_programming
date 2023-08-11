#include <stdio.h>
#include <stdlib.h>

int create_file(const char *filename, char *text_content) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        return -1;
    }

    if (text_content != NULL) {
        fprintf(file, "%s", text_content);
    }

    fclose(file);
    return 0;
}

