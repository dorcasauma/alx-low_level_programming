#include <stdio.h>
#include <stdlib.h>

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
return(1);
}
