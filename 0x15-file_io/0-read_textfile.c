#include <stdio.h>
#include <stdlib.h>
#include <string.h>
ssize_t read_textfile(const char *filename)
{
    FILE* myfile;
    char buffer[101];
    if (filename == NULL){
        return (0);
    }
    myfile = fopen(filename, "r");
    if (myfile == NULL){
        return (0);
    printf("%s \n",fgets(buffer,sizeof(buffer),myfile));
    }
    fclose(myfile);
    return strlen(buffer);

}
