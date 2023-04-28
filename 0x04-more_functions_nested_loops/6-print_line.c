#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal.
 *
 * @return zero value
 */

void print_line(int n)
{
int i;
if (n <= 0)
{
putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
putchar('_');
}
putchar('\n');
}
