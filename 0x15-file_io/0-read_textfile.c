#include <stdio.h>
#include <stdlib.h>
#include <string.h>
ssize_t read_textfile(const char *filename, size_t letters){
    char *ch = (char *)malloc(letters + 1);
    ssize_t total_bytes_read = 0;

    FILE *file = fopen(filename, "r");
    if (filename == NULL){
        return 0;
    }
    while (fgets(ch,letters,file) != NULL){
        printf("%s", ch);
        total_bytes_read += strlen(ch);

        if ((size_t)total_bytes_read >= letters) {
            break; // Stop reading if the desired number of letters is reached
        }
    }
    printf("%s\n", ch);
    fclose(file);
    return total_bytes_read;
}
