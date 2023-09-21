#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
/**
 * create_file - creates a file
 * @text_content: terminated string to write to the file
 * @filename: file to be created
 * Return:1 on success,-1 on failure
*/

int create_file(const char *filename, char *text_content)
{
FILE *file = fopen(filename, "w");
if (file == NULL)
{
return (-1);
}
if (text_content != NULL)
{
fprintf(file, "%s", text_content);
}

fclose(file);
if (chmod(filename, 0400 | 0200) == -1)
{
return (-1);
}
return (1);
}






