#include <stdio.h>

/**
 * prints the numbers, from 0 to 9, but not 2 and followed by a new line.
 *
 * @return zero value
 */

void print_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
if (c != 2 || c != 4)
{
putchar(c);
}
putchar('\n');
}