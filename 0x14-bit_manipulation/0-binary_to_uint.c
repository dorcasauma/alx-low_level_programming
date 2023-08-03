#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return (0);
while (*b != '\0')
{
char c = *b;
if (c != '0' && c != '1')
return (0);
result = (result << 1) + (c - '0');
b++;
}
return (result);
}

