#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - Appends text content to an existing file.
 *
 * @filename: The name of the file to which text content should be appended.
 * @text_content: The text content to be appended to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
FILE *file = fopen(filename, "a");
if (filename == NULL)
{
return (-1);
}
if (file == NULL)
{
return (-1);
}
if (text_content != NULL)
{
fprintf(file, "%s", text_content);
}
fclose(file);
return (1);
}
