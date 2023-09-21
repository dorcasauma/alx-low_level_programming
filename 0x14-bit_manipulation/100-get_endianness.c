#include <stdio.h>

int get_endianness(void)
{
unsigned int x = 1;
char *byte = (char *)&x;
return (int)(*byte);
}
